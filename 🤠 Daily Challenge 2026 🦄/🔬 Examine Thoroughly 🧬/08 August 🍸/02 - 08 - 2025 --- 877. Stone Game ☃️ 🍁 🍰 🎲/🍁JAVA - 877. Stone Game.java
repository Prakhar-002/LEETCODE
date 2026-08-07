//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 877

// ? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(nums)

// ? 🧺 Space complexity ➺ O(n ^ 2)

class Solution {
      int[] piles;
      int n;
      int[][] dp;

      public int solve(int i, int j) {
            // No piles left — score nothing
            if (i > j)
                  return 0;

            // Return cached result if already computed
            if (dp[i][j] != -1)
                  return dp[i][j];

            // Take from left — opponent then picks optimally from remaining
            int takeI = piles[i] + Math.min(
                  solve(i + 2, j),
                  solve(i + 1, j - 1)
            );

            // Take from right — opponent then picks optimally from remaining
            int takeJ = piles[j] + Math.min(
                  solve(i, j - 2),
                  solve(i + 1, j - 1)
            );

            // Current player picks whichever gives the higher personal score
            return dp[i][j] = Math.max(takeI, takeJ);
      }

      public boolean stoneGame(int[] piles) {
            this.piles = piles;
            this.n     = piles.length;

            // Initialize dp table with -1 (unvisited sentinel)
            dp = new int[n][n];
            for (int[] row : dp)
                  java.util.Arrays.fill(row, -1);

            int total = 0;
            for (int p : piles) total += p;

            int alice = solve(0, n - 1);
            int bob   = total - alice;

            // Alice wins if her score is at least equal to Bob's
            return alice >= bob;
      }
}

//!------------------------------------------------------------------

class Solution {
      public boolean stoneGame(int[] piles) {
            return true;
      }
}