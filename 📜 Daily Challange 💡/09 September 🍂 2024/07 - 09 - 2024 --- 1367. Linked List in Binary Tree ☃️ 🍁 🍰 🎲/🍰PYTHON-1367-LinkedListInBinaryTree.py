#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1367

#? ⌚ Time complexity ➺ O(n * m) 👉🏻  n = No. of Tree Node  

#? 🧺 Space complexity ➺ O(h) 👉🏻 h = Height of Tree 👉🏻  m = No. of LinkedList Node

class Solution:
      # method designed to check if starting from a given tree node, 
      # the remaining list forms a subpath in the tree.
      def helper(self, list_node, tree_node):
            # it means we've reached the end of the list successfully
            if not list_node:
                  # the sublist is contained in the tree path. Thus, it returns `True`
                  return True

            #  If `tree_node` is `None` or the values of the `list_node` and `tree_node` don't match
            if not tree_node or list_node.val != tree_node.val:
                  # means the current path does not match the list. it returns `False`
                  return False

            # It tries to continue the match in two directions If any path matches, it returns `True
            return (
                  # left child of the current `tree_node`. 
                  self.helper(list_node.next, tree_node.left) or
                  # right child of the current `tree_node`. 
                  self.helper(list_node.next, tree_node.right) 
            )

      def isSubPath(self, head: Optional[ListNode], root: Optional[TreeNode]) -> bool:
            # check if the tree starting at `root` contains a path that is the list starting at `head`
            if self.helper(head, root):
                  # If `helper` returns `True`, then it returns `True`
                  return True

            # If the `root` is `None` indicating we have traversed the tree without finding the subpath
            if not root:
                  # it returns `False`
                  return False

            # check if any contain the list as a subpath
            return (
                  # recursively checks left sub-trees
                  self.isSubPath(head, root.left) or
                  #  recursively checks right sub-trees
                  self.isSubPath(head, root.right)
            )
