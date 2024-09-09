#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 885

#? ⌚ Time complexity ➺ O(r * c) 👉🏻  r = rows, c = cols

#? 🧺 Space complexity ➺ O(1) 

class Solution:
      def spiralMatrixIII(self, rows: int, cols: int, rStart: int, cStart: int) -> List[List[int]]:
            # direction : A list of directions to move in the matrix
            # represents moving right, down, left, and up
            directions = [[0, 1], [1, 0], [0, -1], [-1, 0]] 

            grid = []
            # track the current row and column
            row, col = rStart, cStart

            # A variable to control the number of steps to move in the current direction. 
            # Initialized to 1 and incremented after completing a cycle of directions.
            steps = 1
            #  i keep track of the current direction.
            i = 0

            while len(grid) < rows * cols:
                  # iterates twice for each cycle to account for the spiral nature
                  # (e.g., move right then down, then increase the steps and move left then up)
                  for x in range(2):
                        #  `dr, dc` with the current direction to move.
                        dr, dc = directions[i]
                        #  loop moving the specified `steps` in the current direction.
                        for y in range(steps):
                              # within the bounds of the matrix, append the `[row, col]`
                              if (0 <= row < rows and 0 <= col < cols):
                                    grid.append([row, col])

                              # Update `row` and `col` for the next position.
                              row, col = row + dr, col + dc

                  # After completing steps in two directions,
                        # update `i` to change the direction 
                        i = (i + 1) % 4

                  # increment `steps` for the next cycle of movements.
                  steps += 1

            return grid
