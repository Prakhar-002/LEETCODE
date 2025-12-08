//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1925

//? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int countTriples(int n) {
            int res = 0;

            // Enumerate all possible a and b from 1 to n
            for (int a = 1; a <= n; a++) {
                  for (int b = 1; b <= n; b++) {
                        // Pythagorean triple: a² + b² = c²
                        // Compute c_squared = a² + b²
                        long cSquared = (long) a * a + (long) b * b;

                        // c = floor(sqrt(c_squared))
                        int c = (int) Math.sqrt(cSquared);

                        // Valid triple requires:
                        // 1. c <= n (within bounds)
                        // 2. c² exactly equals a² + b² (perfect square)
                        if (c <= n && c * c == cSquared) {
                              res++;
                        }
                  }
            }

            return res;
      }
}
