//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1568

//? ⌚ Time complexity ➺ O((n * m) ^ 2) 👉🏻  n = row, m = col

//? 🧺 Space complexity ➺ O(n * m)

class Solution {
      // a 2D array that represents the grid of land and water
      private int[][] grid;
      // a 2D boolean array used for marking the cells visited
      private boolean[][] visited;
      // variables that store the number of rows and columns 
      private int rows, cols;

      public int minDays(int[][] grid) {
            this.grid = grid;
            rows = grid.length;
            cols = grid[0].length;

            
            // if count_islands() != 1
            // If there are initially no valid islands or already more than one island
            if (countIslands() != 1)
                  // return `0` because no split is needed or it’s already split
                  return 0;

            // Loop through every cell
            for (int row = 0; row < rows; row++) {
                  for (int col = 0; col < cols; col++) {
                        if (grid[row][col] == 1) {
                              // Temporarily set a land cell (`1`) to water (`0`)
                              grid[row][col] = 0;
                              // recount the islands if we get != 1
                              // If changing this one cell results in more than one island
                              if (countIslands() != 1)
                                    // return `1` because it's possible to split the island in a single day
                                    return 1;
                              // Reset the cell back to land after the check 
                              grid[row][col] = 1;
                        }
                  }
            }

            // If no single cell change results in multiple islands
            // return `2` indicating it takes at least two days
            return 2;
      }

      // method counts the total number of distinct islands in the grid
      private int countIslands() {
            // visited matrix to track which cells have been visited
            visited = new boolean[rows][cols];
            int islands = 0;
            for (int row = 0; row < rows; row++) {
                  for (int col = 0; col < cols; col++) {
                        //  If a cell `(row, col)` is a `1` and not seen
                        if (grid[row][col] == 1 && !visited[row][col]) {
                              // Perform a DFS from cell to mark all connected `1`s
                              dfs(row, col);
                              // it’s a new island
                              islands++;
                        }
                  }
            }
            return islands;
      }

      // recursive method used to perform depth-first search
      private void dfs(int row, int col) {
            // first checks if the current cell is out of bounds
            if (
                  row < 0 
                  || row >= rows 
                  || col < 0 
                  || col >= cols 
                  // is water
                  || grid[row][col] == 0 
                  //  already visited
                  || visited[row][col])
                  return;

            // otherwise marks the current cell as visited
            visited[row][col] = true;
            // recursively calls itself for the four possible directions
            dfs(row - 1, col);
            dfs(row + 1, col);
            dfs(row, col - 1);
            dfs(row, col + 1);
      }

      //  `0` if multiple islands already exist or no land is present
      //  `1` if altering a single land cell can separate the grid into multiple islands
      //  `2` if more complex alterations are required (e.g., changing more than one cell).
}
