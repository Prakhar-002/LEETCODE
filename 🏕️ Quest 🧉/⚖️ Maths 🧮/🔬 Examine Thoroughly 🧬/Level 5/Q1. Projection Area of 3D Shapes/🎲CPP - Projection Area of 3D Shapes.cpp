//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest Maths L5 Q1

//? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
public:
      int projectionArea(vector<vector<int>> &grid) {
            int res = 0;         // Total projection area
            int n = grid.size(); // Size of grid

            // Iterate through each row and column
            for (int i = 0; i < n; ++i) {
                  int maxRow = 0; // Max height in current row
                  int maxCol = 0; // Max height in current column

                  for (int j = 0; j < n; ++j) {
                        // Count cells with height > 0 for XY projection
                        if (grid[i][j] > 0) {
                              res++;
                        }

                        // Track maximum height in row i
                        maxRow = max(maxRow, grid[i][j]);
                        // Track maximum height in column i
                        maxCol = max(maxCol, grid[j][i]);
                  }

                  // Add maximum heights for row and column projections
                  res += maxRow + maxCol;
            }

            return res; // Sum of projections
      }
};