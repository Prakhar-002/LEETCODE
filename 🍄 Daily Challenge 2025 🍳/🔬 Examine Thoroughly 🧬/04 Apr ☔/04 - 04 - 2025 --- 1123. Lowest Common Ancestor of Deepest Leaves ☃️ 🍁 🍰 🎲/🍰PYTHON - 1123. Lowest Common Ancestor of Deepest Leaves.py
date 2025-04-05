#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1123

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def lcaDeepestLeaves(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
            # Helper function that returns (LCA node, maximum depth from this node)
            def dfs(node, depth):
                  if not node:
                        return (None, depth + 1)  # Base case: empty subtree

                  # Recursively get LCA and depth from left and right subtrees
                  left_node, left_depth = dfs(node.left, depth + 1)
                  right_node, right_depth = dfs(node.right, depth + 1)

                  if left_depth > right_depth:
                        return left_node, left_depth  # Left subtree is deeper
                  elif left_depth < right_depth:
                        return right_node, right_depth  # Right subtree is deeper

                  return node, left_depth  # Both sides equal, current node is LCA

            node, _ = dfs(root, 0)  # Call helper starting from root

            return node  # Return the LCA of deepest leaves
