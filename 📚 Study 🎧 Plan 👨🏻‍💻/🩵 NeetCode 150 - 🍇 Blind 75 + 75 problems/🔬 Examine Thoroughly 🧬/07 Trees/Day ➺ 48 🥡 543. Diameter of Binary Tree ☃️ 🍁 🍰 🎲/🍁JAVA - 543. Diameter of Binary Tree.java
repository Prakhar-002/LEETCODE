//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 543

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = Nodes

//? 🧺 Space complexity ➺ O(n)

class Solution {
      int res = 0; // To store the maximum diameter found so far

      public int diameterOfBinaryTree(TreeNode root) {
            dfs(root); // Start DFS traversal from the root
            return res; // Return the final result
      }

      // Helper function to compute height and update diameter
      private int dfs(TreeNode node) {
            if (node == null) return 0; // Base case: height of null node is 0

            int left = dfs(node.left);   // Recursively compute height of left subtree
            int right = dfs(node.right); // Recursively compute height of right subtree

            res = Math.max(res, left + right); // Update diameter if larger path is found

            return 1 + Math.max(left, right); // Return height of current subtree
      }
} 