#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2661

#? ⌚ Time complexity ➺ O(n * m) 👉🏻  n = len(mat)

#? 🧺 Space complexity ➺ O(n * m)👉🏻  m = len(mat[0])

class Solution:
      def firstCompleteIndex(self, arr: List[int], mat: List[List[int]]) -> int:
            # Determine the number of rows and columns in the matrix
            ROWS, COLS = len(mat), len(mat[0])

            # Create a dictionary to map each matrix element to its position (row, column)
            mat_to_pos = {}

            # Populate the dictionary with matrix element positions
            for r in range(ROWS):
                  for c in range(COLS):
                        mat_to_pos[mat[r][c]] = (r, c)

            # Initialize counters for rows and columns to track painted cells
            row_count = [0] * ROWS
            col_count = [0] * COLS

            # Iterate through the `arr` elements
            for i in range(len(arr)):
                  # Get the position (row, column) of the current element in the matrix
                  r, c = mat_to_pos[arr[i]]

                  # Increment the counters for the respective row and column
                  row_count[r] += 1
                  col_count[c] += 1

                  # Check if the current row or column is completely painted
                  if row_count[r] == COLS or col_count[c] == ROWS:
                        # Return the current index if a row or column is complete
                        return i

            # Return -1 if no row or column is completely painted
            return -1
