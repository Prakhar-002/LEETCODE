//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1475

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(prices)

//? 🧺 Space complexity ➺ O(n)

import java.util.Stack;

class Solution {
      public int[] finalPrices(int[] prices) {
            Stack<Integer> s = new Stack<>();
            int n = prices.length;
            int[] ans = new int[n];

            // Traverse the prices array from right to left
            for (int i = n - 1; i >= 0; i--) {
                  // Pop elements from the stack that are greater than the current price
                  while (!s.isEmpty() && s.peek() > prices[i]) {
                        s.pop();
                  }

                  // Calculate discounted price
                  ans[i] = s.isEmpty() ? prices[i] : prices[i] - s.peek();

                  // Push current price to the stack
                  s.push(prices[i]);
            }

            System.out.println(s);

            return ans;
      }
}
