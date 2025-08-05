//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 543

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = Nodes

//? 🧺 Space complexity ➺ O(n)

var diameterOfBinaryTree = function (root) {
      let res = 0; // To keep track of the largest diameter

      // DFS helper function
      function dfs(node) {
            if (!node) return 0; // Base case: null node has height 0

            const left = dfs(node.left);   // Get height of left subtree
            const right = dfs(node.right); // Get height of right subtree

            res = Math.max(res, left + right); // Update diameter if current one is larger

            return 1 + Math.max(left, right); // Return height of current node
      }

      dfs(root); // Start DFS from the root

      return res; // Return the final diameter
};