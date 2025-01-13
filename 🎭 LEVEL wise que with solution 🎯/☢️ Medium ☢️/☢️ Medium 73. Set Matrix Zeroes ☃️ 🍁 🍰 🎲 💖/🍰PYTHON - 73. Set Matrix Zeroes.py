#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 73

#? ⌚ Time complexity ➺ O(n * m) 👉🏻  n = len(matrix)

#? 🧺 Space complexity ➺ O(1)    👉🏻  m = len(matrix[0])

class Solution:
      def setZeroes(self, matrix: List[List[int]]) -> None:
            # Get the number of rows and columns in the matrix
            rows = len(matrix)
            cols = len(matrix[0])

            # Flag to indicate if the first row contains any zeros
            rowZero = False

            # First pass: Mark rows and columns that need to be zeroed
            for r in range(rows):
                  for c in range(cols):
                        # If a zero is found, mark the corresponding row and column
                        if matrix[r][c] == 0:
                              matrix[0][c] = 0  # Mark the column in the first row
                              if r > 0:
                                    matrix[r][0] = 0  # Mark the row in the first column
                              else:
                                    rowZero = True  # Note that the first row has a zero

            # Second pass: Zero out cells based on markers, excluding the first row and column
            for r in range(1, rows):
                  for c in range(1, cols):
                        # If either the row or column is marked, set the cell to zero
                        if matrix[0][c] == 0 or matrix[r][0] == 0:
                              matrix[r][c] = 0

            # Handle the first column separately if it needs to be zeroed
            if matrix[0][0] == 0:
                  for r in range(rows):
                        matrix[r][0] = 0

            # Handle the first row separately if it needs to be zeroed
            if rowZero:
                  for c in range(cols):
                        matrix[0][c] = 0
