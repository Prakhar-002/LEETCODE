var isEqual = function(l, r){
      if (l == null && r == null) {
            return true
      }

      if (l == null || r == null) {
            return false
      }

      return ((l.val == r.val) && isEqual(l.left, r.right) && isEqual(l.right, r.left));
}

var isSymmetric = function(root) {
      return isEqual(root.left, root.right);
}; 