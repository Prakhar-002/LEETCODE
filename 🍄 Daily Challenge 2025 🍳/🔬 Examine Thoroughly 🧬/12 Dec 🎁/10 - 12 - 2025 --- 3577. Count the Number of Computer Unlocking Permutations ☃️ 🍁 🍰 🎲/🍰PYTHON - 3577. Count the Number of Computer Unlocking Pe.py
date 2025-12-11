#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3577

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(complexity)

#? 🧺 Space complexity ➺ O(1)

from typing import List

class Solution:
      def countPermutations(self, complexity: List[int]) -> int:
            n = len(complexity)

            # Step 1: Validate strictly increasing from complexity[0]
            # If any complexity[i] <= complexity[0], no valid permutations exist
            for i in range(1, n):
                  if complexity[i] <= complexity[0]:
                        return 0

            # Step 2: Calculate (n-1)! modulo 10^9 + 7
            # Why (n-1)!? First element fixed at position 0,
            # remaining n-1 elements can be permuted freely
            ans = 1
            MOD = 10**9 + 7

            # Compute factorial from 2 to n-1
            for i in range(2, n):
                  ans = (ans * i) % MOD

            return ans
