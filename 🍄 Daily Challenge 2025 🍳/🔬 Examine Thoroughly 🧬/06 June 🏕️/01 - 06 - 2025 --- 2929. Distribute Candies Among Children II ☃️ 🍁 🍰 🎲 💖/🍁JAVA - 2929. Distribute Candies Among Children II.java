//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2929

// ? ⌚ Time complexity ➺ O(n) 

// ? 🧺 Space complexity ➺ O(1)

class Solution {
      public long distributeCandies(int n, int limit) {
            long ways = 0; // Initialize total number of valid distributions

            for (int i = 0; i <= Math.min(limit, n); i++) { // i is candies given to first child (A)

                  if (n - i > 2 * limit) { // If remaining for B+C exceeds 2 * limit, skip
                        continue;
                  }

                  int minVal = Math.max(0, n - i - limit); // Minimum B can take (so that C ≤ limit)
                  int maxVal = Math.min(n - i, limit); // Maximum B can take within remaining and limit

                  ways += (long) (maxVal - minVal + 1); // Add all valid (B, C) combinations for A = i
            }

            return ways; // Return total valid combinations
      }
}
