#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3546

#? ⌚ Time complexity ➺ O(n * m) 

#? 🧺 Space complexity ➺ O(n + m)

from typing import List 

class Solution:
      def canPartitionGrid(self, grid: List[List[int]]) -> bool:
            ROWS = len(grid)
            COLS = len(grid[0])

            rows  = [0] * ROWS
            cols  = [0] * COLS
            total = 0

            # ---------- Build row sums, col sums, and total ----------
            for i in range(ROWS):
                  for j in range(COLS):
                        rows[i] += grid[i][j]
                        cols[j] += grid[i][j]
                        total   += grid[i][j]

            # Odd total can never be split into two equal halves
            if total % 2 == 1:
                  return False

            # ---------- Horizontal cuts: accumulate row by row ----------
            # Check if upper portion == lower portion at any row boundary
            upper = 0

            for i in range(ROWS - 1):
                  upper += rows[i]
                  if upper == total - upper:
                        return True

            # ---------- Vertical cuts: accumulate col by col ----------
            # Check if left portion == right portion at any col boundary
            left = 0

            for j in range(COLS - 1):
                  left += cols[j]
                  if left == total - left:
                        return True

            return False