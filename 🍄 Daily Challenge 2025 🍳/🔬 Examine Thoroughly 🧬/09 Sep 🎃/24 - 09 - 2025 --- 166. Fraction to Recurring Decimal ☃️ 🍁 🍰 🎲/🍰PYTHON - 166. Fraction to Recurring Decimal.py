#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 166

#? ⌚ Time complexity ➺ O(d) 👉🏻  d = denominator

#? 🧺 Space complexity ➺ O(d) 

class Solution:
      def fractionToDecimal(self, numerator: int, denominator: int) -> str:
            # Handle zero numerator case immediately
            if numerator == 0:
                  return "0"

            fraction = []

            # Determine the sign: negative if either numerator or denominator is negative (exclusive OR)
            if (numerator < 0) ^ (denominator < 0):
                  fraction.append("-")

            # Work with absolute values to simplify division and remainder
            dividend = abs(numerator)
            divisor = abs(denominator)

            # Append the integer part of the quotient
            fraction.append(str(dividend // divisor))

            # Calculate remainder after integer division
            remainder = dividend % divisor

            # If no remainder, return integer part only
            if remainder == 0:
                  return "".join(fraction)

            # Otherwise, append decimal point for fractional part
            fraction.append(".")

            # Map to record remainder positions in fraction string for detecting repeats
            map_dict = {}

            # Continue until remainder is 0 or repeat detected
            while remainder != 0:
                  # If this remainder occurred before, insert '(' at previous position and append ')'
                  if remainder in map_dict:
                        fraction.insert(map_dict[remainder], "(")
                        fraction.append(")")
                        break

                  # Record position of this remainder
                  map_dict[remainder] = len(fraction)

                  # Multiply remainder by 10 for next division digit
                  remainder *= 10

                  # Append next digit in fractional part
                  fraction.append(str(remainder // divisor))

                  # Update remainder
                  remainder %= divisor

            # Join fractional list into final result string and return
            return "".join(fraction)
