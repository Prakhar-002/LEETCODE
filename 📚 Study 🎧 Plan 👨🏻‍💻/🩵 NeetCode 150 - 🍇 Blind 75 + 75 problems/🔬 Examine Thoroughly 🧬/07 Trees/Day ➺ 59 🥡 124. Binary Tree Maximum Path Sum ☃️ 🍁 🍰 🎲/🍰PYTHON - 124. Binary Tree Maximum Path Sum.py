#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 124

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(h) 

class Solution:
      def maxPathSum(self, root: Optional[TreeNode]) -> int:
            # Initialize the result with root's value (to handle negative-only trees)
            res = root.val

            # Define a helper function for post-order DFS traversal
            def dfs(node):
                  nonlocal res    # Use the outer variable `res` inside this nested function

                  # Base case: if node is None, contribute 0 to path
                  if not node:
                        return 0

                  # Recursively get the maximum path sum from left and right subtrees
                  leftMax = dfs(node.left)
                  rightMax = dfs(node.right)

                  # Ignore negative paths — only consider positive contributions
                  leftMax = max(leftMax, 0)
                  rightMax = max(rightMax, 0)

                  # Update the result if the current path gives a higher sum
                  res = max(res, node.val + leftMax + rightMax)

                  # Return max sum from current node to be used in recursion
                  return node.val + max(leftMax, rightMax)

            dfs(root)     # Start DFS from root

            return res    # Final maximum path sum
