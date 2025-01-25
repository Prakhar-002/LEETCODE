#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 236

#? ⌚ Time complexity ➺ O(n)  👉🏻  n = No. Of Nodes

#? 🧺 Space complexity ➺ O(h) 👉🏻  h = height of tree

class Solution:
      def lowestCommonAncestor(self, root: 'TreeNode', p: 'TreeNode', q: 'TreeNode') -> 'TreeNode':
            # Helper function to perform a depth-first search (DFS)
            def dfs(node):
                  # If the current node is None, return None
                  if not node:
                        return None

                  # If the current node matches either p or q, return the current node
                  if node == p or node == q:
                        return node

                  # Recursively search the left and right subtrees
                  left = dfs(node.left)
                  right = dfs(node.right)

                  # If both left and right subtrees return a non-null value,
                  # the current node is the lowest common ancestor
                  if left and right:
                        return node

                  # If only one subtree contains p or q, return that subtree
                  return left if left else right

            # Start DFS from the root
            return dfs(root)
