#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1737

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def sumBase(self, n: int, k: int) -> int:
            digitSum = 0  # Initialize the sum of digits in base-k

            while n > 0:
                  digitSum += n % k     # Add the last digit in base-k
                  n //= k               # Remove the last digit (integer division)

            return digitSum  # Return the total digit sum
