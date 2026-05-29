#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3300

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

from typing import List

class Solution:
      def minElement(self, nums: List[int]) -> int:

            # Extract and sum all digits of a number
            def digit_sum(n):
                  ans = 0
                  while n > 0:
                        ans += n % 10    # Add last digit
                        n   //= 10       # Remove last digit
                  return ans

            res = float("inf")

            for n in nums:
                  # Track the minimum digit sum seen so far
                  res = min(res, digit_sum(n))

            return res