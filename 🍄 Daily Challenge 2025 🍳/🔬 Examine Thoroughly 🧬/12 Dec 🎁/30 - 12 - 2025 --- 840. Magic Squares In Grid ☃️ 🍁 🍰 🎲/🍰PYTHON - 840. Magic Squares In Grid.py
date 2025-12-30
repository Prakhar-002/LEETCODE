#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 840

#? ⌚ Time complexity ➺ O(r * c) 👉🏻  r = rows, c = cols

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def numMagicSquaresInside(self, grid: List[List[int]]) -> int:
            ROWS, COLS = len(grid), len(grid[0])

            def isMagic(row, col):
                  # Ensure for 1 to 9
                  values = set()
                  for i in range(row, row + 3):
                        for j in range(col, col + 3):
                              # if all ready in values or out of 1 - 9 range
                              if grid[i][j] in values or not (1 <= grid[i][j] <= 9):
                                    return 0
                              # else add to our set
                              values.add(grid[i][j])

                  # checking every row have sum 15
                  for i in range(row, row + 3):
                        if sum(grid[i][col : col + 3]) != 15:
                              return 0

                  # checking every col have sum 15
                  for j in range(col, col + 3):
                        if (grid[row][j] + grid[row + 1][j] + grid[row + 2][j]) != 15:
                              return 0

                  # checking every diagonals have sum 15
                  if(
                        grid[row][col] + grid[row + 1][col + 1] + grid[row + 2][col + 2] != 15 
                        or
                        grid[row][col + 2] + grid[row + 1][col + 1] + grid[row + 2][col] != 15 
                  ):
                        return 0

                  # if every thing is right return 1
                  return 1

            magicSquares = 0

            # checking for every possibility
            for row in range(ROWS - 2):
                  for col in range(COLS - 2):
                        magicSquares += isMagic(row, col)

            return magicSquares