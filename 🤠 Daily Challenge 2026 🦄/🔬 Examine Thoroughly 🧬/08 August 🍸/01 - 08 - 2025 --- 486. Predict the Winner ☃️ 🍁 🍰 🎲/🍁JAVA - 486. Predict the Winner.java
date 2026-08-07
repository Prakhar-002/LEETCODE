//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 486

//? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n ^ 2)

class Solution {
      int[] nums;
      int n;
      int[][] dp;

      public int solve(int i, int j) {
            // No elements left — score nothing
            if (i > j)
                  return 0;

            // One element left — must take it
            if (i == j)
                  return nums[i];

            // Return cached result if already computed
            if (dp[i][j] != -1)
                  return dp[i][j];

            // Take from left — opponent then picks optimally from remaining
            int takeI = nums[i] + Math.min(
                  solve(i + 2, j),
                  solve(i + 1, j - 1)
            );

            // Take from right — opponent then picks optimally from remaining
            int takeJ = nums[j] + Math.min(
                  solve(i, j - 2),
                  solve(i + 1, j - 1)
            );

            // Current player picks whichever gives the higher personal score
            return dp[i][j] = Math.max(takeI, takeJ);
      }

      public boolean predictTheWinner(int[] nums) {
            this.nums = nums;
            this.n    = nums.length;

            // Initialize dp table with -1 (unvisited sentinel)
            dp = new int[n][n];
            for (int[] row : dp)
                  java.util.Arrays.fill(row, -1);

            int total   = 0;
            for (int num : nums) total += num;
            int p1Score = solve(0, n - 1);
            int p2Score = total - p1Score;

            // Player 1 wins if their score is at least equal to player 2's
            return p1Score >= p2Score;
      }
}