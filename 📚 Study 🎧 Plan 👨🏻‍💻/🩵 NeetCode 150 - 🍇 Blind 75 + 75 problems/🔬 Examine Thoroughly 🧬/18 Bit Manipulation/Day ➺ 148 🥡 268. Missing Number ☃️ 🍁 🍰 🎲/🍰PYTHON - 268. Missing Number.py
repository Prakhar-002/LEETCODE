#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 268

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

from typing import List

class Solution:
      def missingNumber(self, nums: List[int]) -> int:
            # Length of array indicates range 0 to n (n+1 numbers expected)
            n = len(nums)

            # Expected sum from 0 to n using formula n * (n + 1) / 2
            # Python handles large integers automatically, no overflow
            expected_sum = n * (n + 1) // 2

            # Actual sum of elements in the array
            actual_sum = sum(nums)

            # Missing number = expected - actual
            return expected_sum - actual_sum
