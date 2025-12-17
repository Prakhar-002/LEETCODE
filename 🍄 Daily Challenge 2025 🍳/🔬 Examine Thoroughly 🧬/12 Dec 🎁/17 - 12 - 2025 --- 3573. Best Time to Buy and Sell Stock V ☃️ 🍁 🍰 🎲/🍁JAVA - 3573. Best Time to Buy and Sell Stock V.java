//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3573

//? ⌚ Time complexity ➺ O(nk) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(k)

class Solution {
      public long maximumProfit(int[] prices, int k) {
            /**
             * Maximum profit with at most k transactions (buy/sell pairs).
             * Space-optimized DP: O(k) space instead of O(nk).
             */
            int n = prices.length;

            // dp[j][state]: max profit using j transactions
            // state 0: no stock held
            // state 1: holding stock (bought)
            // state 2: just sold stock (profit locked)
            long[][] dp = new long[k + 1][3];

            // Day 0: initialize all transactions
            for (int j = 1; j <= k; j++) {
                  dp[j][1] = -prices[0]; // Buy first stock
                  dp[j][2] = prices[0]; // Sell immediately (net 0 profit)
            }

            // Fill DP: day by day, transaction by transaction (reverse order)
            for (int i = 1; i < n; i++) {
                  for (int j = k; j > 0; j--) { // Reverse j avoids overwriting
                        // State 0: no position open
                        // Can: stay idle, sell(1→0), rebuy after sell(2→0)
                        dp[j][0] = Math.max(
                                    dp[j][0], // Stay idle
                                    Math.max(dp[j][1] + prices[i], // Sell held stock
                                                dp[j][2] - prices[i]) // Buy back after sell
                        );

                        // State 1: holding stock
                        // Can: keep holding, or buy new from prev transaction
                        dp[j][1] = Math.max(
                                    dp[j][1], // Keep holding
                                    dp[j - 1][0] - prices[i] // Buy using prev profit
                        );

                        // State 2: just sold (profit taken)
                        // Can: keep profit, or sell new from prev transaction
                        dp[j][2] = Math.max(
                                    dp[j][2], // Keep profit
                                    dp[j - 1][0] + prices[i] // Sell from prev idle
                        );
                  }
            }

            // Answer: max profit with no open position
            return dp[k][0];
      }
}
