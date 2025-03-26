#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 462

#? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

from typing import List

class Solution:
      def minMoves2(self, nums: List[int]) -> int:
            # Sort the array to find the median efficiently
            nums.sort()

            # The median minimizes the sum of absolute differences
            median = nums[len(nums) // 2]

            # Initialize the move counter
            count = 0

            # Iterate over the array to compute the total moves required
            for num in nums:
                  count += abs(median - num)  # Add the absolute difference

            return count  # Return the minimum number of moves needed
