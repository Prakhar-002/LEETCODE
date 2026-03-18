#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3070

#? ⌚ Time complexity ➺ O(m * n) 👉🏻  m = len(grid), n = len(grid[0])

#? 🧺 Space complexity ➺ O(1)

from typing import List 

class Solution:
      def countSubmatrices(self, grid: List[List[int]], k: int) -> int:
            count       = 0
            ROWS, COLS  = len(grid), len(grid[0])

            for i in range(ROWS):
                  for j in range(COLS):

                        # ---------- Build 2D prefix sum in-place ----------
                        # Add row above
                        if i > 0:
                              grid[i][j] += grid[i - 1][j]

                        # Add column to the left
                        if j > 0:
                              grid[i][j] += grid[i][j - 1]

                        # Subtract overlap counted twice (top-left diagonal)
                        if i > 0 and j > 0:
                              grid[i][j] -= grid[i - 1][j - 1]

                        # If prefix sum exceeds k, all further cols in this
                        # row will also exceed k — break early
                        if grid[i][j] > k:
                              break

                        # Submatrix from (0,0) to (i,j) has sum <= k
                        count += 1

            return count