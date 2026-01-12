#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest Software Design L1 Q2

#? ⌚ Time complexity ➺ O(1) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

from collections import defaultdict
from bisect import bisect_left

class Node:
      def __init__(self, key, val, freq=1, next=None, prev=None):
            """
            Doubly linked list node for frequency lists
            MRU at head, LRU at tail
            """
            self.key = key
            self.val = val
            self.freq = freq
            self.next = next
            self.prev = prev

class DoublyLinkedList:
      def __init__(self):
            """
            Circular doubly linked list: head <-> nodes <-> tail
            Maintains MRU order (head) to LRU order (tail)
            """
            self.head = Node(0, 0)  # Sentinel head
            self.tail = Node(0, 0)  # Sentinel tail
            self.head.next = self.tail
            self.tail.prev = self.head
            self.size = 0

      def addAtHead(self, node):
            """
            Add node right after head (MRU position) - O(1)
            """
            nxt = self.head.next
            self.head.next = node
            node.next = nxt
            node.prev = self.head
            nxt.prev = node
            self.size += 1

      def removeNode(self, node):
            """
            Remove arbitrary node from list - O(1)
            """
            prev, nxt = node.prev, node.next
            prev.next = nxt
            nxt.prev = prev
            self.size -= 1

      def removeFromTail(self):
            """
            Remove LRU node (right before tail) - O(1)
            """
            if self.size == 0:
                  return None
            lru = self.tail.prev
            self.removeNode(lru)
            return lru

class LFUCache:
      def __init__(self, capacity):
            """
            LFU Cache with O(1) get/put using freq→DLL mapping
            """
            self.capacity = capacity
            self.cache = {}                    # key → Node
            self.freq_map = defaultdict(DoublyLinkedList)  # freq → DLL of nodes
            self.min_freq = 0

      def _update_freq(self, node):
            """
            Frequency hop: remove from old freq → increment → add to new freq (MRU)
            Updates min_freq if old freq list empties
            """
            freq = node.freq
            self.freq_map[freq].removeNode(node)
            
            # Update min_freq if this was the last node at min_freq
            if freq == self.min_freq and self.freq_map[freq].size == 0:
                  self.min_freq += 1
            
            # Move to next frequency (MRU position)
            node.freq += 1
            self.freq_map[node.freq].addAtHead(node)

      def get(self, key):
            """
            Get value and update frequency/recency - O(1)
            """
            if key not in self.cache:
                  return -1
            node = self.cache[key]
            self._update_freq(node)
            return node.val

      def put(self, key, value):
            """
            Put/update key-value with eviction if over capacity - O(1)
            """
            if self.capacity == 0:
                  return
                  
            if key in self.cache:
                  # Update existing key
                  node = self.cache[key]
                  node.val = value
                  self._update_freq(node)
            else:
                  # Evict LFU+LRU if at capacity
                  if len(self.cache) >= self.capacity:
                        lfu_list = self.freq_map[self.min_freq]
                        evict_node = lfu_list.removeFromTail()
                        del self.cache[evict_node.key]

                  # Insert new node at freq=1 (MRU)
                  new_node = Node(key, value)
                  self.cache[key] = new_node
                  self.freq_map[1].addAtHead(new_node)
                  self.min_freq = 1
