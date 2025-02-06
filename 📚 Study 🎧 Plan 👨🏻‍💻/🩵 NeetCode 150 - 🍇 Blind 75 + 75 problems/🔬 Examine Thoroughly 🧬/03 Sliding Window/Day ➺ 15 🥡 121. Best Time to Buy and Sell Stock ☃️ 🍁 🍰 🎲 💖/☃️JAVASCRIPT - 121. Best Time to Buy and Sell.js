//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 121

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(prices)

//? 🧺 Space complexity ➺ O(1)

var maxProfit = function (prices) {
      // Initialize profit variable
      let profit = 0;
      // Left and right pointers
      let l = 0, r = 1;

      // Iterate while the right pointer is within bounds
      while (r < prices.length) {
            // If we find a profitable transaction
            if (prices[l] < prices[r]) {
                  let curProfit = prices[r] - prices[l]; // Calculate current profit
                  profit = Math.max(profit, curProfit);  // Update maximum profit
            } else {
                  l = r;  // Move left pointer to right pointer if no profit possible
            }

            r++;  // Move right pointer forward
      }

      return profit;  // Return the maximum profit found
}