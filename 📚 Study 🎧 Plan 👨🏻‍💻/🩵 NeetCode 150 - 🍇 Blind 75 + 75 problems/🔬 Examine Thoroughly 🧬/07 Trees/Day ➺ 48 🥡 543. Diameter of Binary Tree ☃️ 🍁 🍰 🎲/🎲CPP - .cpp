//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 543

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = Nodes

//? 🧺 Space complexity ➺ O(n)

class Solution {
public: 
      int res = 0; // Variable to store the maximum diameter

      int diameterOfBinaryTree(TreeNode* root) {
            dfs(root); // Start DFS traversal
            return res; // Return final diameter
      }

      // Helper function to calculate height and update diameter
      int dfs(TreeNode* node) {
            if (!node) return 0; // Base case: null node has height 0

            int left = dfs(node->left);   // Recursively calculate height of left subtree
            int right = dfs(node->right); // Recursively calculate height of right subtree

            res = std::max(res, left + right); // Update maximum diameter if needed

            return 1 + std::max(left, right); // Return height of current subtree
      }
};
