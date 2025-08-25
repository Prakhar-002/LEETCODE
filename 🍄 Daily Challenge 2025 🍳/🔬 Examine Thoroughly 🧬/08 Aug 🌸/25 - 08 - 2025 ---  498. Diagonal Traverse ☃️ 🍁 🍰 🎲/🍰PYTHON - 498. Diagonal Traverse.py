#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 498

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(matrix)

#? 🧺 Space complexity ➺ O(1)

from typing import List 

class Solution:
      def findDiagonalOrder(self, matrix: List[List[int]]) -> List[int]:
            # Handle empty input
            if not matrix or not matrix[0]:
                  return []

            n, m = len(matrix), len(matrix[0])
            # Start at top-left; direction = 1 means moving up-right, -1 means down-left
            row, col, direction = 0, 0, 1
            result = []

            # Visit every cell exactly once
            while len(result) < n * m:
                  result.append(matrix[row][col])

                  # Next step along current diagonal
                  new_row = row - direction
                  new_col = col + direction

                  # If next step goes out of bounds, snap to next diagonal start on border and flip direction
                  if new_row < 0 or new_row >= n or new_col < 0 or new_col >= m:
                        if direction == 1:  # moving up-right
                              # If at last column, go down; otherwise go right
                              row += (col == m - 1)
                              col += (col < m - 1)
                        else:  # moving down-left
                              # If at last row, go right; otherwise go down
                              col += (row == n - 1)
                              row += (row < n - 1)
                        direction = -direction
                  else:
                        # Still in bounds: continue along diagonal
                        row, col = new_row, new_col

            return result
