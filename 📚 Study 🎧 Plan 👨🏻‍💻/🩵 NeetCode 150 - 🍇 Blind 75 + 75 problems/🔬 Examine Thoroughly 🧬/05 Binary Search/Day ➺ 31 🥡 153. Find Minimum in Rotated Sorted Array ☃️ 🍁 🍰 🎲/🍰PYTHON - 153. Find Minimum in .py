#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 153

#? ⌚ Time complexity ➺ O(log n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def findMin(self, nums: list[int]) -> int:
            n = len(nums) - 1      # Index of the last element
            l = 0                  # Left boundary of binary search
            r = n                  # Right boundary of binary search

            # If array is already sorted, return the first element
            if nums[0] <= nums[n]:
                  return nums[0]

            # Binary search to find the smallest element
            while l <= r:
                  m = l + (r - l) // 2     # Middle index

                  # If middle element is greater than last, min must be on right side
                  if nums[m] > nums[n]:
                        l = m + 1
                  else:
                        r = m - 1          # Otherwise, min is on left side or at mid

            # After loop, l points to the smallest element
            return nums[l]
