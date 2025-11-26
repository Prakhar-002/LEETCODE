//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L1.4 Q1

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var finalPrices = function (prices) {
      const stack = [];                     // Stack for indices
      const ans = prices.slice();           // Copy prices array for discounts

      // Iterate over all prices
      for (let i = 0; i < prices.length; i++) {
            // While current price is less or equal to price at top index in stack
            while (stack.length && prices[stack[stack.length - 1]] >= prices[i]) {
                  // Pop top index and apply discount
                  let idx = stack.pop();
                  ans[idx] -= prices[i];
            }
            // Push current index for future discount
            stack.push(i);
      }

      return ans;
};
