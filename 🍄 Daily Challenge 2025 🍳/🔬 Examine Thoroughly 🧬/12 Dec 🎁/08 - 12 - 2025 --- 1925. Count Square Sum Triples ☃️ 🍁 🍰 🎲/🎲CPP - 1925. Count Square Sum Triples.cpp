//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1925

//? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <vector>
using namespace std;

class Solution {
public:
      int countTriples(int n) {
            int res = 0;

            // Try all possible pairs (a, b) where 1 ≤ a,b ≤ n
            for (int a = 1; a <= n; a++) {
                  for (int b = 1; b <= n; b++) {
                        // For Pythagorean triple: a² + b² = c²
                        long long cSquared = (long long)a * a + (long long)b * b;

                        // c = floor(sqrt(c_squared))
                        int c = (int)sqrt(cSquared);

                        // Check if (a,b,c) forms valid triple:
                        // 1. c must be ≤ n
                        // 2. c² must exactly equal a² + b² (perfect square)
                        if (c <= n && (long long)c * c == cSquared) {
                              res++;
                        }
                  }
            }

            return res;
      }
};
