#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2563

#? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def countFairPairs(self, nums, lower, upper):
            nums.sort()         # Sort array for two-pointer strategy
            return self.count(nums, upper) - self.count(nums, lower - 1)

      def count(self, nums, target):
            res = 0                       # Initialize count of valid pairs
            left = 0                      # Left pointer
            right = len(nums) - 1         # Right pointer

            while left < right:
                  if nums[left] + nums[right] > target:
                        # Sum too large, move right pointer left
                        right -= 1
                  else:
                        # All indices from left to right form valid pairs
                        res += (right - left)
                        left += 1     # Move left pointer forward

            return res                # Return total count of valid pairs
