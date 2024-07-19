//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 1380

//? ⌚ Time complexity -> O(n * m) 👉 N = rows , M = columns

//? 🧺 Space complexity -> O(min(n, m)) 👉 Minimum of rows or columns

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// Function to check if a number is the maximum in its column
bool isMaxInColumn(int **matrix, int rows, int number, int col) {
      for (int row = 0; row < rows; row++) {
            if (matrix[row][col] > number) {
                  return false;
            }
      }
      return true;
}

// Function to find the column of the minimum element in a row
int findColumn(int **matrix, int row, int cols) {
      // the first col is our minCol
      int minCol = 0;
      // and the first val of that row:col is our minNumber
      int minNumber = matrix[row][minCol];

      for (int col = 0; col < cols; col++) {
            // if somewhere in entire columns
            // we got a number less that our minNumber
            if (matrix[row][col] < minNumber) {
                  // update our minNumber
                  minNumber = matrix[row][col];
                  // update our minCol
                  minCol = col;
            }
      }

      return minCol;
}

// Function to find lucky numbers in the matrix
int *luckyNumbers(int **matrix, int matrixSize, int *matrixColSize, int *returnSize) {
      // Allocate memory for lucky numbers (max possible is matrixSize)
      int *luckyNumbers = malloc(matrixSize * sizeof(int));
      *returnSize = 0;

      for (int row = 0; row < matrixSize; row++) {
            // Find col of the min elem in every row
            int minCol = findColumn(matrix, row, matrixColSize[row]);
            // extract the number
            int number = matrix[row][minCol];

            // check if this number also maximum in it's column
            if (isMaxInColumn(matrix, matrixSize, number, minCol)) {
                  luckyNumbers[(*returnSize)++] = number;
            }
      }

      return luckyNumbers;
}