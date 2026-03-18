//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3070

//? ⌚ Time complexity ➺ O(m * n) 👉🏻  m = len(grid), n = len(grid[0])

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int countSubmatrices(int[][] grid, int k) {
            int count = 0;
            int ROWS = grid.length;
            int COLS = grid[0].length;

            for (int i = 0; i < ROWS; i++) {
                  for (int j = 0; j < COLS; j++) {

                        // ---------- Build 2D prefix sum in-place ----------
                        // Add row above
                        if (i > 0)
                              grid[i][j] += grid[i - 1][j];

                        // Add column to the left
                        if (j > 0)
                              grid[i][j] += grid[i][j - 1];

                        // Subtract overlap counted twice (top-left diagonal)
                        if (i > 0 && j > 0)
                              grid[i][j] -= grid[i - 1][j - 1];

                        // If prefix sum exceeds k, all further cols in this
                        // row will also exceed k — break early
                        if (grid[i][j] > k)
                              break;

                        // Submatrix from (0,0) to (i,j) has sum <= k
                        count++;
                  }
            }

            return count;
      }
}