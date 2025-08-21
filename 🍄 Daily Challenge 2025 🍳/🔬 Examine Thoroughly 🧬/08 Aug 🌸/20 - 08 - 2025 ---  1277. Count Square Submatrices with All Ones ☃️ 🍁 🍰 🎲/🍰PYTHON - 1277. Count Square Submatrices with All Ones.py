#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1277

#? ⌚ Time complexity ➺ O(n * m) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n * m)

from typing import List 

class Solution:
      def countSquares(self, matrix: List[List[int]]) -> int:
            row, col = len(matrix), len(matrix[0])
            # dp[i+1][j+1]: size of largest all-1s square ending at matrix[i][j]
            dp = [[0] * (col + 1) for _ in range(row + 1)]
            ans = 0

            for i in range(row):
                  for j in range(col):
                        if matrix[i][j] == 1:
                              # Extend by the smallest neighboring square (top, left, top-left)
                              dp[i + 1][j + 1] = min(dp[i][j + 1], dp[i + 1][j], dp[i][j]) + 1
                              # Each size contributes that many new squares ending at (i,j)
                              ans += dp[i + 1][j + 1]

            return ans
