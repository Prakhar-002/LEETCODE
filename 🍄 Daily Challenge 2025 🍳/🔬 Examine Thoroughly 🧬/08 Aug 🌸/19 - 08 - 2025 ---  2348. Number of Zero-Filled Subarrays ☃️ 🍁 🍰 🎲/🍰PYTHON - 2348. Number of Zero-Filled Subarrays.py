#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2348

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

from typing import List

class Solution:
      def zeroFilledSubarray(self, nums: List[int]) -> int:
            # `total` accumulates the final count of zero-filled subarrays.
            total = 0
            # `subArr` tracks the length of the current consecutive streak of zeros.
            subArr = 0

            # Iterate through each number in the list.
            for num in nums:
                  if num == 0:
                        # If we find a zero, extend the current streak.
                        subArr += 1
                        # A streak of `k` zeros adds `k` new subarrays ending at this position.
                        # For example, for [0, 0, 0], we add 1, then 2, then 3.
                        total += subArr
                  else:
                        # If the number is not zero, the streak is broken.
                        subArr = 0

            return total
