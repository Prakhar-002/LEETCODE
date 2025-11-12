#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest Maths L2 Q3

# ? ⌚ Time complexity ➺ O(n) 👉🏻  n = right - left + 1

# ? 🧺 Space complexity ➺ O(1)

from typing import List

class Solution:
      def selfDividingNumbers(self, left: int, right: int) -> List[int]:
            res = []  # List to store self-dividing numbers found in range

            def isDividing(num):
                  n = num  # Copy to extract digits without altering original number

                  while n > 0:
                        digit = n % 10  # Extract last digit
                        # Return False if digit is 0 or num not divisible by digit
                        if not digit or num % digit:
                              return False
                        n //= 10  # Remove last digit

                  return True  # All digits divide num evenly, so num is self-dividing

            # Check every number in the given range
            for num in range(left, right + 1):
                  if isDividing(num):
                        res.append(num)  # Append number if self-dividing

            return res
