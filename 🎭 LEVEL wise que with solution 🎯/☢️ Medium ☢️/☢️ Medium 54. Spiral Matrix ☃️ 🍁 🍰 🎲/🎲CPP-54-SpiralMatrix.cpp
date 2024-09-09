//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 54

//? ⌚ Time complexity ➺ O(m * n) 👉🏻 m = No. o rows n = No. of columns

//? 🧺 Space complexity ➺ O(1)

#include <vector>
using namespace std;

class Solution {
public:
      vector<int> spiralOrder(vector<vector<int>>& matrix) {
            // initializes a vector to store value of matrix in spiral way
            vector<int> matrixList;

            if (matrix.empty() || matrix[0].empty()) {
                  return matrixList;
            }

            // An index indicating the starting row of the current layer being filled
            int startRow = 0;
            // An index indicating the ending row of the current layer being filled
            int endRow = matrix.size() - 1;
            // An index indicating the starting column of the current layer being filled
            int startCol = 0;
            // An index indicating the ending column of the current layer being filled
            int endCol = matrix[0].size() - 1;

            // uses a while loop to continue until wee traverse the whole matrix,
            // determined by `startRow <= endRow` and `startCol <= endCol`.
            while (startRow <= endRow && startCol <= endCol) {

                  // Top Row adding ...
                  for (int j = startCol; j <= endCol; j++) {
                        // add top row first
                        matrixList.push_back(matrix[startRow][j]);
                  }

                  // Right Column adding ...
                  for (int i = startRow + 1; i <= endRow; i++) {
                        // After the top row, it add down the rightmost column
                        matrixList.push_back(matrix[i][endCol]);
                  }

                  // Bottom Row adding...
                  if (startRow < endRow) {
                        for (int j = endCol - 1; j >= startCol; j--) {
                              // After the rightmost column, it add bottom row of the current layer
                              matrixList.push_back(matrix[endRow][j]);
                        }
                  }

                  // Left Column adding...
                  if (startCol < endCol) {
                        for (int i = endRow - 1; i > startRow; i--) {
                              // After bottom row of the current layer, it add leftmost column
                              matrixList.push_back(matrix[i][startCol]);
                        }
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
};