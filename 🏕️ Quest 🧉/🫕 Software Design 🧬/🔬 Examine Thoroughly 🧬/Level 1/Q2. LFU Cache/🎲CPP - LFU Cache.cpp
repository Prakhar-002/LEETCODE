//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest Software Design L1 Q2

//? ⌚ Time complexity ➺ O(1) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <unordered_map>
using namespace std;

struct Node {
      /**
       * LFU Cache node with key, value, frequency, and doubly-linked pointers
       * Each node belongs to exactly one frequency's DoublyLinkedList
       */
      int key, val, freq;
      Node* prev;
      Node* next;
      
      Node(int k, int v, int f) : key(k), val(v), freq(f), prev(nullptr), next(nullptr) {}
};

class DoublyLinkedList {
public:
      /**
       * Circular doubly linked list for nodes of same frequency
       * head → MRU nodes → ... → LRU nodes → tail (sentinels)
       */
      Node* head;
      Node* tail;
      int size;
      
      DoublyLinkedList() {
            // Initialize sentinel nodes
            head = new Node(0, 0, 0);
            tail = new Node(0, 0, 0);
            head->next = tail;
            tail->prev = head;
            size = 0;
      }
      
      void addAtHead(Node* node) {
            /**
             * Add node immediately after head (MRU position) - O(1)
             * Updates all pointers correctly
             */
            Node* nxt = head->next;
            head->next = node;
            node->next = nxt;
            node->prev = head;
            nxt->prev = node;
            size++;
      }
      
      void removeNode(Node* node) {
            /**
             * Remove arbitrary node from list - O(1)
             * Relies on node having correct prev/next pointers
             */
            node->prev->next = node->next;
            node->next->prev = node->prev;
            size--;
      }
      
      Node* removeFromTail() {
            /**
             * Remove and return LRU node (right before tail) - O(1)
             * Used for eviction from minimum frequency list
             */
            if (size == 0) return nullptr;
            Node* lru = tail->prev;
            removeNode(lru);
            return lru;
      }
};

class LFUCache {
private:
      /**
       * LFU Cache data structures:
       * - cache: key → Node (O(1) lookup)
       * - freqMap: frequency → DoublyLinkedList of nodes at that freq
       * - minFreq: tracks minimum frequency with non-empty list
       */
      int capacity;
      unordered_map<int, Node*> cache;                    // key → Node
      unordered_map<int, DoublyLinkedList*> freqMap;     // freq → DLL
      int minFreq;
      
public:
      LFUCache(int capacity) : capacity(capacity), minFreq(0) {}
      
      void updateFreq(Node* node) {
            /**
             * Frequency hop operation - O(1)
             * 1. Remove from old frequency list
             * 2. Update minFreq if old list empties  
             * 3. Increment freq and add to new list (MRU position)
             */
            int freq = node->freq;
            freqMap[freq]->removeNode(node);
            
            // If this was the last node at minFreq, increment minFreq
            if (freq == minFreq && freqMap[freq]->size == 0) {
                  minFreq++;
            }
            
            // Move to next frequency (MRU position in new list)
            node->freq++;
            if (freqMap.find(node->freq) == freqMap.end()) {
                  freqMap[node->freq] = new DoublyLinkedList();
            }
            freqMap[node->freq]->addAtHead(node);
      }
      
      int get(int key) {
            /**
             * Get value if exists, perform frequency hop - O(1)
             * Returns -1 if key not found
             */
            if (cache.find(key) == cache.end()) return -1;
            Node* node = cache[key];
            updateFreq(node);
            return node->val;
      }
      
      void put(int key, int value) {
            /**
             * Insert/update key-value pair with eviction if needed - O(1)
             */
            if (capacity == 0) return;
            
            if (cache.count(key)) {
                  // Update existing key: change value + frequency hop
                  Node* node = cache[key];
                  node->val = value;
                  updateFreq(node);
            } else {
                  // Evict LFU+LRU if at capacity
                  if (cache.size() >= capacity) {
                        DoublyLinkedList* lfuList = freqMap[minFreq];
                        Node* evict = lfuList->removeFromTail();
                        cache.erase(evict->key);
                        delete evict;  // Memory cleanup
                  }
                  
                  // Insert new node at frequency 1 (MRU position)
                  Node* newNode = new Node(key, value, 1);
                  cache[key] = newNode;
                  if (freqMap.find(1) == freqMap.end()) {
                        freqMap[1] = new DoublyLinkedList();
                  }
                  freqMap[1]->addAtHead(newNode);
                  minFreq = 1;
            }
      }
};
