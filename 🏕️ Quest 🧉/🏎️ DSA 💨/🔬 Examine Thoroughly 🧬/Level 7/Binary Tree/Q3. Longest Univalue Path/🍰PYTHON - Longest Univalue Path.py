#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest DSA L7.1 Q2

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = No. of nodes

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def longestUnivaluePath(self, root: Optional[TreeNode]) -> int:
            """
            Find longest univalue path in binary tree.
            Univalue path: all nodes have same value.
            Path can go through left→root→right (not necessarily root-to-leaf).
            """
            ans = 0  # Global maximum univalue path length

            def dfs(node: Optional[TreeNode], parent_val: int) -> int:
                  """
                  Post-order DFS: returns longest univalue path starting DOWNWARD
                  from current node (matching parent_val).
                  Side effect: updates global ans with max path through current node.
                  """
                  nonlocal ans
                  if not node:
                        return 0  # Leaf/empty: path length 0

                  # Recurse on children (passing current node.val as parent_val)
                  left = dfs(node.left, node.val)   # Left subtree univalue path
                  right = dfs(node.right, node.val) # Right subtree univalue path

                  # Path through current node: left + 1 + right (all same value)
                  ans = max(ans, left + right)  # Update global max

                  # Return longest downward path from THIS node
                  # Only continue if node.val matches parent_val
                  if node.val == parent_val:
                        return max(left, right) + 1  # Extend longer child + current
                  return 0  # Cannot extend upward

            dfs(root, -1)  # Start DFS (dummy parent_val=-1)
            return ans
