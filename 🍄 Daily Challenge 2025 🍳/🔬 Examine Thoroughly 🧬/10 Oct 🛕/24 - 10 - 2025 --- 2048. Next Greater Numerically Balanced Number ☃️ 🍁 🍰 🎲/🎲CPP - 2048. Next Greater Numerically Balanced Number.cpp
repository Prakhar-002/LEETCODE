//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2048

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = C - n

//? 🧺 Space complexity ➺ O(1)

#include <vector>
using namespace std;

class Solution {
public:
      /**
       * Determines if a given number 'x' is numerically balanced.
       * A numerically balanced (or beautiful) number is one where each digit `d` appears exactly `d` times.
       * For example:
       *   - 22 → digit 2 appears twice ✔️
       *   - 122333 → 1 appears once, 2 appears twice, 3 appears thrice ✔️
       *   - 122 → fails because 2 appears twice but 1 appears once → invalid ❌
       *
       * @param x Input number to check.
       * @return true if 'x' is numerically balanced; false otherwise.
       */
      bool isBalance(int x) {
            vector<int> count(10, 0); // Frequency of digits 0–9 (index = digit, value = frequency)

            // Extract digits one by one and increment their counts
            while (x > 0) {
                  int digit = x % 10; // Get the last digit
                  count[digit]++;     // Increase its frequency
                  x /= 10;            // Remove last digit from number
            }

            // Check the numerical balance condition:
            // For every digit 'd' that appears (count[d] > 0),
            // it must appear *exactly d times*.
            for (int d = 0; d < 10; ++d) {
                  if (count[d] > 0 && count[d] != d) {
                        return false; // If any digit fails condition → not balanced
                  }
            }

            return true; // All digits satisfy balanced property
      }

      /**
       * Finds the smallest numerically balanced number strictly greater than 'n'.
       * The search is limited to range [n+1, 1,224,444] to ensure all valid numbers are checked.
       *
       * @param n Starting number
       * @return The next greater numerically balanced number, or -1 if none (theoretically unreachable)
       */
      int nextBeautifulNumber(int n) {
            // Loop from n+1 upward until a balanced number is found.
            for (int i = n + 1; i <= 1224444; ++i) {
                  if (isBalance(i)) {               // Check if current candidate is balanced
                        return i; // Return immediately when found
                  }
            }

            // Should never reach here under valid constraints
            return -1;
      }
};
