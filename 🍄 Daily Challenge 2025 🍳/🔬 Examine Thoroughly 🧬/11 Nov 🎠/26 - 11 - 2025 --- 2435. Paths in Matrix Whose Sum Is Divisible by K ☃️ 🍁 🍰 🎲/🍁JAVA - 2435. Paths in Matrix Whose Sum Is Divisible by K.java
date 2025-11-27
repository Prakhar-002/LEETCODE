//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2435

//? ⌚ Time complexity ➺ O(r * c * k) 

//? 🧺 Space complexity ➺ O(r * c * k)

class Solution {
      int ROWS, COLS, MOD = 1000000007;
      int[][][] cache;  // 3D cache to memoize results based on row, col, remainder

      public int numberOfPaths(int[][] grid, int k) {
            ROWS = grid.length;          // Number of rows in the grid
            COLS = grid[0].length;       // Number of columns in the grid

            // Initialize the 3D cache with -1, indicating uncomputed states
            cache = new int[ROWS][COLS][k];
            for (int r = 0; r < ROWS; r++) {
                  for (int c = 0; c < COLS; c++) {
                        for (int rem = 0; rem < k; rem++) {
                              cache[r][c][rem] = -1;
                        }
                  }
            }
            // Start depth-first search from top-left (0, 0) with initial remainder 0
            return dfs(grid, 0, 0, 0, k);
      }

      private int dfs(int[][] grid, int r, int c, int remain, int k) {
            // If out of grid bounds, no valid path exists
            if (r == ROWS || c == COLS) return 0;

            // Update remainder by adding current cell's value modulo k
            remain = (remain + grid[r][c]) % k;

            // If reached the bottom-right cell, check if current path sum is divisible by k
            if (r == ROWS - 1 && c == COLS - 1) {
                  return remain == 0 ? 1 : 0;
            }

            // Return cached result if this state was computed before
            if (cache[r][c][remain] != -1) return cache[r][c][remain];

            // Recursively explore moving down and right from current cell
            int down = dfs(grid, r + 1, c, remain, k) % MOD;
            int right = dfs(grid, r, c + 1, remain, k) % MOD;

            // Cache the total number of valid paths from current state, mod MOD
            cache[r][c][remain] = (down + right) % MOD;

            return cache[r][c][remain];
      }
}
