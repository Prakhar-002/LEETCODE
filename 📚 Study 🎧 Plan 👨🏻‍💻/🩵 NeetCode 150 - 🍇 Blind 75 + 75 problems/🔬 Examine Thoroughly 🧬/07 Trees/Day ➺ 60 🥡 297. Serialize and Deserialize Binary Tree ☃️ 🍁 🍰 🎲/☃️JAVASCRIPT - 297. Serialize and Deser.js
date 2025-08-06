//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 297

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = Nodes

//? 🧺 Space complexity ➺ O(n)

var serialize = function (root) {
      if (!root) return "null";                        // If tree is empty, return "null"

      let q = [root];                                  // Initialize queue with root
      let res = [];                                    // Array to store node values

      while (q.length) {
            let node = q.shift();                      // Dequeue the front node

            if (node) {
                  res.push(node.val);                  // Store node value
                  q.push(node.left);                   // Add left child to queue (even if null)
                  q.push(node.right);                  // Add right child to queue
            } else {
                  res.push("null");                    // Add "null" if node doesn't exist
            }
      }

      return res.join(",");                            // Join array into string with commas
};

var deserialize = function (data) {
      if (data === "null") return null;                // Return null if input is "null"

      const arr = data.split(",");                     // Split the string by comma
      let root = new TreeNode(parseInt(arr[0]));       // Create root node from first value
      let q = [root];                                  // Queue to build tree level by level
      let i = 1;                                       // Start from the second element

      while (q.length) {
            let node = q.shift();                      // Get current node from queue

            // Process left child
            if (arr[i] !== "null") {
                  node.left = new TreeNode(parseInt(arr[i]));  // Create left child
                  q.push(node.left);                           // Enqueue the left child
            }
            i++;                                                // Move to next value

            // Process right child
            if (arr[i] !== "null") {
                  node.right = new TreeNode(parseInt(arr[i])); // Create right child
                  q.push(node.right);                          // Enqueue the right child
            }
            i++;                                                // Move to next value
      }

      return root;                                              // Return rebuilt root node
};
