//! https://github.com/Prakhar-002/LEETCODE


// Todo 📌 QUESTION NUMBER 95

/**
** Definition for a binary tree node.
* public class TreeNode {
*     int val;
*     TreeNode left;
*     TreeNode right;
*     TreeNode() {}
*     TreeNode(int val) { this.val = val; }
*     TreeNode(int val, TreeNode left, TreeNode right) {
*         this.val = val;
*         this.left = left;
*         this.right = right;
*     }
* }
*/

import java.util.*;

class Solution {

      private List<TreeNode> generate(int left, int right){
            // base case for storing null
            if (left > right) {
                  List<TreeNode> nullList = new ArrayList<>();
                  nullList.add(null);
                  return nullList;
            }

            List<TreeNode> res = new ArrayList<>();

            //  traverse for every value in given range
            for (int val = left; val < right + 1; val++) {
                  // for every leftTree 
                  for (TreeNode leftTree : generate(left, val - 1)) {
                        // for every rightTree
                        for (TreeNode rightTree : generate(val + 1, right)) {
                              // we generate a root of val, leftVal, rightVal
                              TreeNode root = new TreeNode(val, leftTree, rightTree);
                              // and add to the root in our array
                              res.add(root);
                        }
                  }
            }
            return res;
      }

      public List<TreeNode> generateTrees(int n) {
            return generate(1, n);
      }
}
