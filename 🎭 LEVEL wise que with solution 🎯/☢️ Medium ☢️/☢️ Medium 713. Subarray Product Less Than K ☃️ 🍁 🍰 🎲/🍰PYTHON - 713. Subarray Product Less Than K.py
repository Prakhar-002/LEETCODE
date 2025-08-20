#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 713

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

from typing import List 

class Solution:
      def numSubarrayProductLessThanK(self, nums: List[int], k: int) -> int:
            # If k is 1 or less, no product of positive integers can be less than k.
            if k <= 1:
                  return 0

            # This will store the final count of valid subarrays.
            result = 0
            # This will store the product of the elements in the current window.
            product = 1
            # Left pointer of the sliding window.
            left = 0

            # Iterate through the array with the right pointer.
            for right in range(len(nums)):
                  # Expand the window by including the element at the right pointer.
                  product *= nums[right]

                  # Shrink the window from the left until the product is less than k.
                  while product >= k:
                        # Remove the element at the left pointer from the product.
                        product //= nums[left]
                        # Move the left pointer to the right.
                        left += 1

                  # At this point, the product of the window [left, right] is < k.
                  # All subarrays ending at 'right' within this valid window are also valid.
                  # e.g., if the window is [5, 2, 6], subarrays ending at 6 are:
                  # [6], [2, 6], [5, 2, 6]
                  # The number of such new subarrays is the length of the window.
                  result += (right - left + 1)

            return result
