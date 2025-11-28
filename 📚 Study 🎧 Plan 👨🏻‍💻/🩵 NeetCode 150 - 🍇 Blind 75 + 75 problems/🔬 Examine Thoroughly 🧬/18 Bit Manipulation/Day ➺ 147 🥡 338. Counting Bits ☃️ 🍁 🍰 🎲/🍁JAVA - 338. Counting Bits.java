//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 338

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

public class Solution {
      public int[] countBits(int n) {
            int[] dp = new int[n + 1]; // dp[i] = number of 1s in binary of i

            int offset = 1; // Tracks highest power of 2 <= current i

            for (int i = 1; i <= n; i++) {
                  // Update offset when reaching next power of 2
                  if (offset * 2 == i) {
                        offset = i;
                  }

                  // dp[i] = dp[i - offset] + 1
                  // i - offset removes highest bit, +1 for that bit
                  dp[i] = 1 + dp[i - offset];
            }

            return dp;
      }
}
