import java.util.Arrays;

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

      public int findMid(int inorder[], int key){

            for (int i = 0; i < inorder.length; i++) {
                  if (inorder[i] == key) {
                        return i;
                  }
            }

            return -1;
      }

      public TreeNode buildTree(int[] preorder, int[] inorder) {
            if (preorder.length == 0 || inorder.length == 0) {
                  return null;
            }

            TreeNode root = new TreeNode(preorder[0]);
            int mid = findMid(inorder, preorder[0]);
            root.left = buildTree(Arrays.copyOfRange(preorder, 1, mid + 1), Arrays.copyOfRange(inorder, 0, mid));
            root.right = buildTree(Arrays.copyOfRange(preorder, mid + 1, preorder.length), Arrays.copyOfRange(inorder, mid + 1, inorder.length));
            return root;
      }

      
}