//! https://github.com/Prakhar-002/LEETCODE


// Todo 📌 QUESTION NUMBER 701

//? ⌚ Time complexity -> O(n) 👉 given

//? 🧺 Space complexity -> O(1)

class Solution {
      public TreeNode insertIntoBST(TreeNode root, int val) {
            if (root == null) {
                  root = new TreeNode(val);
                  return root;
            }

            if (root.val > val) {
                  // insert in left sub tree...
                  root.left = insertIntoBST(root.left, val);
            } else {
                  // insert in right sub tree...
                  root.right = insertIntoBST(root.right, val);
            }

            return root;
      }
}