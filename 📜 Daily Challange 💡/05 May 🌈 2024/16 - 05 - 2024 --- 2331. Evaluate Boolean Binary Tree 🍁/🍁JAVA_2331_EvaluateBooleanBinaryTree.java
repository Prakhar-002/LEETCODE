//! https://github.com/Prakhar-002/LEETCODE


//Todo 📌 QUESTION NUMBER 2331 

class Solution {
      public boolean evaluateTree(TreeNode root) {
            if (root.val == 0) {
                  return false;
            }
            if (root.val == 1) {
                  return true;
            }
            boolean left = evaluateTree(root.left);
            boolean right = evaluateTree(root.right);

            return root.val == 3 ? left && right : left || right;
      } 
}