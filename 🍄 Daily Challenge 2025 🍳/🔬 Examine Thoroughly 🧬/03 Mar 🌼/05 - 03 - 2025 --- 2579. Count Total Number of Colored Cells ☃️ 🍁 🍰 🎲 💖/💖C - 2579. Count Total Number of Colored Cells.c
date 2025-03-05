//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2579

// ? ⌚ Time complexity ➺ O(1)

// ? 🧺 Space complexity ➺ O(1)

#include <stdio.h>

/*
      This function calculates the total number of colored cells
      in a growing diamond-like pattern.

      Total Cells = 1 (center) + 2 * (n - 1) * n (added border cells)
*/
long long coloredCells(int n) {
      return 1LL + (long long)n * (n - 1) * 2;  // Apply the formula to compute result
}

/*
      This follows a pattern:
      - Number of colored cells for n = 1: 1
      - Number of colored cells for n = 2: 1 + 4
      - Number of colored cells for n = 3: 1 + 4 + 8
      - Number of colored cells for n = 4: 1 + 4 + 8 + 12

      This can be rewritten using a formula for the sum:
      Total cells = 1 + 4 * (1 + 2 + 3 + ... + (n-1))
      This is the sum of first (n-1) natural numbers:
      1 + 2 + 3 + ... + (n-1) = (n-1) * n / 2

      Therefore:
      Total cells = 1 + 4 * (n-1) * n / 2
      Simplify:
      Total cells = 1 + 2 * (n-1) * n
      Which is:
      Total cells = 1 + n * (n-1) * 2
*/
