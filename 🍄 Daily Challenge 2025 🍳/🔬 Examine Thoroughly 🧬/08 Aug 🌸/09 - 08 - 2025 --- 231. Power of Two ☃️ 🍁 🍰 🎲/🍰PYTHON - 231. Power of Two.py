#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 231

#? ⌚ Time complexity ➺ O(1)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def isPowerOfTwo(self, n: int) -> bool:
            # Check if n is positive AND if n has only one set bit
            # (n & (n - 1)) == 0 is true only for powers of two
            return n > 0 and (n & (n - 1)) == 0

#!---------------------------------------------------------------------------------------

#? ⌚ Time complexity ➺ O(log n)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def isPowerOfTwo(self, n: int) -> bool:
            # Base case: 1 is 2^0
            if n == 1:
                  return True

            # If n is <= 0 or not divisible by 2, it's not a power of two
            if n <= 0 or n % 2 != 0:
                  return False

            # Recursive step: divide by 2 and check again
            return self.isPowerOfTwo(n // 2)
