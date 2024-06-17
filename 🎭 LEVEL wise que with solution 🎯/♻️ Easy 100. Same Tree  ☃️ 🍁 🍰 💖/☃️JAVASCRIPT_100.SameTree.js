var isSameTree = function(p, q) {
      if (p == null && q == null) {
            return true
      }

      if (p == null || q == null) {
            return false
      }

      return ((p.val == q.val) && isEqual(p.left, q.left) && isEqual(p.right, q.right));
}; 