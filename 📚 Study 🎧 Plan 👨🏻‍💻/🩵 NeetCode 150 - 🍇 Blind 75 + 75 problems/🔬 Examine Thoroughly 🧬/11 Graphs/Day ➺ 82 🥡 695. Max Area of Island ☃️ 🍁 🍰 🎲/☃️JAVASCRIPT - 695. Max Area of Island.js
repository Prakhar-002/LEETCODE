//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 695

//? ⌚ Time complexity ➺ O(n * m) 

//? 🧺 Space complexity ➺ O(n * m)

var maxAreaOfIsland = function (grid) {
      const ROWS = grid.length, COLS = grid[0].length; // Grid dimensions
      let area = 0; // Maximum area so far

      // ----------------------------------------------------------
      // DFS function to compute area of an island starting at (r, c)
      // ----------------------------------------------------------
      function dfs(r, c) {
            // Boundary or water check
            if (r < 0 || r >= ROWS || c < 0 || c >= COLS || grid[r][c] === 0) {
                  return 0;
            }

            grid[r][c] = 0; // Mark visited

            // Count this cell + DFS in 4 directions
            return 1 +
                  dfs(r + 1, c) +
                  dfs(r - 1, c) +
                  dfs(r, c + 1) +
                  dfs(r, c - 1);
      }

      // ----------------------------------------------------------
      // Scan entire grid and run DFS for each unvisited land cell
      // ----------------------------------------------------------
      for (let r = 0; r < ROWS; r++) {
            for (let c = 0; c < COLS; c++) {
                  area = Math.max(area, dfs(r, c));
            }
      }

      return area;
};
