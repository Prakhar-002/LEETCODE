#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest Maths L1 Quiz Q1

#? ⌚ Time complexity ➺ O(n)

#? 🧺 Space complexity ➺ O(1)

# https://github.com/Prakhar-002/LEETCODE

# ⌚ Time complexity -> O(n) 

#  Space complexity -> O(1)

class Solution:
      def reverse(self, x: int) -> int:
            num = abs(x)       # Work with absolute value to handle sign separately
            rev = 0            # Store reversed number

            while num > 0:
                  pop = num % 10         # Extract last digit
                  num //= 10             # Remove last digit
                  rev = rev * 10 + pop   # Append digit at end of reversed number

            # Check for overflow (32-bit signed int range)
            if rev > 2**31 - 1:
                  return 0

            return -rev if x < 0 else rev  # Restore original sign
