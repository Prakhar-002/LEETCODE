#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1475

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(prices)

#? 🧺 Space complexity ➺ O(n)

from collections import deque

class Solution:
      def finalPrices(self, prices):
            stack = deque()
            n = len(prices)
            ans = [0] * n

            # Traverse the prices array from right to left
            for i in range(n - 1, -1, -1):
                  # Pop elements from the stack that are greater than the current price
                  while stack and stack[-1] > prices[i]:
                        stack.pop()

                  # Calculate discounted price
                  ans[i] = prices[i] if not stack else prices[i] - stack[-1]

                  # Push current price to the stack
                  stack.append(prices[i])

            return ans
