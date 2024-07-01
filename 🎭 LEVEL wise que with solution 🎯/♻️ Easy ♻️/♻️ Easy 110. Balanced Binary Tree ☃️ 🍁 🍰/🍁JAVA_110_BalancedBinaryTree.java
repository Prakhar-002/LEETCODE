//! https://github.com/Prakhar-002/LEETCODE


// Todo 📌 QUESTION NUMBER 110

//? ⌚ Time complexity -> O(n) 👉 Number of nodes

//? 🧺 Space complexity -> O(1) 

class Solution {

      class info {
            boolean isBalanced;
            int height;
            info(boolean isBalanced, int height){
                  this.isBalanced = isBalanced;
                  this.height = height;
            }
      }

      private info checkBalance(TreeNode root){
            // if null return tree for balance and height of tree till that
            if (root == null) {
                  return new info(true, 0);
            }

            info left = checkBalance(root.left);
            info right = checkBalance(root.right);

            // what ever we get from our left and right tree T\F 
            boolean balanced = (left.isBalanced && 
                              right.isBalanced && 
                              // checking the condition of binary search tree
                              (Math.abs(left.height - right.height) <= 1)
                        );

            // height of our tree will be self + max of left and right
            return new info(balanced, 1 + Math.max(left.height, right.height));
      }

      public boolean isBalanced(TreeNode root) {
            return checkBalance(root).isBalanced;
      }
}