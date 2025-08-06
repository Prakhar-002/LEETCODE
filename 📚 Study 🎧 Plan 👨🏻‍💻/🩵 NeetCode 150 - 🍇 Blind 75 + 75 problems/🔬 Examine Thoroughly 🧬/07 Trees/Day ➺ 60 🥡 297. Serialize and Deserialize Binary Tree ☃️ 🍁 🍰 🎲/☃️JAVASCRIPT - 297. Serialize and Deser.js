//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 297

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = Nodes

//? 🧺 Space complexity ➺ O(n)

// Constructor for the Codec class
var Codec = function () { };

// Serializes a binary tree to a single string using BFS (level-order)
Codec.prototype.serialize = function (root) {
      if (!root) return "null";                     // If root is null, return string "null"

      let q = [root];                               // Initialize queue with root
      let res = [];                                 // Result array to store serialized values

      while (q.length) {                            // Continue until queue is empty
            let node = q.shift();                   // Dequeue the front node

            if (node) {
                  res.push(node.val);               // Store node value in result
                  q.push(node.left);                // Enqueue left child (even if it's null)
                  q.push(node.right);               // Enqueue right child
            } else {
                  res.push("null");                 // If node is null, add "null" to result
            }
      }

      return res.join(",");                         // Join result array with commas
};

// Deserializes string data back to binary tree using BFS
Codec.prototype.deserialize = function (data) {
      if (data === "null") return null;             // If data is "null", return null root

      const arr = data.split(",");                  // Split data into array
      let root = new TreeNode(parseInt(arr[0]));    // First value is root node
      let q = [root];                               // Queue for level-order reconstruction
      let i = 1;                                     // Index to track position in arr

      while (q.length) {
            let node = q.shift();                   // Dequeue the current node

            // Process left child
            if (arr[i] !== "null") {
                  node.left = new TreeNode(parseInt(arr[i])); // Create left child
                  q.push(node.left);                          // Enqueue left child
            }
            i++;                                               // Move to next value

            // Process right child
            if (arr[i] !== "null") {
                  node.right = new TreeNode(parseInt(arr[i])); // Create right child
                  q.push(node.right);                          // Enqueue right child
            }
            i++;                                               // Move to next value
      }

      return root;                                             // Return reconstructed tree
};
