//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3573

//? ⌚ Time complexity ➺ O(nk) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(k)

class Solution {
public:
      long long maximumProfit(vector<int>& prices, int k) {
            /**
             * Maximum profit with at most k buy/sell transactions.
             * Space-optimized DP using 3 states per transaction count.
             */
            int n = prices.size();

            // dp[j][state]: max profit with j transactions
            // state 0: no position (cash only)
            // state 1: holding stock (bought)
            // state 2: just sold (profit locked)
            vector<vector<long long>> dp(k + 1, vector<long long>(3));

            // Day 0 initialization: all transactions start
            for (int j = 1; j <= k; j++) {
                  dp[j][1] = -prices[0];   // Buy first stock
                  dp[j][2] = prices[0];    // Sell immediately (net 0)
            }

            // Process each day
            for (int i = 1; i < n; i++) {
                  // Reverse transaction order to avoid overwriting
                  for (int j = k; j > 0; j--) {
                        // State 0: no position open
                        // Transitions: stay idle, sell(1→0), rebuy(2→0)
                        dp[j][0] = max(dp[j][0],                    // Stay idle
                                     max(dp[j][1] + prices[i],        // Sell held stock
                                         dp[j][2] - prices[i]));     // Buy back after sell

                        // State 1: holding stock
                        // Transitions: keep holding, buy new from prev trans
                        dp[j][1] = max(dp[j][1],                     // Keep holding
                                     dp[j - 1][0] - prices[i]);    // Buy from prev profit

                        // State 2: just sold (profit taken)
                        // Transitions: keep profit, sell new from prev trans
                        dp[j][2] = max(dp[j][2],                     // Keep profit
                                     dp[j - 1][0] + prices[i]);    // Sell from prev idle
                  }
            }

            // Final answer: max profit with no open position
            return dp[k][0];
      }
};
