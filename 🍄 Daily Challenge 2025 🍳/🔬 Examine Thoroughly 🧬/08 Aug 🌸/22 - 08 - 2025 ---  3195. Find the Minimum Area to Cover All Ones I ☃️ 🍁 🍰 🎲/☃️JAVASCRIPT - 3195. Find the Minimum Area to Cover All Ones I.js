//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3195

//? ⌚ Time complexity ➺ O(n * m) 👉🏻  n = ROWS

//? 🧺 Space complexity ➺ O(1)  -> m = COLS

var minimumArea = function (grid) {
      const n = grid.length, m = grid[0].length;
      // Track bounding rectangle of all '1' cells.
      let minRow = n, maxRow = 0;
      let minCol = m, maxCol = 0;

      // Scan all cells to update bounds when we see a '1'.
      for (let r = 0; r < n; r++) {
            for (let c = 0; c < m; c++) {
                  if (grid[r][c] === 1) {
                        if (r < minRow) minRow = r;
                        if (r > maxRow) maxRow = r;
                        if (c < minCol) minCol = c;
                        if (c > maxCol) maxCol = c;
                  }
            }
      }

      // Compute area of the bounding rectangle (inclusive indices).
      return (maxRow - minRow + 1) * (maxCol - minCol + 1);
};
