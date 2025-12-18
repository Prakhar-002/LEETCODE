//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3652

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

function maxProfit(prices, strategy, k) {
      /**
       * Maximize profit by flipping exactly k strategy positions.
       * strategy[i]=1: buy at prices[i], strategy[i]=0: sell at prices[i].
       * O(n) solution using prefix sums.
       */
      const n = prices.length;

      // Prefix sums for O(1) range queries
      const profitSum = new Array(n + 1).fill(0);  // Cumulative strategy profit
      const priceSum = new Array(n + 1).fill(0);   // Cumulative prices

      // Build prefix sums
      for (let i = 0; i < n; i++) {
            profitSum[i + 1] = profitSum[i] + prices[i] * strategy[i];
            priceSum[i + 1] = priceSum[i] + prices[i];
      }

      // Original total profit (no flips)
      let res = profitSum[n];

      // Try flipping exactly k consecutive positions ending at i
      for (let i = k - 1; i < n; i++) {
            // leftProfit: [0, i-k+1) unchanged
            const leftProfit = profitSum[i - k + 1];

            // rightProfit: [i+1, n) unchanged
            const rightProfit = profitSum[n] - profitSum[i + 1];

            // changeProfit: flip k positions [i-k+1, i]
            // Flip effect: buy→sell(+price), sell→buy(-price) → net +2*price
            const changeProfit = priceSum[i + 1] - priceSum[i - Math.floor(k / 2) + 1];

            // Total profit with this flip window
            res = Math.max(res, leftProfit + changeProfit + rightProfit);
      }

      return res;
}
