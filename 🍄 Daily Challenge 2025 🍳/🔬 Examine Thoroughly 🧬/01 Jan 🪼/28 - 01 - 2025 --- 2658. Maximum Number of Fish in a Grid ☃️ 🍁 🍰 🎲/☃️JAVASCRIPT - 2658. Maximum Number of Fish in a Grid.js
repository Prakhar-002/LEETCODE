//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2658

//? ⌚ Time complexity ➺ O(n * m) 👉🏻  n = No. of Rows

//? 🧺 Space complexity ➺ O(n * m)   ->  m = No. of Cols

var findMaxFish = function (grid) {
      const ROWS = grid.length;
      const COLS = grid[0].length;
      const visited = Array.from({ length: ROWS }, () => Array(COLS).fill(false));
      let maxFishCount = 0;

      // DFS helper function to explore connected cells
      const dfs = (r, c) => {
            // Base case: out of bounds, water, or already visited
            if (r < 0 || c < 0 || r >= ROWS || c >= COLS || grid[r][c] === 0 || visited[r][c]) {
                  return 0;
            }

            // Mark the current cell as visited
            visited[r][c] = true;

            return (grid[r][c]
                  + dfs(r + 1, c)
                  + dfs(r - 1, c)
                  + dfs(r, c + 1)
                  + dfs(r, c - 1)
            );
      };

      // Iterate over each cell in the grid
      for (let r = 0; r < ROWS; r++) {
            for (let c = 0; c < COLS; c++) {
                  // If the cell contains fish and is not yet visited, perform DFS
                  if (grid[r][c] > 0 && !visited[r][c]) {
                        maxFishCount = Math.max(maxFishCount, dfs(r, c));
                  }
            }
      }

      return maxFishCount;
}
