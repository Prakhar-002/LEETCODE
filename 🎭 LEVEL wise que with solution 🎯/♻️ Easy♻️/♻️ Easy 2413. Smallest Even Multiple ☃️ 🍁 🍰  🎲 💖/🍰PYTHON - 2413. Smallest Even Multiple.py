#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2413

# ? ⌚ Time complexity ➺ O(1)

# ? 🧺 Space complexity ➺ O(1)

class Solution:
      def smallestEvenMultiple(self, n: int) -> int:
            # Check if `n` is already even (divisible by 2)
                  # If even, the smallest even multiple is the number itself
                  # If odd, the smallest even multiple is twice the number
            return n if n % 2 == 0 else n * 2
