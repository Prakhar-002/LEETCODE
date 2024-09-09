//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 59

//? ⌚ Time complexity ➺ O(N^2)

//? 🧺 Space complexity ➺ O(N^2)

#include <vector>
using namespace std;

class Solution {
public: 
      vector<vector<int>> generateMatrix(int n) {
            // initializes a 2D vector `matrix` of integers with dimensions `n` by `n`
            // To store 1 to N^2 value in this matrix in spiral format
            vector<vector<int>> matrix(n, vector<int>(n));

            // `value` variable for storing values in range 1 to N^2
            int value = 1;

            // An index indicating the starting row of the current layer being filled
            int startRow = 0;
            // An index indicating the ending row of the current layer being filled
            int endRow = n - 1;
            // An index indicating the starting column of the current layer being filled
            int startCol = 0;
            // An index indicating the ending column of the current layer being filled
            int endCol = n - 1;

            // uses a while loop to continue the spiral process as long as there is a layer to fill,
            // determined by `startRow <= endRow` and `startCol <= endCol`.
            while (startRow <= endRow && startCol <= endCol) {

                  // Top Row Filling ...
                  for (int j = startCol; j <= endCol; j++) {
                        // filling the top row with value and inc it by 1 after every filling
                        matrix[startRow][j] = value++;
                  }

                  // Right Column Filling ...
                  for (int i = startRow + 1; i <= endRow; i++) {
                        // After the top row, it fills down the rightmost column
                        // with value and inc it by 1 after every filling
                        matrix[i][endCol] = value++;
                  }

                  // Bottom Row Filling...
                  for (int j = endCol - 1; j >= startCol; j--) {
                        // if there is only one row left, in which case
                        if (startRow == endRow) {
                              // it breaks out of the loop to avoid overwriting values filled in the top row
                              break;
                        }

                        // After the rightmost column, it fills bottom row of the current layer
                        // with value and inc it by 1 after every filling
                        matrix[endRow][j] = value++;
                  }

                  // Left Column Filling...
                  for (int i = endRow - 1; i >= startRow + 1; i--) {
                        // if there is only one column left, in which case
                        if (startCol == endCol) {
                              // it breaks out of the loop to avoid overwriting values filled in the top
                              // column
                              break;
                        }

                        // After bottom row of the current layer, it fills leftmost column
                        // with value and inc it by 1 after every filling
                        matrix[i][startCol] = value++;
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
            return matrix;
      }
};

