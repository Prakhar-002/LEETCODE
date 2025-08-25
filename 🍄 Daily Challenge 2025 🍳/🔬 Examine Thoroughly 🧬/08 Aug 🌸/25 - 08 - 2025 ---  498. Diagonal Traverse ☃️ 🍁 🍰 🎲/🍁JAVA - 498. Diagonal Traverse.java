//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 498

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(matrix)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int[] findDiagonalOrder(int[][] matrix) {
            // Handle empty input
            if (matrix == null || matrix.length == 0 || matrix[0].length == 0) {
                  return new int[0];
            }

            int n = matrix.length, m = matrix[0].length;
            // Start at top-left; direction = +1 means up-right, -1 means down-left
            int row = 0, col = 0, direction = 1;
            int[] result = new int[n * m];
            int idx = 0;

            // Visit every cell exactly once
            while (idx < n * m) {
                  result[idx++] = matrix[row][col];

                  // Next step along current diagonal
                  int newRow = row - direction;
                  int newCol = col + direction;

                  // If next step is out of bounds, snap to the correct border cell and flip
                  // direction
                  if (newRow < 0 || newRow >= n || newCol < 0 || newCol >= m) {
                        if (direction == 1) { // moving up-right
                              // If at last column, go down; otherwise go right
                              if (col == m - 1) {
                                    row++;
                              } else {
                                    col++;
                              }
                        } else { // moving down-left
                                 // If at last row, go right; otherwise go down
                              if (row == n - 1) {
                                    col++;
                              } else {
                                    row++;
                              }
                        }
                        direction = -direction; // flip zigzag direction
                  } else {
                        // Still in bounds: continue along the diagonal
                        row = newRow;
                        col = newCol;
                  }
            }

            return result;
      }
}
