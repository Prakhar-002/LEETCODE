//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 112

//? ⌚ Time complexity ➺ O(n)  👉🏻  n = No. of Nodes

//? 🧺 Space complexity ➺ O(h) 👉🏻  h = Height of Tree

#include <stdbool.h>

bool hasPathSum(struct TreeNode* root, int targetSum) {
      // If the tree is empty, there is no path, so return false
      if (root == NULL) {
            return false;
      }

      // Subtract the current node's value from the target sum
      targetSum -= root->val;

      // If the current node is a leaf (no left or right children)
      // Check if the running sum equals the target sum
      if (root->left == NULL && root->right == NULL) {
            return targetSum == 0;
      }

      // Recursively check the left and right subtrees
      // Return true if either subtree has a valid path
      return hasPathSum(root->left, targetSum) || hasPathSum(root->right, targetSum);
}
