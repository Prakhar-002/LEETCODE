//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest Software Design L3 Q3

//? ⌚ Time complexity ➺ O(1) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

class AllOne {
      // Node in a doubly-linked list: each node represents a frequency (freq)
      // and stores all keys that have that frequency.
      private class Node {
            int freq; // frequency (count) of keys in this node
            Node prev; // pointer to previous node
            Node next; // pointer to next node
            Set<String> keys; // set of keys with this frequency

            // Constructor: initialize a node with given frequency
            Node(int f) {
                  freq = f;
                  prev = null;
                  next = null;
                  keys = new HashSet<>();
            }
      }

      // Dummy head and tail nodes to simplify list operations
      private Node head;
      private Node tail;
      // Map: key → pointer to the node that contains this key
      private Map<String, Node> map;

      /** Initialize your data structure here. */
      public AllOne() {
            // Create dummy head and tail nodes
            head = new Node(0);
            tail = new Node(0);
            // Link head and tail together
            head.next = tail;
            tail.prev = head;
            // Initialize map
            map = new HashMap<>(); 
      }

      /**
       * Inserts a value to the collection. Returns true if the collection did not
       * already contain the specified element.
       */
      public void inc(String key) {
            if (map.containsKey(key)) {
                  // Key already exists: move it to the next frequency bucket
                  Node node = map.get(key);
                  int freq = node.freq;
                  // Remove key from current node
                  node.keys.remove(key);

                  // Check if next node exists and has frequency freq + 1
                  Node nextNode = node.next;
                  if (nextNode == tail || nextNode.freq != freq + 1) {
                        // Create a new node for frequency freq + 1
                        Node newNode = new Node(freq + 1);
                        newNode.keys.add(key);
                        // Insert new node between node and nextNode
                        newNode.prev = node;
                        newNode.next = nextNode;
                        node.next = newNode;
                        nextNode.prev = newNode;
                        // Update map: key now belongs to newNode
                        map.put(key, newNode);
                  } else {
                        // Next node already has frequency freq + 1
                        nextNode.keys.add(key);
                        map.put(key, nextNode);
                  }

                  // If current node has no keys left, remove it
                  if (node.keys.isEmpty()) {
                        removeNode(node);
                  }
            } else {
                  // Key does not exist: add it with frequency 1
                  Node firstNode = head.next;
                  if (firstNode == tail || firstNode.freq > 1) {
                        // Create a new node for frequency 1
                        Node newNode = new Node(1);
                        newNode.keys.add(key);
                        // Insert new node between head and firstNode
                        newNode.prev = head;
                        newNode.next = firstNode;
                        head.next = newNode;
                        firstNode.prev = newNode;
                        // Update map: key belongs to newNode
                        map.put(key, newNode);
                  } else {
                        // First node already has frequency 1
                        firstNode.keys.add(key);
                        map.put(key, firstNode);
                  }
            }
      }

      /**
       * Removes a value from the collection. Returns true if the collection contained
       * the specified element.
       */
      public void dec(String key) {
            if (!map.containsKey(key)) {
                  return; // Key does not exist
            }

            Node node = map.get(key);
            int freq = node.freq;
            // Remove key from current node
            node.keys.remove(key);

            if (freq == 1) {
                  // Frequency becomes 0: remove key from the map
                  map.remove(key);
            } else {
                  // Move key to the previous frequency bucket (freq - 1)
                  Node prevNode = node.prev;
                  if (prevNode == head || prevNode.freq != freq - 1) {
                        // Create a new node for frequency freq - 1
                        Node newNode = new Node(freq - 1);
                        newNode.keys.add(key);
                        // Insert new node between prevNode and node
                        newNode.prev = prevNode;
                        newNode.next = node;
                        prevNode.next = newNode;
                        node.prev = newNode;
                        // Update map: key now belongs to newNode
                        map.put(key, newNode);
                  } else {
                        // Previous node already has frequency freq - 1
                        prevNode.keys.add(key);
                        map.put(key, prevNode);
                  }
            }

            // If current node has no keys left, remove it
            if (node.keys.isEmpty()) {
                  removeNode(node);
            }
      }

      /** Get a random element from the collection. */
      public String getMaxKey() {
            // If the list is empty (only head and tail), return empty string
            if (tail.prev == head) {
                  return "";
            }
            // Return any key from the last node (max frequency)
            return tail.prev.keys.iterator().next();
      }

      /** Get a random element from the collection. */
      public String getMinKey() {
            // If the list is empty (only head and tail), return empty string
            if (head.next == tail) {
                  return "";
            }
            // Return any key from the first node (min frequency)
            return head.next.keys.iterator().next();
      }

      // Helper: remove a node from the doubly-linked list
      private void removeNode(Node node) {
            node.prev.next = node.next;
            node.next.prev = node.prev;
      }
}
