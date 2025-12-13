
//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 701

//? ⌚ Time complexity -> O(n) 👉 given

//? 🧺 Space complexity -> O(1)

class Solution {
      public TreeNode insertIntoBST(TreeNode root, int val) {
            /**
             * Insert value into BST maintaining BST property.
             * Recursive: search path → insert at leaf position.
             */

            // Base case: empty tree → create new root
            if (root == null) {
                  return new TreeNode(val);
            }

            // BST invariant: left < root.val < right
            if (root.val > val) {
                  // val goes to left subtree
                  root.left = insertIntoBST(root.left, val);
            } else {
                  // val goes to right subtree
                  root.right = insertIntoBST(root.right, val);
            }

            return root; // Return updated subtree root
      }
}
