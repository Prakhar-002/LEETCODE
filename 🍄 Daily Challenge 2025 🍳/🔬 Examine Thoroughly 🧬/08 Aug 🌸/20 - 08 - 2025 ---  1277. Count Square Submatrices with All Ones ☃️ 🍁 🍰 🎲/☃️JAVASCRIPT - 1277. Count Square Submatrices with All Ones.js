//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1277

//? ⌚ Time complexity ➺ O(n * m) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n * m)

var countSquares = function (matrix) {
      const row = matrix.length, col = matrix[0].length;
      // dp has an extra top row and left column (all zeros) to avoid bounds checks.
      const dp = Array.from({ length: row + 1 }, () => Array(col + 1).fill(0));
      let ans = 0;

      for (let i = 0; i < row; i++) {
            for (let j = 0; j < col; j++) {
                  if (matrix[i][j] === 1) {
                        // Largest square ending at (i,j) depends on top, left, and top-left squares.
                        dp[i + 1][j + 1] = Math.min(dp[i][j + 1], dp[i + 1][j], dp[i][j]) + 1;
                        // Add number of squares ending at (i,j).
                        ans += dp[i + 1][j + 1];
                  }
            }
      }
      return ans;
};
