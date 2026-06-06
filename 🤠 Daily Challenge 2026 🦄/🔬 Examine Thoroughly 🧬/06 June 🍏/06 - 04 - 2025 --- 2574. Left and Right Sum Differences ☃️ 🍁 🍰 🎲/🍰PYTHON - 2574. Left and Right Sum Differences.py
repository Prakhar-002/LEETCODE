#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2574

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

from typing import List 

class Solution:
      def leftRightDifference(self, nums: List[int]) -> List[int]:
            # Start with total sum on the right, nothing on the left
            right_sum = sum(nums)
            left_sum  = 0
            res       = []

            for num in nums:
                  # Remove current element from right before comparing
                  right_sum -= num

                  res.append(abs(left_sum - right_sum))

                  # Add current element to left for next iteration
                  left_sum += num

            return res