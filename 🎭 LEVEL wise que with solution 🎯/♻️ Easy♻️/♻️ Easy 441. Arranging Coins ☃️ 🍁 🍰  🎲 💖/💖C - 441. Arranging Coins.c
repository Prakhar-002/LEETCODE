//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 441

//? ⌚ Time complexity ➺ O(1)

//? 🧺 Space complexity ➺ O(1)

#include <math.h>

int arrangeCoins(int n) {
      // building a staircase with coins will be like
      // 1, 2, 3, 4, ... k 
      // 1 + 2 + 3 + 4 ... k <= n = k(k - 1)/2
      // k^2 + k - 2n <= 0
      // k = -1/2 + sqrt(1/4 + 2n)
      return (int)(sqrt(2.0 * n + 0.25) - 0.5);
}
