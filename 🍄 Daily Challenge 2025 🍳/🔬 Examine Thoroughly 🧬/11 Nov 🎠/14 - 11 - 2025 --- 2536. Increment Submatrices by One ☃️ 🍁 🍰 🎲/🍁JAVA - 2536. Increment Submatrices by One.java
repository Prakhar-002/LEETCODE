// ! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2536

// ? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻 n = len(nums)

// ? 🧺 Space complexity ➺ O(n ^ 2)

import java.util.*;

class Solution {
      public int[][] rangeAddQueries(int n, int[][] queries) {
            // Initialize a difference matrix with an extra row and column for ease of update
            int[][] diff = new int[n + 1][n + 1];

            // Apply 2D difference array technique to mark range increments quickly
            for (int[] q : queries) {
                  int row1 = q[0], col1 = q[1], row2 = q[2], col2 = q[3];
                  diff[row1][col1] += 1;            // Start increment at top-left corner
                  diff[row2 + 1][col1] -= 1;        // Cancel increment after bottom edge
                  diff[row1][col2 + 1] -= 1;        // Cancel increment after right edge
                  diff[row2 + 1][col2 + 1] += 1;    // Restore increment at bottom-right overlapping region
            }

            int[][] mat = new int[n][n];

            // Build the final matrix using prefix sums and inclusion-exclusion principle
            for (int i = 0; i < n; i++) {
                  for (int j = 0; j < n; j++) {
                        int x1 = (i == 0) ? 0 : mat[i - 1][j];
                        int x2 = (j == 0) ? 0 : mat[i][j - 1];
                        int x3 = (i == 0 || j == 0) ? 0 : mat[i - 1][j - 1];

                        mat[i][j] = diff[i][j] + x1 + x2 - x3;
                  }
            }

            return mat;  // Return the resultant matrix after all range additions
      }
}
