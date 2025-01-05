//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 104

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = NO. of Nodes

//? 🧺 Space complexity ➺ O(h)  ->  h = Height of Tree

class Solution {
      // Function to compute the maximum depth of a binary tree
      public int maxDepth(TreeNode root) {
            // If the tree is empty, return 0 (no depth)
            if (root == null) {
                  return 0;
            }

            // Recursively compute the depth of the left subtree
            int leftHeight = maxDepth(root.left);

            // Recursively compute the depth of the right subtree
            int rightHeight = maxDepth(root.right);

            // Find the maximum depth between the left and right subtrees
            int max = Math.max(leftHeight, rightHeight);

            // Return the maximum depth plus 1 for the current node
            return max + 1;
      }
}
