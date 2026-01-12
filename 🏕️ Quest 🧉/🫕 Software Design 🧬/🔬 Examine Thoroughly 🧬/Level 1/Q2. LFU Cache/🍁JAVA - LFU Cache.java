//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest Software Design L1 Q2

//? ⌚ Time complexity ➺ O(1) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

import java.util.*; 

class Node {
      /**
       * LFU Cache node with key, value, frequency, and doubly-linked pointers
       * Each node exists in exactly one frequency list at a time
       */
      int key, val, freq;
      Node prev, next;

      Node(int key, int val, int freq) {
            this.key = key;
            this.val = val;
            this.freq = freq;
      }
}

class DoublyLinkedList {
      /**
       * Circular doubly linked list for each frequency
       * head → MRU ... LRU → tail (sentinels)
       */
      Node head, tail;
      int size;

      DoublyLinkedList() {
            // Initialize sentinels
            head = new Node(0, 0, 0);
            tail = new Node(0, 0, 0);
            head.next = tail;
            tail.prev = head;
            size = 0;
      }

      void addAtHead(Node node) {
            /**
             * Add node right after head (MRU position) - O(1)
             */
            Node nxt = head.next;
            head.next = node;
            node.next = nxt;
            node.prev = head;
            nxt.prev = node;
            size++;
      }

      void removeNode(Node node) {
            /**
             * Remove arbitrary node from list - O(1)
             * Relies on node's prev/next pointers being correct
             */
            node.prev.next = node.next;
            node.next.prev = node.prev;
            size--;
      }

      Node removeFromTail() {
            /**
             * Remove LRU node (right before tail) - O(1)
             */
            if (size == 0)
                  return null;
            Node lru = tail.prev;
            removeNode(lru);
            return lru;
      }
}

class LFUCache {
      /**
       * LeetCode 460. LFU Cache
       * O(1) get/put using HashMap + Freq→DLL mapping
       */
      int capacity;
      Map<Integer, Node> cache; // key → Node
      Map<Integer, DoublyLinkedList> freqMap; // freq → DLL of nodes at that freq
      int minFreq;

      public LFUCache(int capacity) {
            this.capacity = capacity;
            this.cache = new HashMap<>();
            this.freqMap = new HashMap<>();
            this.minFreq = 0;
      }

      private void updateFreq(Node node) {
            /**
             * Frequency hop operation: move node to next frequency list
             * 1. Remove from old freq list
             * 2. Update minFreq if old list empties
             * 3. Increment freq and add to new list (MRU)
             */
            int freq = node.freq;
            freqMap.get(freq).removeNode(node);

            // If min_freq list emptied, increment min_freq
            if (freq == minFreq && freqMap.get(freq).size == 0) {
                  minFreq++;
            }

            // Move to next frequency (MRU position)
            node.freq++;
            freqMap.putIfAbsent(node.freq, new DoublyLinkedList());
            freqMap.get(node.freq).addAtHead(node);
      }

      public int get(int key) {
            /**
             * Get value if exists, increment frequency, move to MRU - O(1)
             */
            Node node = cache.get(key);
            if (node == null)
                  return -1;
            updateFreq(node);
            return node.val;
      }

      public void put(int key, int value) {
            /**
             * Put key-value with eviction (LFU+LRU) if over capacity - O(1)
             */
            if (capacity == 0)
                  return;

            if (cache.containsKey(key)) {
                  // Update existing key-value and frequency
                  Node node = cache.get(key);
                  node.val = value;
                  updateFreq(node);
            } else {
                  // Evict LFU+LRU if at capacity
                  if (cache.size() >= capacity) {
                        DoublyLinkedList lfuList = freqMap.get(minFreq);
                        Node evict = lfuList.removeFromTail();
                        cache.remove(evict.key);
                  }

                  // Insert new node at freq=1 (MRU position)
                  Node newNode = new Node(key, value, 1);
                  cache.put(key, newNode);
                  freqMap.putIfAbsent(1, new DoublyLinkedList());
                  freqMap.get(1).addAtHead(newNode);
                  minFreq = 1;
            }
      }
}
