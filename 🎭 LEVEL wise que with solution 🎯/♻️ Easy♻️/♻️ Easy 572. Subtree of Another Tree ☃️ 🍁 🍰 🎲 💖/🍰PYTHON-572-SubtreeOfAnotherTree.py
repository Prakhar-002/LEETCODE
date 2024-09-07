#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 572

#? ⌚ Time complexity ➺ O(n * m) 👉🏻  n = No. of Nodes in subRoot  👉🏻 m => No. of Nodes in Root

#? 🧺 Space complexity ➺ O(h)    👉🏻   H => height of  recursion stack

class Solution:
      def isSubtree(self, root: Optional[TreeNode], subRoot: Optional[TreeNode]) -> bool:
            # an empty tree is a subtree of any tree
            if not subRoot: 
                  # If `subRoot` is `None`, returns `True`
                  return True

            # An empty tree cannot contain a non-empty subtree
            if not root:
                  # If `root` is `None` but `subRoot` is not, returns `False`
                  return False

            # It checks if the tree rooted at `root` is the same as the tree rooted at `subRoot` 
            # by calling the method `isSameTree
            if self.isSameTree(root, subRoot):
                  # If they are the same, it returns `True`
                  return True

            # recursively checks whether `subRoot` is a subtree 
            return (
                  # of either the left child of `root`
                  self.isSubtree(root.left, subRoot) or
                  # of either the right child of `root`
                  self.isSubtree(root.right, subRoot)
            )

      def isSameTree(self, root, subRoot):
            # If both `root` and `subRoot` are `None`
            if not root and not subRoot:
                  # returns `True`
                  return True

            # If both `root` and `subRoot` are not `None` and their values (`val`) are the same
            if root and subRoot and root.val == subRoot.val:
                  return (
                        # checks if the left subtree of `root` is the same as the left subtree of `subRoot`
                        self.isSameTree(root.left, subRoot.left) and
                        # checks if the right subtree of `root` is the same as the right subtree of `subRoot`.
                        self.isSameTree(root.right, subRoot.right)
                  )

            # If none of the above conditions are met, it returns `False`
            return False
