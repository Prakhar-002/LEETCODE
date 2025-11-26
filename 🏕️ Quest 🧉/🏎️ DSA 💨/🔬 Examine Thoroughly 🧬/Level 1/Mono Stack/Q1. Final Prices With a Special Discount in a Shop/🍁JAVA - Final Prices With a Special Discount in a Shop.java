//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L1.4 Q1

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

import java.util.*;

class Solution {
      public int[] finalPrices(int[] prices) {
            Stack<Integer> stack = new Stack<>(); // Stack to hold indices
            int[] ans = Arrays.copyOf(prices, prices.length); // Result array, initially copy of prices

            // Iterate through each price
            for (int i = 0; i < prices.length; i++) {
                  // While current price is less or equal to price at top of stack
                  while (!stack.isEmpty() && prices[stack.peek()] >= prices[i]) {
                        // Pop index and apply discount
                        ans[stack.pop()] -= prices[i];
                  }
                  // Add current index to stack
                  stack.push(i);
            }

            return ans;
      }
}
