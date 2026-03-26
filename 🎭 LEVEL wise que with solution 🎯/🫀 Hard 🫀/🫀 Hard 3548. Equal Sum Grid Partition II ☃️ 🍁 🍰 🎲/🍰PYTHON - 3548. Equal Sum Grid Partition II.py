#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3548

#? ⌚ Time complexity ➺ O(n * m)

#? 🧺 Space complexity ➺ O(n * m)

from typing import List

class Solution:

      def __init__(self):
            self.total = 0 

      # ---------- Check if any horizontal cut yields equal halves ----------
      def checkHorCuts(self, grid: List[List[int]]) -> bool:
            m   = len(grid)
            n   = len(grid[0])
            seen = set()
            top  = 0

            for i in range(m - 1):
                  for j in range(n):
                        seen.add(grid[i][j])
                        top += grid[i][j]

                  bottom = self.total - top
                  diff   = top - bottom

                  # Exact equal split
                  if diff == 0:
                        return True
                  # Diff matches a corner or edge value (boundary adjustment check)
                  if diff == grid[0][0]:
                        return True
                  if diff == grid[0][n - 1]:
                        return True
                  if diff == grid[i][0]:
                        return True
                  # Diff matches any previously seen value (non-first row, multi-col)
                  if i > 0 and n > 1 and diff in seen:
                        return True

            return False

      # ---------- Reverse rows of grid in-place ----------
      def reverse(self, grid: List[List[int]]) -> None:
            top, bottom = 0, len(grid) - 1
            while top < bottom:
                  grid[top], grid[bottom] = grid[bottom], grid[top]
                  top    += 1
                  bottom -= 1

      def canPartitionGrid(self, grid: List[List[int]]) -> bool:
            m = len(grid)
            n = len(grid[0])

            # ---------- Compute grand total ----------
            for i in range(m):
                  for j in range(n):
                        self.total += grid[i][j]

            # ---------- Horizontal cuts (top-down) ----------
            if self.checkHorCuts(grid):
                  return True

            # ---------- Horizontal cuts (bottom-up via reverse) ----------
            self.reverse(grid)
            if self.checkHorCuts(grid):
                  return True
            self.reverse(grid)    # restore original orientation

            # ---------- Build transpose for vertical cut checks ----------
            transposeGrid = [[0] * m for _ in range(n)]
            for i in range(m):
                  for j in range(n):
                        transposeGrid[j][i] = grid[i][j]

            # ---------- Vertical cuts (left-to-right) ----------
            if self.checkHorCuts(transposeGrid):
                  return True

            # ---------- Vertical cuts (right-to-left via reverse) ----------
            self.reverse(transposeGrid)
            return self.checkHorCuts(transposeGrid)