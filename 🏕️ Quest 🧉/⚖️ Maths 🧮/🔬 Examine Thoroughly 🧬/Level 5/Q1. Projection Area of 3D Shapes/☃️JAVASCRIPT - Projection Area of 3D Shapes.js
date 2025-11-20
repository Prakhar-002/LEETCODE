//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest Maths L5 Q1

//? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

function projectionArea(grid) {
      let res = 0; // Total projection area
      const n = grid.length;

      for (let i = 0; i < n; i++) {
            let maxRow = 0; // Max height in current row
            let maxCol = 0; // Max height in current column

            for (let j = 0; j < n; j++) {
                  // Count non-zero cells for XY projection
                  if (grid[i][j] > 0) {
                        res++;
                  }
                  // Track maximum in row i
                  maxRow = Math.max(maxRow, grid[i][j]);
                  // Track maximum in column i
                  maxCol = Math.max(maxCol, grid[j][i]);
            }

            // Add the maximum heights of row and column projections
            res += maxRow + maxCol;
      }
      return res; // Total area of projections
}
