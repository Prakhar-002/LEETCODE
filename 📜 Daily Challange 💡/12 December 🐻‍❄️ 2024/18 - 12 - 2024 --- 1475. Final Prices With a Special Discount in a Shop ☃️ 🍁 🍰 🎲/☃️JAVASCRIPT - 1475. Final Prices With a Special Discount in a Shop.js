//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1475

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(prices)

//? 🧺 Space complexity ➺ O(n)

var finalPrices = function (prices) {
      let stack = [];
      let n = prices.length;
      let ans = new Array(n);

      // Traverse the prices array from right to left
      for (let i = n - 1; i >= 0; i--) {
            // Pop elements from the stack that are greater than the current price
            while (stack.length > 0 && stack[stack.length - 1] > prices[i]) {
                  stack.pop();
            }

            // Calculate discounted price
            ans[i] = stack.length === 0 ? prices[i] : prices[i] - stack[stack.length - 1];

            // Push current price to the stack
            stack.push(prices[i]);
      }

      console.log(stack); // Debugging statement
      return ans;
}