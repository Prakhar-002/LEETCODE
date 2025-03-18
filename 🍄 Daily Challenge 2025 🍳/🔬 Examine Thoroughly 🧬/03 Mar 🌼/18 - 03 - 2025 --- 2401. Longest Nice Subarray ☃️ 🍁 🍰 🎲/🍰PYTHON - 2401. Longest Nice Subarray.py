#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2401

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

from typing import List 

class Solution:
      def longestNiceSubarray(self, nums: List[int]) -> int:
            max_length = 0
            bit_mask = 0  # Tracks the bitwise OR of the current subarray
            l = 0  # Left pointer of the sliding window

            for r in range(len(nums)):
                  # If nums[right] has overlapping bits with bit_mask, adjust the left pointer
                  while (bit_mask & nums[r]) != 0:
                        bit_mask ^= nums[l]  # Remove nums[left] from bit_mask
                        l += 1  # Move left pointer forward

                  bit_mask |= nums[r]  # Include nums[right] in the bitwise OR
                  max_length = max(max_length, r - l + 1)  # Update max length

            return max_length
