#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3689

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

from typing import List 

class Solution:
      def maxTotalValue(self, nums: List[int], k: int) -> int:
            # Spread between max and min scaled by k gives the answer
            return (max(nums) - min(nums)) * k