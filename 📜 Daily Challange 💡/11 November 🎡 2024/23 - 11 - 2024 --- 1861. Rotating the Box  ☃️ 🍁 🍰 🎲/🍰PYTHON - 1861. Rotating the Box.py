#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1861

#? ⌚ Time complexity ➺ O(n * m) 👉🏻 n = len(matrix)

#? 🧺 Space complexity ➺ O(1) 👉🏻 m = len(matrix[0])

class Solution:
      def rotateTheBox(self, box: List[List[str]]) -> List[List[str]]:
            # Get the number of rows and columns in the box
            ROWS, COLS = len(box), len(box[0])

            # Create a rotated box initialized with empty spaces ('.')
            rotatedBox = [["."] * ROWS for _ in range(COLS)]

            # Iterate through each row in the original box
            for r in range(ROWS):
                  i = COLS - 1  # Set i to track the last empty position in the row
                  # Iterate through the columns in reverse order
                  for c in reversed(range(COLS)):  # c represents the current column index
                        if box[r][c] == "#":  # If the current cell contains a stone ('#')
                              # Place the stone at the tracked position in the rotated box
                              rotatedBox[i][ROWS - r - 1] = "#"
                              i -= 1  # Move the tracked position one step left
                        elif box[r][c] == "*":  # If the current cell contains an obstacle ('*')
                              # Place the obstacle in the rotated box
                              rotatedBox[c][ROWS - r - 1] = "*"
                              i = c - 1  # Reset the tracked position to the left of the obstacle

            # Return the rotated box
            return rotatedBox 
