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

      int p = 0, i = 0;

      public TreeNode buildTree(int[] preorder, int[] inorder) {
            return buildTree(-1, p, preorder, inorder);
      }

      private TreeNode buildTree(int parent, int cur, int[] preorder, int[] inorder) {
            if (p >= preorder.length || i >= inorder.length)
                  return null;
            if (parent != -1 && preorder[parent] == inorder[i]) {
                  // preorder[p].left = null; preorder[p].right = null;
                  i++;
                  return null;
            }
            TreeNode node = new TreeNode();
            node.val = preorder[p];
            node.left = buildTree(cur, ++p, preorder, inorder);
            node.right = buildTree(parent, p, preorder, inorder);
            return node;
      }
}