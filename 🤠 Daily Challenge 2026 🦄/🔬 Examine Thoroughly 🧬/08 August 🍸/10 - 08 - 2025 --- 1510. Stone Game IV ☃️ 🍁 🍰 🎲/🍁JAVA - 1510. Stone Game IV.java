//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1510

//? ⌚ Time complexity ➺ O(n sqrt(n)) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

class Solution {
      private Boolean[] dp;

      public boolean winnerSquareGame(int n) {
            // Memoization array initialized to null (unvisited states)
            dp = new Boolean[n + 1];
            return solve(n);
      }

      private boolean solve(int rem) {
            // Base case: 0 stones left means the player loses
            if (rem == 0) {
                  return false;
            }

            // Return cached result if available
            if (dp[rem] != null) {
                  return dp[rem];
            }

            // Try all possible non-zero square moves
            for (int k = 1; k * k <= rem; k++) {
                  // If opponent loses after taking k * k stones, current player wins
                  if (!solve(rem - k * k)) {
                        dp[rem] = true;
                        return true;
                  }
            }

            // No winning move found
            dp[rem] = false;
            return false;
      }
}