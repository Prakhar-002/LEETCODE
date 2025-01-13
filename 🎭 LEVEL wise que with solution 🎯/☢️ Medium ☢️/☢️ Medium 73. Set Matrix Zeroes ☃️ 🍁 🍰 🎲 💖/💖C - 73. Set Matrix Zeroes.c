//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 73

//? ⌚ Time complexity ➺ O(n * m) 👉🏻  n = len(matrix)

//? 🧺 Space complexity ➺ O(1)    👉🏻  m = len(matrix[0])

#include <stdbool.h>

void setZeroes(int** matrix, int matrixSize, int* matrixColSize) {
      int rows = matrixSize;
      int cols = *matrixColSize;
      bool rowZero = false;

      // First pass: Mark rows and columns that need to be zeroed
      for (int r = 0; r < rows; r++) {
            for (int c = 0; c < cols; c++) {
                  if (matrix[r][c] == 0) {
                        matrix[0][c] = 0; // Mark the column in the first row
                        if (r > 0) {
                              matrix[r][0] = 0; // Mark the row in the first column
                        } else {
                              rowZero = true; // Note that the first row has a zero
                        }
                  }
            }
      }

      // Second pass: Zero out cells based on markers
      for (int r = 1; r < rows; r++) {
            for (int c = 1; c < cols; c++) {
                  if (matrix[0][c] == 0 || matrix[r][0] == 0) {
                        matrix[r][c] = 0;
                  }
            }
      }

      // Handle the first column separately
      if (matrix[0][0] == 0) {
            for (int r = 0; r < rows; r++) {
                  matrix[r][0] = 0;
            }
      }

      // Handle the first row separately
      if (rowZero) {
            for (int c = 0; c < cols; c++) {
                  matrix[0][c] = 0;
            }
      }
}
