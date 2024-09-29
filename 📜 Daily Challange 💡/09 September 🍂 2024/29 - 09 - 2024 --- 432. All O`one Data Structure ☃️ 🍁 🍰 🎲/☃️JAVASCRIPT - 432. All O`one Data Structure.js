//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 432

// ? ⌚ Time complexity ➺ O(1)

// ? 🧺 Space complexity ➺ O(n) 👉🏻 n : Number of keys

// Doubly Linked List Node Constructor
const DoublyLinkedListNode = function (frequency, key, prevNode, nextNode) {
      this.frequency = frequency;          // Stores the frequency of keys
      this.prev = prevNode ? prevNode : null;   // Pointer to the previous node in DLL
      this.next = nextNode ? nextNode : null;   // Pointer to the next node in DLL
      this.keys = new Set();               // Set to store multiple keys with the same frequency
      if (key) {
            this.keys.add(key);              // Add the key to the set
      }
}

// AllOne Class
var AllOne = function () {
      this.keyNodeMap = new Map();         // Map to store the key and its corresponding node in DLL
      this.head = null;                    // Head of the doubly linked list
      this.tail = null;                    // Tail of the doubly linked list
};

// Function to add a key to the doubly linked list
AllOne.prototype.addKeyToDLL = function (key, currentNode) {
      let newNode;

      // Case when currentNode is null (key is new or has frequency 1)
      if (!currentNode) {
            if (!this.head) {                // If the list is empty
                  newNode = new DoublyLinkedListNode(1, key);
                  this.head = newNode;
                  this.tail = newNode;
            } else {
                  // Check if the head node has frequency 1
                  if (this.head.frequency === 1) {
                        newNode = this.head;
                        this.head.keys.add(key);  // Add key to existing node with frequency 1
                  } else {
                        // Create a new node with frequency 1 and place it at the head
                        newNode = new DoublyLinkedListNode(1, key, null, this.head);
                        this.head.prev = newNode;
                        this.head = newNode;
                  }
            }
      } else {
            // If key already exists, we need to move it to the next frequency node
            let nextNode = currentNode.next;
            let newFrequency = currentNode.frequency + 1;

            if (!nextNode) {  // If there is no next node (key has the highest frequency so far)
                  newNode = new DoublyLinkedListNode(newFrequency, key, currentNode, null);
                  this.tail = newNode;
                  currentNode.next = newNode;
            } else if (nextNode.frequency === newFrequency) {  // If the next node has the same frequency
                  newNode = nextNode;
                  newNode.keys.add(key);
            } else {
                  // Create a new node with the updated frequency
                  newNode = new DoublyLinkedListNode(newFrequency, key, currentNode, nextNode);
                  currentNode.next = newNode;
                  nextNode.prev = newNode;
            }

            // Remove key from the current node
            currentNode.keys.delete(key);

            // Clean up the current node if it's empty
            if (currentNode.keys.size === 0) {
                  if (currentNode.prev === null) {
                        this.head = currentNode.next;
                        if (this.head) this.head.prev = null;
                  } else {
                        currentNode.prev.next = currentNode.next;
                        if (currentNode.next) currentNode.next.prev = currentNode.prev;
                  }
            }
      }
      return newNode;
}

// Function to increment the key's frequency
AllOne.prototype.inc = function (key) {
      let currentNode = this.addKeyToDLL(key, this.keyNodeMap.get(key));
      this.keyNodeMap.set(key, currentNode);
};

// Function to remove a key from the doubly linked list
AllOne.prototype.removeKeyFromDLL = function (key, currentNode) {
      let currentFrequency = currentNode.frequency;
      let newFrequency = currentFrequency - 1;
      let newNode;

      if (currentFrequency === 1) {  // Special case where key has frequency 1 and should be removed
            currentNode.keys.delete(key);
            if (currentNode.keys.size === 0) {  // If current node becomes empty, update head or tail
                  if (this.head === this.tail) {
                        this.head = null;
                        this.tail = null;
                  } else {
                        this.head = currentNode.next;
                        if (this.head) this.head.prev = null;
                  }
            }
            return null;
      } else {
            // Move the key to the previous node or create a new node
            if (currentNode.prev === null) {
                  newNode = new DoublyLinkedListNode(newFrequency, key, null, currentNode);
                  this.head = newNode;
                  currentNode.prev = newNode;
            } else if (currentNode.prev.frequency === newFrequency) {
                  newNode = currentNode.prev;
                  newNode.keys.add(key);
            } else {
                  newNode = new DoublyLinkedListNode(newFrequency, key, currentNode.prev, currentNode);
                  currentNode.prev.next = newNode;
                  currentNode.prev = newNode;
            }

            currentNode.keys.delete(key);

            if (currentNode.keys.size === 0) {  // Clean up if current node becomes empty
                  if (currentNode.next === null) {
                        this.tail = currentNode.prev;
                        if (this.tail) this.tail.next = null;
                  } else {
                        currentNode.next.prev = newNode;
                        newNode.next = currentNode.next;
                  }
            }
      }
      return newNode;
}

// Function to decrement the key's frequency
AllOne.prototype.dec = function (key) {
      let currentNode = this.removeKeyFromDLL(key, this.keyNodeMap.get(key));
      if (currentNode) {
            this.keyNodeMap.set(key, currentNode);
      } else {
            this.keyNodeMap.delete(key);
      }
};

// Function to get the key with the maximum frequency
AllOne.prototype.getMaxKey = function () {
      if (this.tail) {
            const [key] = this.tail.keys;
            return key;
      }
      return '';
};

// Function to get the key with the minimum frequency
AllOne.prototype.getMinKey = function () {
      if (this.head) {
            const [key] = this.head.keys;
            return key;
      }
      return '';
};
