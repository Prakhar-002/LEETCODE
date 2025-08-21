//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1277

//? ⌚ Time complexity ➺ O(n * m) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n * m)

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
      int countSquares(vector<vector<int>>& matrix) {
            int row = matrix.size(), col = matrix[0].size();
            // dp has an extra top row and left column (all zeros) to avoid bounds checks.
            vector<vector<int>> dp(row + 1, vector<int>(col + 1, 0));
            int ans = 0;

            for (int i = 0; i < row; ++i) {
                  for (int j = 0; j < col; ++j) {
                        if (matrix[i][j] == 1) {
                              // Largest square ending at (i,j) depends on top, left, and top-left squares.
                              dp[i + 1][j + 1] = min({dp[i][j + 1], dp[i + 1][j], dp[i][j]}) + 1;
                              // Add number of squares ending at (i,j).
                              ans += dp[i + 1][j + 1];
                        }
                  }
            }
            return ans;
      }
};
