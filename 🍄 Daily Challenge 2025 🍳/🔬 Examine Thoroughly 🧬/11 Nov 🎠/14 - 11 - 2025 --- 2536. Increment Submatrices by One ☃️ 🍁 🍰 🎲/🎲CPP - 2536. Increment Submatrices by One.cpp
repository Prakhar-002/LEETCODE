//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2536

// ? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(nums)

// ? 🧺 Space complexity ➺ O(n ^ 2)

#include <vector>
using namespace std;

class Solution {
public:
      vector<vector<int>> rangeAddQueries(int n, vector<vector<int>>& queries) {
            // Difference matrix for efficient range updates, with one extra row and column
            vector<vector<int>> diff(n + 1, vector<int>(n + 1, 0));

            // Apply increments and decrements for each query's specified submatrix
            for (auto& q : queries) {
                  int row1 = q[0], col1 = q[1], row2 = q[2], col2 = q[3];
                  diff[row1][col1] += 1;            // Starting point of increment
                  diff[row2 + 1][col1] -= 1;        // Stop increment below bottom edge
                  diff[row1][col2 + 1] -= 1;        // Stop increment after right edge
                  diff[row2 + 1][col2 + 1] += 1;    // Restore overlap correction
            }

            vector<vector<int>> mat(n, vector<int>(n, 0));

            // Construct final matrix using prefix sums (inclusion-exclusion)
            for (int i = 0; i < n; i++) {
                  for (int j = 0; j < n; j++) {
                        int x1 = (i == 0) ? 0 : mat[i - 1][j];
                        int x2 = (j == 0) ? 0 : mat[i][j - 1];
                        int x3 = (i == 0 || j == 0) ? 0 : mat[i - 1][j - 1];
                        mat[i][j] = diff[i][j] + x1 + x2 - x3;
                  }
            }

            return mat;  // Return final matrix after applying queries
      }
};
