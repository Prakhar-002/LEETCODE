//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 146

//? ⌚ Time complexity ➺ O(1) 👉🏻  n = capacity

//? 🧺 Space complexity ➺ O(n)

class Node {
      constructor(key, val) {
            this.key = key;
            this.val = val;
            this.prev = null;
            this.next = null;
      }
}

class LRUCache {
      constructor(capacity) {
            this.cap = capacity;
            this.cache = new Map();

            this.left = new Node(0, 0); // Dummy left (LRU)
            this.right = new Node(0, 0); // Dummy right (MRU)

            this.left.next = this.right;
            this.right.prev = this.left;
      }

      remove(node) {
            let prev = node.prev;
            let next = node.next;
            prev.next = next;
            next.prev = prev;
      }

      insert(node) {
            let prev = this.right.prev;
            let next = this.right;
            prev.next = node;
            next.prev = node;
            node.prev = prev;
            node.next = next;
      }

      get(key) {
            if (this.cache.has(key)) {
                  this.remove(this.cache.get(key));
                  this.insert(this.cache.get(key));
                  return this.cache.get(key).val;
            }
            return -1;
      }

      put(key, value) {
            if (this.cache.has(key)) {
                  this.remove(this.cache.get(key));
            }
            this.cache.set(key, new Node(key, value));
            this.insert(this.cache.get(key));

            if (this.cache.size > this.cap) {
                  let lru = this.left.next;
                  this.remove(lru);
                  this.cache.delete(lru.key);
            }
      }
}
