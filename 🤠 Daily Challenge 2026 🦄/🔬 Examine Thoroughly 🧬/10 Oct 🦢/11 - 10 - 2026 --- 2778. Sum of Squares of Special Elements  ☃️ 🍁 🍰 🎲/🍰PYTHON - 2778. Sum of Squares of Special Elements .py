#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2778

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def sumOfSquares(self, nums: list[int]) -> int:
            res = 0
            n = len(nums)

            # Enumerate using 1-based indexing
            for i, num in enumerate(nums, 1):
                  # If i divides n (i.e., n % i == 0), the element is special
                  if n % i == 0:
                        res += num ** 2

            return res