//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2787

//? ⌚ Time complexity ➺ O(n * n ^ (1 / x)) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

class Solution {
      public int numberOfWays(int n, int x) {
            int MOD = (int) 1_000_000_007;

            // dp[s] stores number of ways to sum to s
            int[] dp = new int[n + 1];
            dp[0] = 1; // Base case

            // Loop through possible i values whose power won't exceed n
            for (int i = 1; i <= n; i++) {
                  long val = (long) Math.pow(i, x); // i^x

                  // If the value exceeds n, no further calculations needed
                  if (val > n)
                        break;

                  // Traverse backwards to ensure each base is used at most once
                  for (int j = n; j >= val; j--) {
                        dp[j] = (int) ((dp[j] + dp[(int) (j - val)]) % MOD);
                  }
            }

            return dp[n];
      }
}
