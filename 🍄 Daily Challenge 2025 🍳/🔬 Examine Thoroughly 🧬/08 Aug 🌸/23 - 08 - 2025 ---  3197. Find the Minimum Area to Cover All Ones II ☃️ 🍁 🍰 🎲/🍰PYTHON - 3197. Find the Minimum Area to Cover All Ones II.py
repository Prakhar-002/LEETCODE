#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3197

#? ⌚ Time complexity ➺ O(n^2 + m^2) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n * m)

from typing import List 

class Solution:
      def minimumSum2(self, grid: List[List[int]], u: int, d: int, l: int, r: int) -> int:
            # Tightest bounding rectangle area of 1s inside rows [u..d], cols [l..r].
            # Return large sentinel if no 1 exists to penalize this split.
            n, m = len(grid), len(grid[0])
            min_i, max_i = n, -1
            min_j, max_j = m, -1

            # Locate bounding box of 1s in the region.
            for i in range(u, d + 1):
                  for j in range(l, r + 1):
                        if grid[i][j] == 1:
                              min_i = min(min_i, i)
                              max_i = max(max_i, i)
                              min_j = min(min_j, j)
                              max_j = max(max_j, j)

            # If seen any 1, compute inclusive area; else sentinel.
            if min_i != n:
                  return (max_i - min_i + 1) * (max_j - min_j + 1)
            return 10**9  # large sentinel

      def rotate(self, vec: List[List[int]]) -> List[List[int]]:
            # 90° clockwise rotation to consider symmetric partitions.
            n, m = len(vec), len(vec[0])
            ret = [[0] * n for _ in range(m)]
            # (i, j) -> (j, n-1-i); filled as ret[m-1-j][i]
            for i in range(n):
                  for j in range(m):
                        ret[m - 1 - j][i] = vec[i][j]
            return ret

      def solve(self, grid: List[List[int]]) -> int:
            # Enumerate 3-rectangle partitions, sum bounding areas of 1s, minimize.
            n, m = len(grid), len(grid[0])
            res = n * m

            # One horizontal cut i and one vertical cut j (two variants).
            for i in range(n - 1):
                  for j in range(m - 1):
                        # Top whole; bottom split left/right
                        res = min(
                              res,
                              self.minimumSum2(grid, 0, i, 0, m - 1)
                              + self.minimumSum2(grid, i + 1, n - 1, 0, j)
                              + self.minimumSum2(grid, i + 1, n - 1, j + 1, m - 1)
                        )
                        # Top split left/right; bottom whole
                        res = min(
                              res,
                              self.minimumSum2(grid, 0, i, 0, j)
                              + self.minimumSum2(grid, 0, i, j + 1, m - 1)
                              + self.minimumSum2(grid, i + 1, n - 1, 0, m - 1)
                        )

            # Three horizontal bands via two cuts i < j.
            for i in range(n - 2):
                  for j in range(i + 1, n - 1):
                        res = min(
                              res,
                              self.minimumSum2(grid, 0, i, 0, m - 1)
                              + self.minimumSum2(grid, i + 1, j, 0, m - 1)
                              + self.minimumSum2(grid, j + 1, n - 1, 0, m - 1)
                        )
            return res

      def minimumSum(self, grid: List[List[int]]) -> int:
            # Evaluate both orientations (original and rotated) and take minimum.
            rgrid = self.rotate(grid)
            return min(self.solve(grid), self.solve(rgrid))
