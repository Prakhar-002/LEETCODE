//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 54

//? ⌚ Time complexity ➺ O(m * n) 👉🏻 m = No. o rows n = No. of columns

//? 🧺 Space complexity ➺ O(1)

import java.util.*;

class Solution {
      public List<Integer> spiralOrder(int[][] matrix) {
            // initializes a List to store value of matrix in spiral way
            List<Integer> matrixList = new ArrayList<>();

            // An index indicating the starting row of the current layer being filled
            int startRow = 0;
            // An index indicating the ending row of the current layer being filled
            int endRow = matrix.length - 1;
            // An index indicating the starting column of the current layer being filled
            int startCol = 0;
            // An index indicating the ending column of the current layer being filled
            int endCol = matrix[0].length - 1;

            // uses a while loop to continue until wee traverse the whole matrix,
            // determined by `startRow <= endRow` and `startCol <= endCol`.
            while (startRow <= endRow && startCol <= endCol) {

                  // Top Row adding ...
                  for (int j = startCol; j <= endCol; j++) {
                        // add top row first
                        matrixList.add(matrix[startRow][j]);
                  }

                  // Right Column adding ...
                  for (int i = startRow + 1; i <= endRow; i++) {
                        // After the top row, it add down the rightmost column
                        matrixList.add(matrix[i][endCol]);
                  }

                  // Bottom Row adding...
                  for (int j = endCol - 1; j >= startCol; j--) {
                        // if there is only one row left, in which case
                        if (startRow == endRow) {
                              // it breaks out of the loop to avoid adding the same value twice
                              break;
                        }

                        // After the rightmost column, it add bottom row of the current layer
                        matrixList.add(matrix[endRow][j]);
                  }

                  // Left Column adding...
                  for (int i = endRow - 1; i >= startRow + 1; i--) {
                        // if there is only one column left, in which case
                        if (startCol == endCol) {
                              // it breaks out of the loop to avoid adding the same value twice
                              break;
                        }

                        // After bottom row of the current layer, it add leftmost column
                        matrixList.add(matrix[i][startCol]);
                  }

                  // Increment and Decrement Boundaries => to prepare for the next inner layer

                  // incrementing `startRow` and `startCol`,
                  startRow++;
                  startCol++;

                  // decrementing `endRow` and `endCol`
                  endRow--;
                  endCol--;
            }

            // returns the filled `matrix`
            return matrixList;
      }
}