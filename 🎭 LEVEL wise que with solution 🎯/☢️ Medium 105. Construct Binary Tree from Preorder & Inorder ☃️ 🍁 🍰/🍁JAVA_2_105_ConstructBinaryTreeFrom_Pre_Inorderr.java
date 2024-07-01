//! https://github.com/Prakhar-002/LEETCODE

class Solution {
      public class TreeNode {
            int val;
            TreeNode left;
            TreeNode right; 
      
            TreeNode() {
            }
      
            TreeNode(int val) {
                  this.val = val; 
            }
      
            TreeNode(int val, TreeNode left, TreeNode right) {
                  this.val = val;
                  this.left = left;
                  this.right = right;
            }
      }

      //?  0 ms -> solution

      int preIdx = 0, inIdx = 0;

      public TreeNode buildTree(int[] preorder, int[] inorder) {
            return buildTree(-1, preIdx, preorder, inorder);
      }

      private TreeNode buildTree(int parent, int cur, int[] preorder, int[] inorder) {
            if (preIdx >= preorder.length || inIdx >= inorder.length)
                  return null;
            if (parent != -1 && preorder[parent] == inorder[inIdx]) {
                  // preorder[preIdx].left = null; preorder[preIdx].right = null;
                  inIdx++;
                  return null;
            }
            TreeNode node = new TreeNode();
            node.val = preorder[preIdx];
            node.left = buildTree(cur, ++preIdx, preorder, inorder);
            node.right = buildTree(parent, preIdx, preorder, inorder);
            return node;
      }
}