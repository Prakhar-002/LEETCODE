#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest Maths L4 Q2

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def trailingZeroes(self, n: int) -> int:
            zeroes = 0           # Initialize count of trailing zeros
            z = 5                 # Start with the first power of 5

            # Keep dividing n by increasing powers of 5 to count factors of 5
            while n // z > 0:
                  zeroes += n // z  # Count how many multiples of current power of 5
                  z *= 5             # Go to next power of 5

            return zeroes         # Return total count of trailing zeros
