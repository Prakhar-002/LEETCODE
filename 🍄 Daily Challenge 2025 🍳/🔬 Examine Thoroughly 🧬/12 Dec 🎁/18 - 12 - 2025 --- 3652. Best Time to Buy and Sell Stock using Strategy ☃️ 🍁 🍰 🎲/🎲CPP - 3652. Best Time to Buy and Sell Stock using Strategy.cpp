//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3652

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

class Solution {
public:
      long long maxProfit(vector<int> &prices, vector<int> &strategy, int k) {
            /**
             * Maximize profit by flipping exactly k consecutive strategy positions.
             * strategy[i]=1: buy(+price), strategy[i]=0: sell(-price).
             * O(n) prefix sum + sliding window solution.
             */
            int n = prices.size();

            // Prefix sums for O(1) range sum queries
            vector<long long> profitSum(n + 1, 0); // Cumulative strategy profit
            vector<long long> priceSum(n + 1, 0);  // Cumulative raw prices

            // Build prefix sums in O(n)
            for (int i = 0; i < n; i++) {
                  profitSum[i + 1] = profitSum[i] + (long long)prices[i] * strategy[i];
                  priceSum[i + 1] = priceSum[i] + prices[i];
            }

            // Baseline: original total profit (no flips)
            long long res = profitSum[n];

            // Sliding window: try flipping k consecutive positions
            for (int i = k - 1; i < n; i++) {
                  // leftProfit: [0, i-k+1) unchanged segment
                  long long leftProfit = profitSum[i - k + 1];

                  // rightProfit: [i+1, n) unchanged segment
                  long long rightProfit = profitSum[n] - profitSum[i + 1];

                  // changeProfit: flip k positions [i-k+1, i]
                  // Flip effect: +price→-price or -price→+price = +2*price per position
                  long long changeProfit = priceSum[i + 1] - priceSum[i - k / 2 + 1];

                  // Total profit if we flip this window
                  res = max(res, leftProfit + changeProfit + rightProfit);
            }

            return res;
      }
};
