#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2144

#? ⌚ Time complexity ➺ O(nlogn) 👉🏻  n = len(cost)

#? 🧺 Space complexity ➺ O(1)

from typing import List

class Solution:
      def minimumCost(self, cost: List[int]) -> int:
            # Sort descending so most expensive items come first
            cost.sort(reverse=True)

            ans = 0

            for i, price in enumerate(cost):
                  # Every 3rd item (0-indexed position 2, 5, 8...) is free — skip it
                  if i % 3 != 2:
                        ans += price

            return ans