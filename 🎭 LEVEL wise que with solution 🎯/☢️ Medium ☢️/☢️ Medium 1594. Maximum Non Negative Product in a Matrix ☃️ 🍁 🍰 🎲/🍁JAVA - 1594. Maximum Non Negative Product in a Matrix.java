//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1594

//? ⌚ Time complexity ➺ O(m * n) 

//? 🧺 Space complexity ➺ O(m * n)

class Solution {
      int m, n;
      long MOD = 1_000_000_007;

      // dp[i][j][0] = max product from (i,j) to bottom-right
      // dp[i][j][1] = min product from (i,j) to bottom-right
      long[][][] dp;

      // ---------- Recursive helper returning {maxProduct, minProduct} ----------
      private long[] solve(int[][] grid, int i, int j) {

            // Base case: bottom-right cell has only one path (itself)
            if (i == m - 1 && j == n - 1)
                  return new long[]{grid[i][j], grid[i][j]};

            // Return cached result if already computed
            if (dp[i][j] != null)
                  return dp[i][j];

            long maxVal = Long.MIN_VALUE;
            long minVal = Long.MAX_VALUE;

            // ---------- Move DOWN ----------
            if (i + 1 < m) {
                  long[] down = solve(grid, i + 1, j);
                  long downMax = down[0], downMin = down[1];

                  // Multiply current cell with both extremes to catch sign flips
                  maxVal = Math.max(maxVal, Math.max(
                        (long) grid[i][j] * downMax,
                        (long) grid[i][j] * downMin));
                  minVal = Math.min(minVal, Math.min(
                        (long) grid[i][j] * downMax,
                        (long) grid[i][j] * downMin));
            }

            // ---------- Move RIGHT ----------
            if (j + 1 < n) {
                  long[] right = solve(grid, i, j + 1);
                  long rightMax = right[0], rightMin = right[1];

                  maxVal = Math.max(maxVal, Math.max(
                        (long) grid[i][j] * rightMax,
                        (long) grid[i][j] * rightMin));
                  minVal = Math.min(minVal, Math.min(
                        (long) grid[i][j] * rightMax,
                        (long) grid[i][j] * rightMin));
            }

            // Cache and return both extremes
            dp[i][j] = new long[]{maxVal, minVal};
            return dp[i][j];
      }

      public int maxProductPath(int[][] grid) {
            m   = grid.length;
            n   = grid[0].length;
            dp  = new long[m][n][];    // null by default — used as "not computed" flag

            // Start recursion from top-left corner
            long[] result    = solve(grid, 0, 0);
            long maxProduct  = result[0];

            // If best product is negative → no valid non-negative path exists
            if (maxProduct < 0)
                  return -1;

            return (int) (maxProduct % MOD);
      }
}