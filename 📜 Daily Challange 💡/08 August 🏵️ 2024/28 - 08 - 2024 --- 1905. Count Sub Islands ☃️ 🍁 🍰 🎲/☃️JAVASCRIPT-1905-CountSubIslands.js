//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1905

//? ⌚ Time complexity ➺ O(m * n) 👉🏻  m is the number of rows and n is the number of columns

//? 🧺 Space complexity ➺ O(1)

function countSubIslands(grid1, grid2) {
      const m = grid1.length; // Number of rows in the grid
      const n = grid1[0].length; // Number of columns in the grid
      let subIslandCount = 0; // To store the count of sub-islands
      let isSubIsland = false; // Flag to track if the current island in grid2 is a sub-island of grid1

      // Depth-First Search (DFS) to explore the island in grid2
      function dfs(i, j) {
            // If the current position is out of bounds or already visited (grid2[i][j] == 0), return
            if (i < 0 || i === m || j < 0 || j === n || grid2[i][j] === 0) {
                  return;
            }

            // If the current cell in grid2 is land but not in grid1, mark this island as not a sub-island
            if (grid1[i][j] !== grid2[i][j]) {
                  isSubIsland = false;
            }

            // Mark the current cell as visited by setting grid2[i][j] to 0
            grid2[i][j] = 0;

            // Continue the DFS in all four directions
            dfs(i + 1, j); // Down
            dfs(i - 1, j); // Up
            dfs(i, j + 1); // Right
            dfs(i, j - 1); // Left
      }

      // Iterate through each cell in grid2
      for (let i = 0; i < m; i++) {
            for (let j = 0; j < n; j++) {
                  // If the cell is land in grid2, it could be part of a sub-island
                  if (grid2[i][j] === 1) {
                        isSubIsland = true; // Start assuming this is a sub-island
                        dfs(i, j); // Perform DFS to check the whole island
                        // If the flag remains true after DFS, it means this island is a sub-island
                        if (isSubIsland) {
                              subIslandCount++; // Increment the count of sub-islands
                        }
                  }
            }
      }

      return subIslandCount; // Return the total count of sub-islands
}


