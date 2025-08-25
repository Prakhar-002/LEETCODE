//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 498

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(matrix)

//? 🧺 Space complexity ➺ O(1)

#include <vector>
using namespace std;

class Solution {
public:
      vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {
            // Handle empty input
            if (matrix.empty() || matrix[0].empty()) {
                  return {};
            }

            int n = matrix.size(), m = matrix[0].size();
            // Start at top-left; direction = +1 means up-right, -1 means down-left
            int row = 0, col = 0, direction = 1;
            vector<int> result;
            result.reserve(n * m);

            // Visit every cell exactly once
            while ((int)result.size() < n * m) {
                  result.push_back(matrix[row][col]);

                  // Next step along current diagonal
                  int newRow = row - direction;
                  int newCol = col + direction;

                  // If next step is out of bounds, snap to border and flip direction
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
};
