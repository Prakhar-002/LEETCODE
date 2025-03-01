#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2460

# ? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

# ? 🧺 Space complexity ➺ O(1)

from typing import List

class Solution:
      def applyOperations(self, nums: List[int]) -> List[int]:
            # Total number of elements in the array
            N = len(nums)

            # First pass - apply the operation:
            # If two adjacent elements are equal, double the first and set the second to zero
            for i in range(N - 1):
                  if nums[i] == nums[i + 1]:
                        nums[i] *= 2  # Double the value of nums[i]
                        nums[i + 1] = 0  # Set the next element to zero

            # Second pass - shift all non-zero elements to the left (maintain order)
            j = 0  # Pointer to track where the next non-zero element should go

            for i in range(N):
                  if nums[i] != 0:
                        # Swap nums[i] and nums[j]
                        nums[i], nums[j] = nums[j], nums[i]
                        # Move the non-zero pointer forward
                        j += 1

            # Return the final modified array
            return nums
