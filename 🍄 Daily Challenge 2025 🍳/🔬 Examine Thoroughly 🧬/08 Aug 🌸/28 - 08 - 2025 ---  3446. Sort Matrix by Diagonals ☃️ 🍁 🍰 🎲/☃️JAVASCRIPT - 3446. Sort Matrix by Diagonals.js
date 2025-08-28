//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3446

//? ⌚ Time complexity ➺ O(n^2 log n) 👉🏻  n = len(grid)

//? 🧺 Space complexity ➺ O(n)

var sortMatrix = function (grid) {
      const n = grid.length; // Size of the square matrix

      // Sort bottom-left diagonals (including the main diagonal) in DESCENDING order
      for (let i = 0; i < n; i++) {
            let tmp = [];
            // Collect elements along the diagonal starting from grid[i][0]
            for (let j = 0; i + j < n; j++) {
                  tmp.push(grid[i + j][j]);
            }
            // Sort the diagonal elements in descending order
            tmp.sort((a, b) => b - a);
            // Put the sorted elements back into the grid
            for (let j = 0; i + j < n; j++) {
                  grid[i + j][j] = tmp[j];
            }
      }

      // Sort top-right diagonals (excluding the main diagonal) in ASCENDING order
      for (let j = 1; j < n; j++) {
            let tmp = [];
            // Collect elements along the diagonal starting from grid[0][j]
            for (let i = 0; j + i < n; i++) {
                  tmp.push(grid[i][j + i]);
            }
            // Sort the diagonal elements in ascending order
            tmp.sort((a, b) => a - b);
            // Put the sorted elements back into the grid
            for (let i = 0; j + i < n; i++) {
                  grid[i][j + i] = tmp[i];
            }
      }

      return grid; // Return the modified matrix after sorting diagonals
};
