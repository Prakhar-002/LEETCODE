#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3354

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

from typing import List

class Solution:
      def countValidSelections(self, nums: List[int]) -> int:
            selections = 0
            left, right = 0, sum(nums)  # left/right = sums before/after each index

            for i in range(len(nums)):
                  if nums[i] == 0:
                        # Consider splits for zero entries; count if sums are nearly equal
                        if 0 <= left - right <= 1:
                              selections += 1
                        if 0 <= right - left <= 1:
                              selections += 1
                  else:
                        # Update running sums for next positions
                        left += nums[i]
                        right -= nums[i]

            return selections
