//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1277

//? ⌚ Time complexity ➺ O(n * m) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n * m)

class Solution {
      public int countSquares(int[][] matrix) {
            int row = matrix.length, col = matrix[0].length;
            // dp has an extra top row and left column (all zeros) to avoid bounds checks.
            int[][] dp = new int[row + 1][col + 1];
            int ans = 0;

            for (int i = 0; i < row; i++) {
                  for (int j = 0; j < col; j++) {
                        if (matrix[i][j] == 1) {
                              // Largest square ending at (i,j) depends on top, left, and top-left squares.
                              dp[i + 1][j + 1] = Math.min(dp[i][j + 1],
                                          Math.min(dp[i + 1][j], dp[i][j])) + 1;
                              // Add number of squares ending at (i,j).
                              ans += dp[i + 1][j + 1];
                        }
                  }
            }

            return ans;
      }
}
