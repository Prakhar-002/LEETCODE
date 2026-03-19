#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3212

#? ⌚ Time complexity ➺  O(m * n) 👉🏻 single pass through entire grid

#? 🧺 Space complexity ➺ O(m * n) 👉🏻 two extra prefix sum matrices

from typing import List 

class Solution:
      def numberOfSubmatrices(self, grid: List[List[str]]) -> int:
            ROWS, COLS = len(grid), len(grid[0])
            count      = 0

            # Separate prefix sum matrices for 'X' and 'Y' counts
            xSum = [[0] * COLS for _ in range(ROWS)]
            ySum = [[0] * COLS for _ in range(ROWS)]

            for i in range(ROWS):
                  for j in range(COLS):

                        # ---------- Initialize current cell ----------
                        xSum[i][j] = 1 if grid[i][j] == 'X' else 0
                        ySum[i][j] = 1 if grid[i][j] == 'Y' else 0

                        # ---------- Add top row contribution ----------
                        if i > 0:
                              xSum[i][j] += xSum[i - 1][j]
                              ySum[i][j] += ySum[i - 1][j]

                        # ---------- Add left column contribution ----------
                        if j > 0:
                              xSum[i][j] += xSum[i][j - 1]
                              ySum[i][j] += ySum[i][j - 1]

                        # ---------- Remove top-left overlap counted twice ----------
                        if i > 0 and j > 0:
                              xSum[i][j] -= xSum[i - 1][j - 1]
                              ySum[i][j] -= ySum[i - 1][j - 1]

                        # ---------- Check if submatrix (0,0)->(i,j) is valid ----------
                        # Valid if X count equals Y count and at least one X exists
                        if xSum[i][j] == ySum[i][j] and xSum[i][j] > 0:
                              count += 1

            return count