//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2435

//? ⌚ Time complexity ➺ O(r * c * k) 

//? 🧺 Space complexity ➺ O(r * c * k)

class Solution {
      int ROWS, COLS, MOD = 1000000007;
      int[][][] cache;

      public int numberOfPaths(int[][] grid, int k) {
            ROWS = grid.length;
            COLS = grid[0].length;
            cache = new int[ROWS][COLS][k];
            for (int r = 0; r < ROWS; r++) {
                  for (int c = 0; c < COLS; c++) {
                        for (int rem = 0; rem < k; rem++) {
                              cache[r][c][rem] = -1;
                        }
                  }
            }

            return dfs(grid, 0, 0, 0, k);
      }

      private int dfs(int[][] grid, int r, int c, int remain, int k) {
            if (r == ROWS || c == COLS)
                  return 0; // Boundary check

            remain = (remain + grid[r][c]) % k; // Update remainder including current cell

            if (r == ROWS - 1 && c == COLS - 1) {
                  // Check if path sum modulo k is zero at destination
                  return remain == 0 ? 1 : 0;
            }

            if (cache[r][c][remain] != -1)
                  return cache[r][c][remain];

            // Explore down and right recursively
            int down = dfs(grid, r + 1, c, remain, k) % MOD;
            int right = dfs(grid, r, c + 1, remain, k) % MOD;

            cache[r][c][remain] = (down + right) % MOD;

            return cache[r][c][remain];
      }
}
