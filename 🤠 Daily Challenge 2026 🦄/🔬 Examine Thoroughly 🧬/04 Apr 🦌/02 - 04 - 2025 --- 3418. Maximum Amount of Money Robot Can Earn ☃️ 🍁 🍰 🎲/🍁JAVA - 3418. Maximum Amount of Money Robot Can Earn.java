//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3418

// ? ⌚ Time complexity ➺ O(n * m * 3)

// ? 🧺 Space complexity ➺ O(n * m * 3)

class Solution {
      int m, n;
      int[][][] dp;

      int solve(int[][] coins, int i, int j, int neu) {
            // Out of bounds → invalid path
            if (i >= m || j >= n)
                  return Integer.MIN_VALUE;

            // Base case: reached bottom-right cell
            if (i == m - 1 && j == n - 1) {
                  // Use a neutralize to skip this negative cell if possible
                  if (coins[i][j] < 0 && neu > 0)
                        return 0;
                  return coins[i][j];
            }

            // Return cached result if already computed
            if (dp[i][j][neu] != Integer.MIN_VALUE)
                  return dp[i][j][neu];

            int best = Integer.MIN_VALUE;

            // ---------- Move DOWN ----------
            int down = solve(coins, i + 1, j, neu);
            if (down != Integer.MIN_VALUE)
                  best = Math.max(best, coins[i][j] + down);

            // ---------- Move RIGHT ----------
            int right = solve(coins, i, j + 1, neu);
            if (right != Integer.MIN_VALUE)
                  best = Math.max(best, coins[i][j] + right);

            // ---------- Neutralize: skip this negative cell ----------
            // Only available when current cell is negative and neu > 0
            if (coins[i][j] < 0 && neu > 0) {
                  int downSkip  = solve(coins, i + 1, j, neu - 1);
                  int rightSkip = solve(coins, i, j + 1, neu - 1);
                  int skipBest  = Math.max(downSkip, rightSkip);
                  if (skipBest != Integer.MIN_VALUE)
                        best = Math.max(best, skipBest);
            }

            return dp[i][j][neu] = best;
      }

      public int maximumAmount(int[][] coins) {
            m  = coins.length;
            n  = coins[0].length;
            dp = new int[m][n][3];

            // ---------- Initialize dp with sentinel (unvisited) value ----------
            for (int i = 0; i < m; i++)
                  for (int j = 0; j < n; j++)
                        for (int k = 0; k < 3; k++)
                              dp[i][j][k] = Integer.MIN_VALUE;

            return solve(coins, 0, 0, 2);
      }
}