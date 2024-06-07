class Solution:
      def isSymmetric(self, root: Optional[TreeNode]) -> bool:
            def isEqual(l, r):
                  if not l and not r:
                        return True
                  
                  if not l or not r:
                        return False
                  
                  return (l.val == r.val and isEqual(l.left, r.right) and isEqual(l.right, r.left))

            return isEqual(root.left, root.right)
