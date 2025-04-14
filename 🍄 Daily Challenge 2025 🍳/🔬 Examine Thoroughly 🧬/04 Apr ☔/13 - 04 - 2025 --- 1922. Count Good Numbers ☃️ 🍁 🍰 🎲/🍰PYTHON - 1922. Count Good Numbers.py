#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1922

#? ⌚ Time complexity ➺ O(log n) 

#? 🧺 Space complexity ➺ O(1) 

class Solution:
      def countGoodNumbers(self, n: int) -> int:
            mod = 10**9 + 7  # Define modulo value for large number results

            # Fast exponentiation: computes (base^exp) % MOD
            def quick_mul(base, exp):
                  res, power = 1, base  # Initialize result and multiplier

                  # Loop until exponent exp becomes 0
                  while exp > 0:
                        if exp % 2:  # If exp is odd, multiply result by current power
                              res = res * power % mod 
                        power = power * power % mod  # Square the multiplier
                        exp //= 2  # Reduce exponent by half
                  return res 

            # Digits at even positions can be [0,2,4,6,8] → 5 choices
            # Digits at odd positions can be [2,3,5,7] → 4 choices
            return quick_mul(5, (n + 1) // 2) * quick_mul(4, n // 2) % mod
