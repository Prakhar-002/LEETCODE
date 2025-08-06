//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 98

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n) 

class Solution {
      public boolean isValidBST(TreeNode root) {
            // Start recursive validation with long min and max bounds
            return isValid(root, Long.MIN_VALUE, Long.MAX_VALUE);
      }

      // Helper method to validate BST
      private boolean isValid(TreeNode node, long left, long right) {
            // Base case: empty node is valid
            if (node == null)
                  return true;

            // Check if current node value violates BST constraints
            if (node.val <= left || node.val >= right)
                  return false;

            // Recursively check left and right subtrees with updated bounds
            return isValid(node.left, left, node.val) && isValid(node.right, node.val, right);
      }
}
