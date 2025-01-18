//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 112

//? ⌚ Time complexity ➺ O(n)  👉🏻  n = No. of Nodes

//? 🧺 Space complexity ➺ O(h) 👉🏻  h = Height of Tree

class Solution {
      public boolean hasPathSum(TreeNode root, int targetSum) {
            // If the tree is empty, there is no path, so return false
            if (root == null) {
                  return false;
            }

            // Subtract the current node's value from the target sum
            targetSum -= root.val;

            // If the current node is a leaf (no left or right children)
            // Check if the running sum equals the target sum
            if (root.left == null && root.right == null) {
                  return targetSum == 0;
            }

            // Recursively check the left and right subtrees
            // Return true if either subtree has a valid path
            return hasPathSum(root.left, targetSum) || hasPathSum(root.right, targetSum);
      }
}
