#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1295

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def findNumbers(self, nums: list[int]) -> int:
            res = 0  # Initialize the result counter

            for num in nums:
                  # Check if the number has even digits (2, 4, or 6 digits)
                  if 9 < num < 100 or 999 < num < 10000 or num == 100000:
                        res += 1  # Increment result if number meets the condition

            return res  # Return the final count
