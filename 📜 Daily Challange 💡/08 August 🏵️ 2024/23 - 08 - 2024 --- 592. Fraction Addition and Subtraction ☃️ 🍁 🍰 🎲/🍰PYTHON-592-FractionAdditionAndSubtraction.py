#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 592

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(expression)

#? 🧺 Space complexity ➺ O(1)

import math

class Solution:
      def fractionAddition(self, expression: str) -> str:
            # `numerator` at 0 and `denominator` at 1, to keep track of the resulting fraction
            numerator, denominator = 0, 1
            idx, n = 0, len(expression)

            # loop runs as long as `idx` is less than `n`
            while idx < n:
                  sign = 1
                  # `expression[idx]` is a '+' or '-'. If it is, it sets a `sign` variable
                  if expression[idx] in ['+', '-']:
                        # `sign` variable to -1 for '-' or 1 for '+'
                        sign = -1 if expression[idx] == '-' else 1
                        # increments `idx` for next char
                        idx += 1

                  # initializes a variable `num` to 0
                  num = 0
                  # `while` loop to extract consecutive number as numerator
                  while idx < n and expression[idx].isdigit():
                        # builds the number by multiplying the current `num` by 10 and adding the value
                        # of the new digit
                        num = num * 10 + int(expression[idx])
                        idx += 1

                  # `sign` variable is then applied to adjust it for positive or negative values.
                  num *= sign

                  # After parsing the numerator, `idx` is incremented to skip the '/' character
                  idx += 1

                  den = 0
                  # `while` loop to extract consecutive number as denominator
                  while idx < n and expression[idx].isdigit():
                        # builds the number by multiplying the current `num` by 10 and adding the value
                        # of the new digit
                        den = den * 10 + int(expression[idx])
                        idx += 1

                  # Ex. 2/3 + 5/7 = ((2 * 7) + (3 * 5)) / (3 * 7)
                  numerator = numerator * den + denominator * num
                  denominator = denominator * den

                  # calls the `gcd` function to find the greatest common divisor
                  # of the absolute value of the numerator and the denominator
                  gcd_factor = math.gcd(abs(numerator), denominator)

                  # The numerator and the denominator are
                  # then divided by this gcd value to reduce the fraction to its simplest form
                  numerator //= gcd_factor
                  denominator //= gcd_factor

            return f"{numerator}/{denominator}"