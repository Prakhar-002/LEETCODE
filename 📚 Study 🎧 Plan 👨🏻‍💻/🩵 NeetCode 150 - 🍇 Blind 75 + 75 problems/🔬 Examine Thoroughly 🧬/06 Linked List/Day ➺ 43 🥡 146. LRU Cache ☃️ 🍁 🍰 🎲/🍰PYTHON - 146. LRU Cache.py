#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 146

#? ⌚ Time complexity ➺ O(1) 👉🏻  n = capacity

#? 🧺 Space complexity ➺ O(n)

class Node:
      def __init__(self, key, val) -> None:
            self.key = key                 # Store the key of the node
            self.val = val                 # Store the value of the node
            self.prev = None               # Pointer to previous node
            self.next = None               # Pointer to next node

class LRUCache:

      def __init__(self, capacity: int):
            self.cap = capacity            # Maximum capacity of the cache
            self.cache = {}                # Hashmap to store key to node mapping

            self.left = Node(0, 0)         # Left dummy node (LRU end)
            self.right = Node(0, 0)        # Right dummy node (MRU end)

            self.left.next = self.right    # Connect left to right initially
            self.right.prev = self.left    # Connect right back to left

      # Helper to remove a node from the doubly linked list
      def remove(self, node):
            prev = node.prev
            nxt = node.next

            prev.next = nxt                # Bypass the node
            nxt.prev = prev

      # Helper to insert node at MRU (before right)
      def insert(self, node):
            prev = self.right.prev
            nxt = self.right

            prev.next = node
            nxt.prev = node

            node.next = nxt 
            node.prev = prev

      # Return value if key exists; else -1
      def get(self, key: int) -> int:
            if key in self.cache:
                  self.remove(self.cache[key])    # Move node to MRU
                  self.insert(self.cache[key])
                  return self.cache[key].val

            return -1

      # Add key-value pair; if exists, update and move to MRU
      def put(self, key: int, value: int) -> None:
            if key in self.cache:
                  self.remove(self.cache[key])    # Remove old version

            self.cache[key] = Node(key, value)    # Create new node
            self.insert(self.cache[key])          # Insert at MRU position

            if len(self.cache) > self.cap:        # Evict if capacity exceeded
                  lru = self.left.next            # Get LRU node (right after dummy left)
                  self.remove(lru)                # Remove from list
                  del self.cache[lru.key]         # Delete from hashmap
