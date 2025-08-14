//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 695

//? ⌚ Time complexity ➺ O(n * m) 

//? 🧺 Space complexity ➺ O(n * m)

class Solution {
      public int maxAreaOfIsland(int[][] grid) {
            int ROWS = grid.length, COLS = grid[0].length; // Grid dimensions
            int area = 0; // Maximum area so far

            // ----------------------------------------------------------
            // Scan entire grid and run DFS for each land cell
            // ----------------------------------------------------------
            for (int r = 0; r < ROWS; r++) {
                  for (int c = 0; c < COLS; c++) {
                        area = Math.max(area, dfs(r, c, grid, ROWS, COLS));
                  }
            }
            return area;
      }

      // ----------------------------------------------------------
      // DFS to compute area of an island starting at (r, c)
      // ----------------------------------------------------------
      private int dfs(int r, int c, int[][] grid, int ROWS, int COLS) {
            // Boundary or water check
            if (r < 0 || r >= ROWS || c < 0 || c >= COLS || grid[r][c] == 0) {
                  return 0;
            }

            grid[r][c] = 0; // Mark visited

            // Count current cell + DFS in 4 directions
            return 1 +
                        dfs(r + 1, c, grid, ROWS, COLS) +
                        dfs(r - 1, c, grid, ROWS, COLS) +
                        dfs(r, c + 1, grid, ROWS, COLS) +
                        dfs(r, c - 1, grid, ROWS, COLS);
      }
}
