#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1594

#? ⌚ Time complexity ➺ O(m * n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(m * n)

from typing import List

class Solution:
      def maxProductPath(self, grid: List[List[int]]) -> int:
            self.m   = len(grid)
            self.n   = len(grid[0])
            self.MOD = 10**9 + 7

            # dp[i][j] = (maxProduct, minProduct) or None if not yet computed
            self.dp = [[None] * self.n for _ in range(self.m)]

            # ---------- Recursive helper returning (maxProduct, minProduct) ----------
            def solve(i, j):
                  # Base case: bottom-right cell has only one path (itself)
                  if i == self.m - 1 and j == self.n - 1:
                        return (grid[i][j], grid[i][j])

                  # Return cached result if already computed
                  if self.dp[i][j] is not None:
                        return self.dp[i][j]

                  max_val = float('-inf')
                  min_val = float('inf')

                  # ---------- Move DOWN ----------
                  if i + 1 < self.m:
                        down_max, down_min = solve(i + 1, j)

                        # Multiply current cell with both extremes to catch sign flips
                        max_val = max(max_val,
                                      grid[i][j] * down_max,
                                      grid[i][j] * down_min)
                        min_val = min(min_val,
                                      grid[i][j] * down_max,
                                      grid[i][j] * down_min)

                  # ---------- Move RIGHT ----------
                  if j + 1 < self.n:
                        right_max, right_min = solve(i, j + 1)

                        max_val = max(max_val,
                                      grid[i][j] * right_max,
                                      grid[i][j] * right_min)
                        min_val = min(min_val,
                                      grid[i][j] * right_max,
                                      grid[i][j] * right_min)

                  # Cache and return both extremes
                  self.dp[i][j] = (max_val, min_val)
                  return self.dp[i][j]

            # Start recursion from top-left corner
            max_product, _ = solve(0, 0)

            # If best product is negative → no valid non-negative path exists
            if max_product < 0:
                  return -1

            return max_product % self.MOD