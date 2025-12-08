#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1925

#? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1) 

class Solution:
      def countTriples(self, n: int) -> int:
            res = 0

            # Enumerate all possible a and b values from 1 to n
            for a in range(1, n + 1):
                  for b in range(1, n + 1):
                        # For Pythagorean triple: a² + b² = c²
                        # Compute c = sqrt(a² + b²)
                        # Use integer sqrt and verify exact square
                        c_squared = a * a + b * b
                        c = int(c_squared ** 0.5)  # Integer square root

                        # Valid triple if:
                        # 1. c <= n (within bounds)
                        # 2. c² exactly equals a² + b² (perfect square)
                        if c <= n and c * c == c_squared:
                              res += 1

            return res
