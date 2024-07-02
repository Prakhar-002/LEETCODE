class Solution {
      public static boolean isEqual(TreeNode l, TreeNode r){
            if ((l == null) && (r == null)) { // IF leaf Node 
                  return true;
            }

            if ((l == null) || (r == null)) { // If one child is Null
                  return false; 
            }

            return ((l.val == r.val) && isEqual(l.left, r.right) && isEqual(l.right, r.left));
      }
      public boolean isSymmetric(TreeNode root) {
            return isEqual(root.left, root.right);
      }
}