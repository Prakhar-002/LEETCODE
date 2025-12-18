//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3652

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

class Solution {
      public long maxProfit(int[] prices, int[] strategy, int k) {
            /**
             * Maximize profit by flipping exactly k consecutive strategy positions.
             * strategy[i]=1: buy(+price), strategy[i]=0: sell(-price).
             * O(n) prefix sum solution.
             */
            int n = prices.length;

            // Prefix sums for O(1) range calculations
            long[] profitSum = new long[n + 1]; // Cumulative strategy profit
            long[] priceSum = new long[n + 1]; // Cumulative prices

            // Build prefix sums
            for (int i = 0; i < n; i++) {
                  profitSum[i + 1] = profitSum[i] + (long) prices[i] * strategy[i];
                  priceSum[i + 1] = priceSum[i] + prices[i];
            }

            // Original total profit (no changes)
            long res = profitSum[n];

            // Try flipping k consecutive positions ending at i
            for (int i = k - 1; i < n; i++) {
                  // leftProfit: positions [0, i-k+1) unchanged
                  long leftProfit = profitSum[i - k + 1];

                  // rightProfit: positions [i+1, n) unchanged
                  long rightProfit = profitSum[n] - profitSum[i + 1];

                  // changeProfit: flip k positions [i-k+1, i]
                  // Each flip: buy→sell or sell→buy → net +2*price[i]
                  long changeProfit = priceSum[i + 1] - priceSum[i - k / 2 + 1];

                  // Total profit for this flip window
                  res = Math.max(res, leftProfit + changeProfit + rightProfit);
            }

            return res;
      }
}
