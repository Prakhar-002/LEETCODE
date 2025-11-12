#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest Maths L2 Q2

#? ⌚ Time complexity ➺ O(k)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def smallestRepunitDivByK(self, k: int) -> int:
            # If k is divisible by 2 or 5, there is no repunit divisible by k
            if k % 2 == 0 or k % 5 == 0:
                  return -1

            r = 0  # Remainder variable to build repunits mod k

            # Try repunits of length N from 1 to k
            for N in range(1, k + 1):
                  # Update remainder: (previous remainder * 10 + 1) mod k
                  r = (r * 10 + 1) % k
                  if r == 0:
                        return N  # Found repunit divisible by k with length N
