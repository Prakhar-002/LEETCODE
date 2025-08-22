#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3195

#? ⌚ Time complexity ➺ O(n * m) 👉🏻  n = ROWS

#? 🧺 Space complexity ➺ O(1)  -> m = COLS

from typing import List

class Solution:
      def minimumArea(self, grid: List[List[int]]) -> int:
            n, m = len(grid), len(grid[0]) 
            # Initialize bounds so that any found '1' will shrink/expand them appropriately.
            minRow, maxRow = n, 0
            minCol, maxCol = m, 0

            # Scan all cells; update bounds whenever we see a '1'.
            for r in range(n):
                  for c in range(m):
                        if grid[r][c] == 1:
                              minRow = min(minRow, r)
                              maxRow = max(maxRow, r)
                              minCol = min(minCol, c)
                              maxCol = max(maxCol, c)

            # Compute area using inclusive bounds.
            return (maxRow - minRow + 1) * (maxCol - minCol + 1)
