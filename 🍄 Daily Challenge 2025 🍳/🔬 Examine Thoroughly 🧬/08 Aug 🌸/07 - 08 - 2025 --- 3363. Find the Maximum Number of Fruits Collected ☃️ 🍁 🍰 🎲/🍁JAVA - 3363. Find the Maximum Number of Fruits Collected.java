//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3363

//? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

class Solution {
      public int maxCollectedFruits(int[][] fruits) {
            int n = fruits.length;

            // Step 1: Collect all diagonal fruits (i == j)
            int ans = 0;
            for (int i = 0; i < n; i++) {
                  ans += fruits[i][i];
            }

            // Step 2: Do DP traversal from top-right to bottom (first pass)
            ans += dp(fruits, n);

            // Step 3: Transpose the matrix to simulate the other direction
            for (int i = 0; i < n; i++) {
                  for (int j = 0; j < i; j++) {
                        // Swap fruits[i][j] with fruits[j][i] to transpose
                        int temp = fruits[i][j];
                        fruits[i][j] = fruits[j][i];
                        fruits[j][i] = temp;
                  }
            }

            // Step 4: Do another DP traversal on the transposed matrix (second pass)
            ans += dp(fruits, n);

            // Return the total fruits collected
            return ans;
      }

      // Helper DP method to find max fruit path from top-right corner
      private int dp(int[][] fruits, int n) {
            int[] prev = new int[n]; // Previous row's max values
            int[] curr = new int[n]; // Current row's values

            // Initialize all with negative infinity for max comparison
            Arrays.fill(prev, Integer.MIN_VALUE);
            Arrays.fill(curr, Integer.MIN_VALUE);

            // Start from top-right corner
            prev[n - 1] = fruits[0][n - 1];

            // Traverse each row from 1 to n-2
            for (int i = 1; i < n - 1; i++) {
                  // Traverse valid columns for the current row
                  for (int j = Math.max(n - 1 - i, i + 1); j < n; j++) {
                        int best = prev[j]; // Coming straight from top
                        if (j - 1 >= 0)
                              best = Math.max(best, prev[j - 1]); // From left-diagonal
                        if (j + 1 < n)
                              best = Math.max(best, prev[j + 1]); // From right-diagonal

                        // Add current cell's fruit to the best path
                        curr[j] = best + fruits[i][j];
                  }

                  // Swap current and previous for the next iteration
                  int[] temp = prev;
                  prev = curr;
                  curr = temp;
            }

            // Final value is at bottom-right of the column (last column)
            return prev[n - 1];
      }
}
