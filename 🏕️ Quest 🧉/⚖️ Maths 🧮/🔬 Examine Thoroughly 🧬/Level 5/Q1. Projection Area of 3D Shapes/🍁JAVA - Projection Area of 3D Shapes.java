//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest Maths L5 Q1

//? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int projectionArea(int[][] grid) {
            int res = 0; // Initialize result to store total projection area
            int n = grid.length; // Grid is an n x n matrix

            // Iterate over each row and column
            for (int i = 0; i < n; ++i) {
                  int x = 0; // To track max height in the current row (x-axis projection)
                  int y = 0; // To track max height in the current column (y-axis projection)

                  for (int j = 0; j < n; ++j) {
                        // Update max height for row i
                        x = Math.max(x, grid[i][j]);
                        // Update max height for column i
                        y = Math.max(y, grid[j][i]);
                        // Add 1 to res for every non-zero height block (z-axis/top projection)
                        if (grid[i][j] > 0)
                              res++;
                  }

                  // Add the max height of row i and column i to res
                  res += x + y;
            }

            // Return the sum of all projection areas on xy, yz, and zx planes
            return res;
      }
}
