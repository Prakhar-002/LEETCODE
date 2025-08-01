#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2221

#? ⌚ Time complexity ➺ O(n * 2) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def triangularSum(self, nums: List[int]) -> int:
            # Repeat the reduction process until only one element is left
            for i in range(len(nums) - 1):
                  # Create a temporary array of reduced size
                  temp = [0] * (len(nums) - 1)

                  # Fill the temp array with sum of adjacent elements mod 10
                  for j in range(len(temp)):
                        temp[j] = (nums[j] + nums[j + 1]) % 10

                  # Update nums to the newly formed temp array
                  nums = temp

            # The first (and only) element is the triangular sum
            return nums[0]
