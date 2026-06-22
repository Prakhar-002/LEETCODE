#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1833

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

from typing import List 

class Solution:
      def maxIceCream(self, costs: List[int], coins: int) -> int:
            # Sort so cheapest ice creams are bought first
            costs.sort()

            res = 0

            for cost in costs:
                  # Can't afford this one — stop since rest are more expensive
                  if coins - cost < 0:
                        return res

                  coins -= cost
                  res += 1

            return res