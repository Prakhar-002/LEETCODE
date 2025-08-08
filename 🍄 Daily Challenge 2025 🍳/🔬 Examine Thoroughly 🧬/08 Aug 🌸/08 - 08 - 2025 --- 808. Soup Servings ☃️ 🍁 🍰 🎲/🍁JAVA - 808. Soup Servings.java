//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 808

//? ⌚ Time complexity ➺ O(1) 

//? 🧺 Space complexity ➺ O(1)

class Solution {

      // 2D array to store the computed probabilities for memoization
      private Double[][] dp;

      public double soupServings(int n) {

            // Optimization: when n is large (like over 5000),
            // the probability of A getting empty first is ~1.0
            // This saves computation time for large n values.
            if (n > 5000)
                  return 1.0;

            // Convert ml to "serving units" by dividing by 25
            // Ceiling because partial ml still counts as a full serve
            int m = (int) Math.ceil(n / 25.0);

            // Initialize memoization table
            dp = new Double[m + 1][m + 1];

            // Start from full servings of A and B
            return findProb(m, m);
      }

      // Recursive function with memoization to calculate probability
      private double findProb(int a, int b) {

            // Case: Both soups become empty at the same time
            if (a <= 0 && b <= 0)
                  return 0.5;

            // Case: Soup A becomes empty first
            if (a <= 0)
                  return 1.0;

            // Case: Soup B becomes empty first
            if (b <= 0)
                  return 0.0;

            // Return already computed result if available
            if (dp[a][b] != null)
                  return dp[a][b];

            // Calculate the average probability of all 4 serving options
            dp[a][b] = 0.25 * (findProb(a - 4, b) + // 100ml A, 0ml B
                        findProb(a - 3, b - 1) + // 75ml A, 25ml B
                        findProb(a - 2, b - 2) + // 50ml A, 50ml B
                        findProb(a - 1, b - 3) // 25ml A, 75ml B
            );

            return dp[a][b]; // Return the calculated result
      }
}
