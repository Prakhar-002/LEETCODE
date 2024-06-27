//! https://github.com/Prakhar-002/LEETCODE


//Todo 📌 QUESTION NUMBER 1325 

class Solution {
      public TreeNode removeLeafNodes(TreeNode root, int target) {
            if (root == null) {
                  return null;
            }

            root.left = removeLeafNodes(root.left, target);
            root.right = removeLeafNodes(root.right, target);

            if (root.val == target && root.left == null && root.right == null) {
                  return null;
            }

            return root;
      }
}