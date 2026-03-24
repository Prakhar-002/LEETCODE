#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2906

#? ⌚ Time complexity ➺ O(ROWS * COLS)

#? 🧺 Space complexity ➺ O(ROWS * COLS)

from typing import List

class Solution:
      def constructProductMatrix(self, grid: List[List[int]]) -> List[List[int]]:
            ROWS, COLS = len(grid), len(grid[0])
            MOD        = 12345

            product = [[0] * COLS for _ in range(ROWS)] 

            # ---------- Pass 1 (Right to Left, Bottom to Top): fill suffix products ----------
            # product[i][j] = product of all elements AFTER (i,j) in row-major order
            suffix = 1

            for i in range(ROWS - 1, -1, -1):
                  for j in range(COLS - 1, -1, -1):
                        product[i][j] = suffix
                        suffix        = (suffix * grid[i][j]) % MOD

            # ---------- Pass 2 (Left to Right, Top to Bottom): multiply prefix products ----------
            # product[i][j] *= product of all elements BEFORE (i,j) in row-major order
            prefix = 1

            for i in range(ROWS):
                  for j in range(COLS):
                        product[i][j] = (product[i][j] * prefix) % MOD
                        prefix        = (prefix * grid[i][j]) % MOD

            return product