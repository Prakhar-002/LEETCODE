#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2529

#? ⌚ Time complexity ➺ O(log n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1) 

class Solution:
      def countNegatives(self, nums):
            left, right = 0, len(nums) - 1  # Binary search boundaries

            while left <= right:
                  mid = (left + right) // 2  # Calculate middle index

                  if nums[mid] < 0:
                        left = mid + 1  # Move right to find first non-negative
                  else:
                        right = mid - 1  # Search in the left half

            return left  # Index of first non-negative number = count of negatives

      def countPositives(self, nums):
            left, right = 0, len(nums) - 1  # Binary search boundaries

            while left <= right:
                  mid = (left + right) // 2  # Calculate middle index

                  if nums[mid] <= 0:
                        left = mid + 1  # Move right to find first positive
                  else:
                        right = mid - 1  # Search in the left half

            return len(nums) - left  # Count of positive numbers

      def maximumCount(self, nums):
            # Compute counts of negative and positive numbers
            neg_count = self.countNegatives(nums)
            pos_count = self.countPositives(nums)

            # Return the larger count
            return max(neg_count, pos_count)
