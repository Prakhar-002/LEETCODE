#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2144

#? ⌚ Time complexity ➺ O(nlogn) 👉🏻  n = len(cost)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def minimumCost(self, cost: List[int]) -> int:
            cost.sort(reverse = True)

            for i, price in enumerate(cost):
                  if i % 3 != 2:
                        ans += price

            return ans