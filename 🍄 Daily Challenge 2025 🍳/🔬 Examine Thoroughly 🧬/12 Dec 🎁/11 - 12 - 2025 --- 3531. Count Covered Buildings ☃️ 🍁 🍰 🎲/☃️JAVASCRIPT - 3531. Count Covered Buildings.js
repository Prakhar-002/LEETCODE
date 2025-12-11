//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3531

//? ⌚ Time complexity ➺ O(m) 👉🏻  n = len(buildings)

//? 🧺 Space complexity ➺ O(n)

var countCoveredBuildings = function (n, buildings) {
      // Row-wise min/max x-coordinates
      const maxRow = new Array(n + 1).fill(0);
      const minRow = new Array(n + 1).fill(n + 1);

      // Column-wise min/max y-coordinates
      const maxCol = new Array(n + 1).fill(0);
      const minCol = new Array(n + 1).fill(n + 1);

      // Step 1: Compute bounding boxes per row/column
      for (const [x, y] of buildings) {
            maxRow[y] = Math.max(maxRow[y], x);
            minRow[y] = Math.min(minRow[y], x);

            maxCol[x] = Math.max(maxCol[x], y);
            minCol[x] = Math.min(minCol[x], y);
      }

      let count = 0;
      // Step 2: Check each building for coverage
      for (const [x, y] of buildings) {
            // Covered if not on the boundary of row/column range
            if (x > minRow[y] && x < maxRow[y] &&
                  y > minCol[x] && y < maxCol[x]) {
                  count++;
            }
      }

      return count;
};
