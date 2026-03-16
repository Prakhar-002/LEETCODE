#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1399

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = Nodes

#? 🧺 Space complexity ➺ O(n)

from typing import Optional 

class Solution:
      def maxProduct(self, root: Optional[TreeNode]) -> int:
            totalSum   = 0    # Total sum of all nodes in the tree
            maxProduct = 0    # Tracks maximum product found so far

            # ---------- DFS: returns subtree sum rooted at node ----------
            def dfs(node):
                  nonlocal totalSum, maxProduct

                  # Base case: null node contributes 0 to sum
                  if not node:
                        return 0

                  # Subtree sum = current node + left subtree + right subtree
                  subSum = node.val + dfs(node.left) + dfs(node.right)

                  # Product of this split = subSum * remaining sum on other side
                  maxProduct = max(maxProduct, subSum * (totalSum - subSum))

                  return subSum

            # First pass: compute total sum of entire tree
            totalSum = dfs(root)

            # Second pass: try every possible edge cut and track max product
            dfs(root)

            return maxProduct % (10**9 + 7)