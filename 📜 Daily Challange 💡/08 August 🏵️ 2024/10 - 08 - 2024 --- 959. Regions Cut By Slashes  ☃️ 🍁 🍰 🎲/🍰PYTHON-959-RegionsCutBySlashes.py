#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 959

#? ⌚ Time complexity ➺ O(n^2) 👉🏻  n = len(grid)

#? 🧺 Space complexity ➺ O(n^2) 👉🏻  n = len(grid)

class Solution:
      def regionsBySlashes(self, grid: List[str]) -> int:
            gridRows, gridCols = len(grid), len(grid[0]) 
            # region slashes rows and cols
            ROWS, COLS = gridRows * 3, gridCols * 3
            # create new region of slashes
            regionsGrid = [ [0] * COLS for _ in range(ROWS) ]

            for row in range(gridRows):
                  for col in range(gridCols):
                        # make the region three times of grid
                        regionRow, regionCol = row * 3, col * 3
                        # if we get forward slash we will
                        # marking cells in a diagonal pattern
                        # `1` to represent the slash
                        if grid[row][col] == "/": # For a "/"
                              # marks the three cells starting from 
                              # the top right to the bottom left
                              regionsGrid[regionRow][regionCol + 2] = 1
                              regionsGrid[regionRow + 1][regionCol + 1] = 1
                              regionsGrid[regionRow + 2][regionCol] = 1

                        elif grid[row][col] == "\\": # For a "\"
                              # marks the three cells starting from the 
                              # top left to the bottom right
                              regionsGrid[regionRow][regionCol] = 1
                              regionsGrid[regionRow + 1][regionCol + 1] = 1
                              regionsGrid[regionRow + 2][regionCol + 2] = 1

            # function which is used to explore the `regionsGrid`
            def dfs(row, col, visit):
                  if (
                        # if out of bounds
                        row < 0 or
                        col < 0 or
                        row == ROWS or
                        col == COLS or
                        # and is cell is marked with 1 
                        regionsGrid[row][col] != 0 or
                        # or cell has been visited
                        (row, col) in visit
                  ) :
                        # then return 
                        return

                  # Otherwise marks the cell as visited
                  visit.add((row, col))
                  #  all directions (north, south, east, and west)
                  neighbors = [ [row + 1, col], [row, col + 1], [row - 1, col], [row, col - 1] ]

                  # recursively calls itself for all four directions 
                  for neiRow, neiCol in neighbors:
                        dfs(neiRow, neiCol, visit)

            # `visit` set is initialized to keep track of visited cells
            visit = set()
            # count the number of regions
            regions = 0

            # Two nested loops iterate over each cell in the `regionsGrid`. 
            for row in range(ROWS):
                  for col in range(COLS):
                        # For every cell that hasn't been visited
                        # and is not marked by a slash (cell value is `0`),
                        if regionsGrid[row][col] == 0 and (row, col) not in visit:
                              #  calling the `dfs` function
                              dfs(row, col, visit)
                              # Each successful call increments the `regions` by 1
                              regions += 1

            return regions
