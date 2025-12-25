#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3075

#? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(happiness)

#? 🧺 Space complexity ➺ O(1)

from typing import List 

class Solution:
      def maximumHappinessSum(self, happiness: List[int], k: int) -> int:
            # Sort in descending order to pick the k largest values
            happiness.sort(reverse=True)

            ans = 0

            # Select the top k children
            for i in range(k):
                  # Each child's happiness decreases by their selection turn (i)
                  child = happiness[i] - i
                  # Add only if positive (happiness can't go negative)
                  ans += max(0, child)

            return ans
