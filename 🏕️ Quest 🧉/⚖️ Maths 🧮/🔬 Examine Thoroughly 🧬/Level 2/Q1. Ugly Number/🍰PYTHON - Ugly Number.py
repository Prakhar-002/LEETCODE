#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest Maths L2 Q1

#? ⌚ Time complexity ➺ O(log n)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def isUgly(self, n: int) -> bool:
            if n < 1:
                  return False  # Ugly numbers are positive integers only

            # Divide n by 2 repeatedly while divisible
            while n % 2 == 0:
                  n //= 2

            # Divide n by 3 repeatedly while divisible
            while n % 3 == 0:
                  n //= 3

            # Divide n by 5 repeatedly while divisible
            while n % 5 == 0:
                  n //= 5

            # After removing all 2,3,5 factors, if n is 1 then it's ugly
            return n == 1

