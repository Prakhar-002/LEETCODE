#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 121

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(prices)

#? 🧺 Space complexity ➺ O(1) 

from typing import List 

class Solution:
      def maxProfit(self, prices: List[int]) -> int:
            # Initialize profit variable
            profit = 0
            # Left and right pointers
            l, r = 0, 1

            # Iterate while the right pointer is within bounds
            while r < len(prices):
                  # If we find a profitable transaction
                  if prices[l] < prices[r]:
                        curProfit = prices[r] - prices[l]  # Calculate current profit
                        profit = max(profit, curProfit)    # Update maximum profit
                  else:
                        l = r  # Move left pointer forward if no profit possible
                  r += 1  # Move right pointer forward

            return profit  # Return the maximum profit found
