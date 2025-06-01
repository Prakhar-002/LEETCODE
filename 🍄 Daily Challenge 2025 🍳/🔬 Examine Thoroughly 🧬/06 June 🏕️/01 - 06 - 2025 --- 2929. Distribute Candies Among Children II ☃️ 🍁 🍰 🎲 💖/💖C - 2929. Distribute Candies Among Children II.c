//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2929

// ? ⌚ Time complexity ➺ O(n) 

// ? 🧺 Space complexity ➺ O(1)

#include <stdio.h>

int max(int a, int b) {
      return a > b ? a : b;
}

int min(int a, int b) {
      return a < b ? a : b;
}

long long distributeCandies(int n, int limit) {
      long long ways = 0;                                                   // Initialize valid ways counter

      for (int i = 0; i <= min(limit, n); i++) {                            // i = candies to child A

            if (n - i > 2 * limit) continue;                                // Skip if remaining exceeds what B + C can take

            int minVal = max(0, n - i - limit);                             // Minimum B must take
            int maxVal = min(n - i, limit);                                 // Maximum B can take

            ways += (long long)(maxVal - minVal + 1);                       // Add valid (B, C) pair count
      }

      return ways;                                                          // Return total number of ways
}

//-----------------------------------------------------------------------------------

// ? ⌚ Time complexity ➺ O(1)

// ? 🧺 Space complexity ➺ O(1)

long long cal(int x) {
      if (x < 0) {
            return 0;                                                      // If x is negative, no valid combinations
      }

      return (long long)x * (x - 1) / 2;                                   // Returns C(x, 2) = x * (x - 1) / 2
}

long long distributeCandies(int n, int limit) {
      // Using inclusion-exclusion:
      // Total ways without limit - subtract over-limited cases using cal()
      return cal(n + 2)                                // Total solutions to a + b + c = n (no upper bound)
             - 3 * cal(n - limit + 1)                  // Subtract cases where one variable exceeds limit
             + 3 * cal(n - 2 * (limit + 1) + 2)        // Add back cases where two variables exceed limit
             - cal(n - 3 * (limit + 1) + 2);           // Subtract over-counted cases where all three exceed
}
