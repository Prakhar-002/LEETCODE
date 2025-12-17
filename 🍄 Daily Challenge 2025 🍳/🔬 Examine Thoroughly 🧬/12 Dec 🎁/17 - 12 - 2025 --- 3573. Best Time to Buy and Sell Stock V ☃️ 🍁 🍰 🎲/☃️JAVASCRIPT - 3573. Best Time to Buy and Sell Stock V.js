//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3573

//? ⌚ Time complexity ➺ O(nk) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(k)

/**
 * @param {number[]} prices
 * @param {number} k
 * @return {number}
 */
var maximumProfit = function (prices, k) {
      /**
       * Maximum profit with at most k buy/sell transactions.
       * Space-optimized 3-state DP: O(k) space.
       */
      const n = prices.length;

      // dp[j][state]: max profit with j transactions
      // state 0: no position (cash)
      // state 1: holding stock  
      // state 2: just sold (profit locked)
      const dp = Array(k + 1)
            .fill()
            .map(() => [0, 0, 0]);

      // Day 0: initialize buying/selling first price
      for (let j = 1; j <= k; j++) {
            dp[j][1] = -prices[0];   // Buy first stock
            dp[j][2] = prices[0];    // Sell immediately (net 0 profit)
      }

      // Process each day i
      for (let i = 1; i < n; i++) {
            // Reverse j order: prevents using updated values
            for (let j = k; j > 0; j--) {
                  // State 0: no open position
                  // Can stay idle, sell(1→0), or rebuy after sell(2→0)
                  dp[j][0] = Math.max(
                        dp[j][0],                                    // Stay idle
                        Math.max(dp[j][1] + prices[i],              // Sell held stock
                              dp[j][2] - prices[i])             // Buy back after sell
                  );

                  // State 1: holding stock
                  // Can keep holding or buy new from previous transaction
                  dp[j][1] = Math.max(
                        dp[j][1],                                    // Keep holding
                        dp[j - 1][0] - prices[i]                     // Buy using prev profit
                  );

                  // State 2: just sold (profit taken)
                  // Can keep profit or sell new from previous transaction
                  dp[j][2] = Math.max(
                        dp[j][2],                                    // Keep profit
                        dp[j - 1][0] + prices[i]                     // Sell from prev idle
                  );
            }
      }

      // Return max profit with no open position
      return dp[k][0];
};
