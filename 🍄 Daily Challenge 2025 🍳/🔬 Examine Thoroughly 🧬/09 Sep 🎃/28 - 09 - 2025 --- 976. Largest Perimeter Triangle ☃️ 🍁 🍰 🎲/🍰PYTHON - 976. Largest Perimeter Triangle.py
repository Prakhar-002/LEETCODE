#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 976

#? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

from typing import List

class Solution:
      def largestPerimeter(self, nums: List[int]) -> int:
            # Sort in non-increasing order so that nums[i] is the largest in each triple
            nums.sort(reverse=True)  # in-place sort descending 

            # Scan consecutive triples; first valid triple gives the maximum perimeter
            for i in range(len(nums) - 2):
                  a, b, c = nums[i], nums[i + 1], nums[i + 2]

                  # Triangle inequality: for a ≥ b ≥ c, only need b + c > a 
                  if b + c > a:
                        return a + b + c  # maximal perimeter due to descending order

            # No valid triangle
            return 0
