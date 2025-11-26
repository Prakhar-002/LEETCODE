#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest DSA L1.4 Q1

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def finalPrices(self, prices: List[int]) -> List[int]:
            stack = []  # Stack to keep indices of prices
            ans = prices[:]  # Copy of prices to store final discounted prices

            # Iterate over all prices
            for i, price in enumerate(prices):
                  # While stack is not empty and current price is less than or equal to price at stack top index
                  while stack and prices[stack[-1]] >= price:
                        # Apply discount to price at index from stack
                        ans[stack.pop()] -= price
                  # Push current index onto stack for future discount evaluation
                  stack.append(i)

            # Return the list of final prices after discounts
            return ans
