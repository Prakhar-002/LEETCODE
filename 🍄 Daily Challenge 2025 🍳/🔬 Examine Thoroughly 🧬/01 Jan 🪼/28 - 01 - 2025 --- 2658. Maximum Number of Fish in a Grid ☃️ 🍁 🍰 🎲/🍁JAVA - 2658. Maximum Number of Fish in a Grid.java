//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2658

//? ⌚ Time complexity ➺ O(n * m) 👉🏻  n = No. of Rows

//? 🧺 Space complexity ➺ O(n * m)   ->  m = No. of Cols

class Solution {
      public int findMaxFish(int[][] grid) {
            int ROWS = grid.length;
            int COLS = grid[0].length;
            boolean[][] visited = new boolean[ROWS][COLS];
            int maxFishCount = 0;

            // Iterate over each cell in the grid
            for (int r = 0; r < ROWS; r++) {
                  for (int c = 0; c < COLS; c++) {
                        // If the cell contains fish and is not yet visited, perform DFS
                        if (grid[r][c] > 0 && !visited[r][c]) {
                              maxFishCount = Math.max(maxFishCount, dfs(r, c, grid, visited, ROWS, COLS));
                        }
                  }
            }

            return maxFishCount;
      }

      // Separate DFS function
      private int dfs(int r, int c, int[][] grid, boolean[][] visited, int ROWS, int COLS) {
            // Base case: out of bounds, water, or already visited
            if (r < 0 || c < 0 || r >= ROWS || c >= COLS || grid[r][c] == 0 || visited[r][c]) {
                  return 0;
            }

            // Mark the current cell as visited
            visited[r][c] = true;

            // Start counting fish from the current cell
            return grid[r][c] 
                  // Explore all four neighbors (up, down, left, right)
                  + dfs(r + 1, c, grid, visited, ROWS, COLS)
                  + dfs(r - 1, c, grid, visited, ROWS, COLS)
                  + dfs(r, c + 1, grid, visited, ROWS, COLS)
                  + dfs(r, c - 1, grid, visited, ROWS, COLS);
      }
}
