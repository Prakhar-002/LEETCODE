//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2048

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = C - n

//? 🧺 Space complexity ➺ O(1)

class Solution {
      /**
       * Finds the smallest numerically balanced number greater than a given number n.
       * 
       * A numerically balanced (or "beautiful") number is a number in which
       * each digit `d` appears exactly `d` times.
       * 
       * Examples of balanced numbers:
       *  - 22   → digit 2 appears twice
       *  - 122333 → 1 appears once, 2 appears twice, 3 appears thrice
       * 
       * The upper bound 1,224,444 ensures coverage for all balanced numbers within realistic constraints.
       */
      public int nextBeautifulNumber(int n) {
            // Check each number greater than n up to a precomputed safe upper limit
            for (int i = n + 1; i <= 1224444; ++i) {
                  if (isBalance(i)) {      // If current number is numerically balanced
                        return i;          // Return it immediately
                  }
            }
            return -1;                     // This point should not be reached within valid range
      }

      /**
       * Helper function to check if a given number 'x' is numerically balanced.
       * 
       * @param x The integer whose digits should be validated.
       * @return true if x is balanced; false otherwise.
       */
      private boolean isBalance(int x) {
            // Frequency array to store how many times each digit (0–9) appears
            int[] count = new int[10];

            // Extract each digit and update its frequency count
            while (x > 0) {
                  int digit = x % 10;
                  count[digit]++;  // Increment frequency of this digit
                  x /= 10;         // Move to next digit
            }

            // Validate each non-zero digit against the "balanced" condition
            for (int d = 0; d < 10; ++d) {
                  if (count[d] > 0 && count[d] != d) {
                        // Condition failed: digit appeared but not exactly 'd' times
                        return false;
                  }
            }

            // All digits satisfy the numeric balance condition
            return true;
      }
}
