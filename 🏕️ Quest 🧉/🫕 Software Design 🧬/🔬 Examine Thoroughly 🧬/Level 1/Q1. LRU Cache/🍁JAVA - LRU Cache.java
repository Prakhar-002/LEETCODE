//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 146

//? ⌚ Time complexity ➺ O(1) 👉🏻  n = capacity

//? 🧺 Space complexity ➺ O(n)

class Node {
      int key, val;
      Node prev, next;

      Node(int key, int val) {
            this.key = key;
            this.val = val; 
      }
}

class LRUCache {
      private int cap;
      private Map<Integer, Node> cache;
      private Node left, right;

      public LRUCache(int capacity) {
            cap = capacity;
            cache = new HashMap<>();

            // Dummy nodes for left (LRU) and right (MRU)
            left = new Node(0, 0);
            right = new Node(0, 0);

            left.next = right;
            right.prev = left;
      }

      private void remove(Node node) {
            Node prev = node.prev;
            Node next = node.next;
            prev.next = next;
            next.prev = prev;
      }

      private void insert(Node node) {
            Node prev = right.prev;
            Node next = right;
            prev.next = node;
            next.prev = node;
            node.prev = prev;
            node.next = next;
      }

      public int get(int key) {
            if (cache.containsKey(key)) {
                  remove(cache.get(key)); // Remove node from its position
                  insert(cache.get(key)); // Move to most recently used position
                  return cache.get(key).val; // Return its value
            }
            return -1; // Not found
      }

      public void put(int key, int value) {
            if (cache.containsKey(key)) {
                  remove(cache.get(key)); // Remove old node
            }
            cache.put(key, new Node(key, value));
            insert(cache.get(key)); // Add to most recent position

            if (cache.size() > cap) {
                  Node lru = left.next; // Least recently used
                  remove(lru); // Remove from list
                  cache.remove(lru.key); // Remove from map
            }
      }
}