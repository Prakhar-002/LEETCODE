//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest Software Design L3 Q3

//? ⌚ Time complexity ➺ O(1) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

// Node in a doubly-linked list: each node represents a frequency (freq)
// and stores all keys that have that frequency.
class Node {
      constructor(freq) {
            this.freq = freq;           // frequency (count) of keys in this node
            this.prev = null;           // pointer to previous node
            this.next = null;           // pointer to next node
            this.keys = new Set();      // set of keys with this frequency
      }
}

class AllOne {
      constructor() {
            // Dummy head and tail nodes to simplify list operations
            this.head = new Node(0);
            this.tail = new Node(0);
            // Link head and tail together
            this.head.next = this.tail;
            this.tail.prev = this.head;
            // Map: key → pointer to the node that contains this key
            this.map = new Map();
      }

      /**
       * Inserts a value to the collection. Returns true if the collection did not
       * already contain the specified element.
       */
      inc(key) {
            if (this.map.has(key)) {
                  // Key already exists: move it to the next frequency bucket
                  const node = this.map.get(key);
                  const freq = node.freq;
                  // Remove key from current node
                  node.keys.delete(key);

                  // Check if next node exists and has frequency freq + 1
                  const nextNode = node.next;
                  if (nextNode === this.tail || nextNode.freq !== freq + 1) {
                        // Create a new node for frequency freq + 1
                        const newNode = new Node(freq + 1);
                        newNode.keys.add(key);
                        // Insert new node between node and nextNode
                        newNode.prev = node;
                        newNode.next = nextNode;
                        node.next = newNode;
                        nextNode.prev = newNode;
                        // Update map: key now belongs to newNode
                        this.map.set(key, newNode);
                  } else {
                        // Next node already has frequency freq + 1
                        nextNode.keys.add(key);
                        this.map.set(key, nextNode);
                  }

                  // If current node has no keys left, remove it
                  if (node.keys.size === 0) {
                        this.removeNode(node);
                  }
            } else {
                  // Key does not exist: add it with frequency 1
                  const firstNode = this.head.next;
                  if (firstNode === this.tail || firstNode.freq > 1) {
                        // Create a new node for frequency 1
                        const newNode = new Node(1);
                        newNode.keys.add(key);
                        // Insert new node between head and firstNode
                        newNode.prev = this.head;
                        newNode.next = firstNode;
                        this.head.next = newNode;
                        firstNode.prev = newNode;
                        // Update map: key belongs to newNode
                        this.map.set(key, newNode);
                  } else {
                        // First node already has frequency 1
                        firstNode.keys.add(key);
                        this.map.set(key, firstNode);
                  }
            }
      }

      /**
       * Removes a value from the collection. Returns true if the collection contained
       * the specified element.
       */
      dec(key) {
            if (!this.map.has(key)) {
                  return;  // Key does not exist
            }

            const node = this.map.get(key);
            const freq = node.freq;
            // Remove key from current node
            node.keys.delete(key);

            if (freq === 1) {
                  // Frequency becomes 0: remove key from the map
                  this.map.delete(key);
            } else {
                  // Move key to the previous frequency bucket (freq - 1)
                  const prevNode = node.prev;
                  if (prevNode === this.head || prevNode.freq !== freq - 1) {
                        // Create a new node for frequency freq - 1
                        const newNode = new Node(freq - 1);
                        newNode.keys.add(key);
                        // Insert new node between prevNode and node
                        newNode.prev = prevNode;
                        newNode.next = node;
                        prevNode.next = newNode;
                        node.prev = newNode;
                        // Update map: key now belongs to newNode
                        this.map.set(key, newNode);
                  } else {
                        // Previous node already has frequency freq - 1
                        prevNode.keys.add(key);
                        this.map.set(key, prevNode);
                  }
            }

            // If current node has no keys left, remove it
            if (node.keys.size === 0) {
                  this.removeNode(node);
            }
      }

      /**
       * Get a random element from the collection.
       */
      getMaxKey() {
            // If the list is empty (only head and tail), return empty string
            if (this.tail.prev === this.head) {
                  return "";
            }
            // Return any key from the last node (max frequency)
            return this.tail.prev.keys.values().next().value;
      }

      /**
       * Get a random element from the collection.
       */
      getMinKey() {
            // If the list is empty (only head and tail), return empty string
            if (this.head.next === this.tail) {
                  return "";
            }
            // Return any key from the first node (min frequency)
            return this.head.next.keys.values().next().value;
      }

      // Helper: remove a node from the doubly-linked list
      removeNode(node) {
            node.prev.next = node.next;
            node.next.prev = node.prev;
      }
}
