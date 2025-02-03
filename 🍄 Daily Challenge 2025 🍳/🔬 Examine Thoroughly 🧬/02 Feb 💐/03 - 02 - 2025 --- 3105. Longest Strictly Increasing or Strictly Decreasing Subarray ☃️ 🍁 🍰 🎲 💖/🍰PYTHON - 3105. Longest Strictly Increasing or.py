#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3105

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

from typing import List

class Solution:
      def longestMonotonicSubarray(self, nums: List[int]) -> int:
            # Variables to track increasing and decreasing subsequences
            inc, dec = 1, 1
            max_length = 1

            # Iterate to find the longest decreasing subarray
            for i in range(1, len(nums)):
                  if nums[i] < nums[i - 1]:
                        dec += 1  # Increase dec count
                  else:
                        dec = 1  # Reset dec count
                  max_length = max(max_length, dec)

            # Iterate to find the longest increasing subarray
            for i in range(1, len(nums)):
                  if nums[i] > nums[i - 1]:
                        inc += 1  # Increase inc count
                  else:
                        inc = 1  # Reset inc count
                  max_length = max(max_length, inc)

            # Return the maximum length found
            return max_length
