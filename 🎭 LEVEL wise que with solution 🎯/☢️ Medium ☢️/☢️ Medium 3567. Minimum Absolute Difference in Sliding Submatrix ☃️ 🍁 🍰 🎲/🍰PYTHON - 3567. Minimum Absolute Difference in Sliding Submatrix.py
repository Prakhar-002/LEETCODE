#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3567

#? ⌚ Time complexity ➺ O((m-k+1) * (n-k+1) * k^2 * log(k^2)) 👉🏻 sorting unique values per subMatrix

#? 🧺 Space complexity ➺ O(k^2) 👉🏻 storing unique values for each subMatrix

from typing import List

class Solution:
      def minAbsDiff(self, grid: List[List[int]], k: int) -> List[List[int]]:
            ROWS, COLS = len(grid), len(grid[0])

            # Result matrix dimensions shrink by k-1 on each side
            res = [[0] * (COLS - k + 1) for _ in range(ROWS - k + 1)]

            for i in range(ROWS - k + 1):
                  for j in range(COLS - k + 1):

                        # ---------- Collect unique values in k×k submatrix ----------
                        values = set()
                        for x in range(i, i + k):
                              for y in range(j, j + k):
                                    values.add(grid[x][y])

                        # ---------- Convert to sorted list for indexed access ----------
                        arr = sorted(values)

                        # If only 1 unique value, min diff is 0
                        if len(arr) <= 1:
                              res[i][j] = 0
                              continue

                        # ---------- Find minimum difference between adjacent values ----------
                        min_diff = float('inf')
                        for t in range(len(arr) - 1):
                              min_diff = min(min_diff, arr[t + 1] - arr[t])

                        res[i][j] = min_diff

            return res