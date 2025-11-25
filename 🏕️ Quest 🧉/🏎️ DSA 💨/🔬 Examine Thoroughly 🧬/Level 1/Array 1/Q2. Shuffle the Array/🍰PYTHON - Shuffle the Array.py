#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest DSA L1 Q2

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

from typing import List

class Solution:
      def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
            max_ones = 0
            l = 0

            # Use a sliding window to count consecutive 1s
            for r in range(len(nums)):
                  if nums[r] == 0:
                        # Move left pointer to the next element after 0
                        l = r + 1
                  else:
                        # Calculate current window size when nums[r] == 1
                        max_ones = max(max_ones, r - l + 1)

            return max_ones