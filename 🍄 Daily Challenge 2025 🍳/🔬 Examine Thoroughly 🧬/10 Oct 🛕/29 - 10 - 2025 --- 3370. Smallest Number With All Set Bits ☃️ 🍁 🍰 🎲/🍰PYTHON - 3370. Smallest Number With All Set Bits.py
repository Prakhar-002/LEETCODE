#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3370

#? ⌚ Time complexity ➺ O(log n)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def smallestNumber(self, n: int) -> int:
            k = 0
            # Increment k until (2^k - 1) is at least n
            while (1 << k) - 1 < n:
                  k += 1

            # Return the smallest number with all bits set (2^k - 1) ≥ n
            return (1 << k) - 1
