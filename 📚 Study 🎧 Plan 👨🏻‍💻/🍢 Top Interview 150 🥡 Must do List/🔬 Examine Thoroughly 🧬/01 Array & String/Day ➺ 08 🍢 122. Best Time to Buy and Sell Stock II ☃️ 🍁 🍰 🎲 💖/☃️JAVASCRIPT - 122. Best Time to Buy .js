//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 122

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(profit)

//? 🧺 Space complexity ➺ O(1)

var maxProfit = function (prices) {
      // Initialize profit variable
      let profit = 0;

      // Iterate through the price list starting from the second element
      for (let i = 1; i < prices.length; i++) {
            // If the current price is greater than the previous day's price
            if (prices[i] > prices[i - 1]) {
                  // Add the profit from this transaction
                  profit += prices[i] - prices[i - 1];
            }
      }

      return profit;  // Return the total accumulated profit
}