//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L6.3 Q4

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

class Solution {
      public int islandPerimeter(int[][] grid) {
            int rows = grid.length;
            int cols = grid[0].length;

            // Visited matrix to ensure each land cell is processed once
            boolean[][] visited = new boolean[rows][cols];

            // DFS helper to compute perimeter contribution from cell (i, j)
            return dfsFirstLand(grid, visited, rows, cols);
      }

      private int dfsFirstLand(int[][] grid, boolean[][] visited, int rows, int cols) {
            // Find any land cell and start DFS from there
            for (int i = 0; i < rows; i++) {
                  for (int j = 0; j < cols; j++) {
                        if (grid[i][j] == 1) {
                              return dfs(i, j, grid, visited, rows, cols);
                        }
                  }
            }
            // No land at all
            return 0;
      }

      private int dfs(int i, int j, int[][] grid, boolean[][] visited, int rows, int cols) {
            // If out of bounds or on water, this edge contributes 1 to perimeter
            if (i < 0 || i >= rows || j < 0 || j >= cols || grid[i][j] == 0) {
                  return 1;
            }

            // If already visited land, no additional perimeter from here
            if (visited[i][j]) {
                  return 0;
            }

            // Mark current land cell as visited
            visited[i][j] = true;

            int perimeter = 0;
            // Explore 4 directions and accumulate perimeter contributions
            perimeter += dfs(i + 1, j, grid, visited, rows, cols); // down
            perimeter += dfs(i - 1, j, grid, visited, rows, cols); // up
            perimeter += dfs(i, j + 1, grid, visited, rows, cols); // right
            perimeter += dfs(i, j - 1, grid, visited, rows, cols); // left

            return perimeter;
      }
}
