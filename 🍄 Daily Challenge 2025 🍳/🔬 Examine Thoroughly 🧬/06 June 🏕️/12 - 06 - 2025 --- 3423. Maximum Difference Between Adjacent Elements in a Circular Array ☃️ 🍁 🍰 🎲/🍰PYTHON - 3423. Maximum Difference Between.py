#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3423

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1) 

class Solution:
      def maxAdjacentDistance(self, nums):
            n = len(nums)  # Get the length of the list
            max_diff = abs(nums[n - 1] - nums[0])  # Initialize max_diff with the difference between first and last element

            # Iterate through the array to find the max adjacent difference
            for i in range(1, n):
                  max_diff = max(max_diff, abs(nums[i] - nums[i - 1]))

            return max_diff  # Return the maximum adjacent difference