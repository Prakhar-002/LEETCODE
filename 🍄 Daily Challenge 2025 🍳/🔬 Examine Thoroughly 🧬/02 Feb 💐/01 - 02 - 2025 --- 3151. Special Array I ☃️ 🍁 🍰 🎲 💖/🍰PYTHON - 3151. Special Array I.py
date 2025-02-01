#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3151

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

from typing import List

class Solution:
      # Function to check if an array is "special"
      def isArraySpecial(self, nums: List[int]) -> bool:
            # Iterate through the array, checking adjacent elements
            for i in range(len(nums) - 1):
                  # If the sum of two adjacent elements is even, return False
                  if not (nums[i] + nums[i + 1]) % 2:
                        return False

            # If no adjacent even sums were found, return True
            return True

#!-------------------------------------------------------------------------------

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

#* One liner 

class Solution:
      def isArraySpecial(self, nums: List[int]) -> bool:
            return all((nums[i] + nums[i + 1]) % 2 for i in range(len(nums) - 1))
