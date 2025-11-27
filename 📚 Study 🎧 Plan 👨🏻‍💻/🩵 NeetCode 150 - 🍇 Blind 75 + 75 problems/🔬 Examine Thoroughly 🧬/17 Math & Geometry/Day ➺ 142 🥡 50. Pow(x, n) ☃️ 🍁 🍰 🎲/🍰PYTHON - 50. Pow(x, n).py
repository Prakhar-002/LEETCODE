#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 202

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def myPow(self, x: float, n: int) -> float:
            # Handle negative exponents by taking absolute value first
            def pow(x: float, n: int) -> float:
                  # Base case: any number to power 0 is 1
                  if n == 0:
                        return 1.0

                  # Base case: 0 to any positive power is 0
                  if x == 0:
                        return 0.0

                  # Recursive case: compute power for n/2
                  res = pow(x, n // 2)

                  # If n even: x^n = (x^(n/2))^2
                  # If n odd: x^n = (x^(n/2))^2 * x
                  if n % 2 == 0:
                        return res * res
                  else:
                        return res * res * x

            # Calculate absolute power, then handle negative exponent
            result = pow(x, abs(n))
            return result if n >= 0 else 1.0 / result
