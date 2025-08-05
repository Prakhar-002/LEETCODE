#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 543

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = Nodes

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def diameterOfBinaryTree(self, root: Optional[TreeNode]) -> int:
            res = 0

            def dfs(cur):
                  nonlocal res

                  if not cur:
                        return 0

                  left = dfs(cur.left)
                  right = dfs(cur.right)

                  res = max(res, left + right)

                  return 1 + max(left, right)

            dfs(root)
            return res