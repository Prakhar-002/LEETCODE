#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 162

#? ⌚ Time complexity ➺ O(log n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1) 

class Solution:
      def findPeakElement(self, nums: List[int]) -> int:

            # Initialize left and right pointers
            left = 0
            right = len(nums) - 1

            # Binary search loop
            while left < right:

                  # Calculate mid index
                  mid = (left + right) // 2

                  # If mid is greater than the next element
                  if nums[mid] > nums[mid + 1]:
                        right = mid  # Peak is on the left
                  else:
                        left = mid + 1  # Peak is on the right

            # Return the index of the peak
            return left
