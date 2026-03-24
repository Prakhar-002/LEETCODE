#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2906

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

# https://github.com/Prakhar-002/LEETCODE

# ⌚ Time complexity -> O(n) ->  n = len(nums)

#  Space complexity -> O(1)

class Solution:
      def constructProductMatrix(self, grid: List[List[int]]) -> List[List[int]]:
            ROWS, COLS = len(grid), len(grid[0])
            MOD = 12345

            product = [[0] * COLS for _ in range(ROWS)]

            suffix = 1

            for i in range(ROWS - 1, -1, -1):
                  for j in range(COLS - 1, -1, -1):
                        product[i][j] = suffix
                        suffix = (suffix * grid[i][j]) % MOD


            prefix = 1

            for i in range(ROWS):
                  for j in range(COLS):
                        product[i][j] = (product[i][j] * prefix) % MOD
                        prefix = (prefix * grid[i][j]) % MOD

            return product