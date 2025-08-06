//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 230

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = Nodes

//? 🧺 Space complexity ➺ O(n)

var kthSmallest = function (root, k) {
      count = k;                      // Initialize count
      result = root.val;              // Default result

      const dfs = (node) => {
            if (!node) return;             // Base case: null node

            dfs(node.left);                // Inorder traversal - left

            count--;                  // Visit current node
            if (count === 0) {        // If it's the kth node
                  result = node.val;  // Save result
                  return;
            }

            dfs(node.right);               // Inorder traversal - right
      };

      dfs(root);                           // Start DFS
      return result;                  // Return result
}

