//! https://github.com/Prakhar-002/LEETCODE

import java.util.Arrays;

class Solution {
      // public class TreeNode {
      // int val;
      // TreeNode left;
      // TreeNode right;

      // TreeNode() {
      // }

      // TreeNode(int val) {
      // this.val = val;
      // }

      // TreeNode(int val, TreeNode left, TreeNode right) {
      // this.val = val;
      // this.left = left;
      // this.right = right;
      // }
      // }

      public int findMid(int inorder[], int key) {

            for (int i = 0; i < inorder.length; i++) {
                  if (inorder[i] == key) {
                        return i;
                  }
            }

            return -1;
      }

      public TreeNode buildTree(int[] preorder, int[] inorder) {
            // If we encounter end of one of empty arr
            // root.left = null root.right = null
            if (preorder.length == 0 || inorder.length == 0) {
                  return null;
            }

            // Making root first
            // because preOrder[0] will be the root of our tree always
            TreeNode root = new TreeNode(preorder[0]);

            // find the root value in inOrder array cause
            // all left values will be left part of tree
            // and right values will be right part of tree

            int mid = findMid(inorder, preorder[0]);

            // ? Left and right part will be called for subpart of preOrder and inOrder
            // array

            // Next part will be from (1 to (mid + 1)) including mid
            // For the inOrder array left part will be (0 to mid) excluding mid
            root.left = buildTree(Arrays.copyOfRange(preorder, 1, mid + 1), Arrays.copyOfRange(inorder, 0, mid));

            // For the right part of preOrder & inOrder array will br from (mid + 1 to end
            // of array)
            root.right = buildTree(Arrays.copyOfRange(preorder, mid + 1, preorder.length),
                        Arrays.copyOfRange(inorder, mid + 1, inorder.length));

            // And finally return our root
            return root;
      }
}