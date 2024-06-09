class Solution {
      public boolean isSameTree(TreeNode p, TreeNode q) {
            if ((p == null) && (q == null)) { // IF leaf Node
                  return true;
            }

            if ((p == null) || (q == null)) { // If one child is Null
                  return false;
            }

            return ((p.val == q.val) && isSameTree(p.left, q.left) && isSameTree(p.right, q.right));
      }
}