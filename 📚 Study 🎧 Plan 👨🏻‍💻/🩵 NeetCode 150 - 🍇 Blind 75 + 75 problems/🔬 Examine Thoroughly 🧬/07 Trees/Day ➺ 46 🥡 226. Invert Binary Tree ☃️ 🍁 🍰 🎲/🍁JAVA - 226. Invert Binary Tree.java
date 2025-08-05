//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 226

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

class Solution {
      public TreeNode invertTree(TreeNode root) {
            // Base case: if the node is null, return null
            if (root == null) {
                  return null;
            }

            // Swap left and right children
            TreeNode temp = root.left;
            root.left = root.right;
            root.right = temp;

            // Recursively invert the left subtree
            invertTree(root.left);

            // Recursively invert the right subtree
            invertTree(root.right);

            // Return the root node after inversion
            return root;
      }
}
