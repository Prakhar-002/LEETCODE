#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1611

#? ⌚ Time complexity ➺ O(log n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def minimumOneBitOperations(self, n: int) -> int:
            # Base case: if n is zero, no operations are needed
            if n == 0:
                  return 0

            # Find index of highest set bit (0-based)
            k = n.bit_length() - 1

            # Recursive step:
            # The number (1 << (k + 1)) - 1 represents a sequence of ones 
            # with length k+1 (e.g. for k=2, it is binary 111)
            # Subtract the recursive call on n XOR (1 << k), which removes the highest bit,
            # reducing the problem size step-by-step
            return (1 << (k + 1)) - 1 - self.minimumOneBitOperations((1 << k) ^ n)
