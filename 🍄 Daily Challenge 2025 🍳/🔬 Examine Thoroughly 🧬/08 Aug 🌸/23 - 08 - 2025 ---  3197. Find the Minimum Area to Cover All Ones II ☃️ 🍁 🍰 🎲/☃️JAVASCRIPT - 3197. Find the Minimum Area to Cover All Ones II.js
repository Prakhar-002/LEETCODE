//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3197

//? ⌚ Time complexity ➺ O(n^2 + m^2) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n * m)

/* Area of tightest bounding rectangle of 1s in rows [u..d], cols [l..r]; large sentinel if none. */
function minimumSum2(grid, u, d, l, r) {
      const n = grid.length, m = grid[0].length;
      let minI = n, maxI = -1;
      let minJ = m, maxJ = -1;

      // Find bounding box of 1s in region.
      for (let i = u; i <= d; i++) {
            for (let j = l; j <= r; j++) {
                  if (grid[i][j] === 1) {
                        if (i < minI) minI = i;
                        if (i > maxI) maxI = i;
                        if (j < minJ) minJ = j;
                        if (j > maxJ) maxJ = j;
                  }
            }
      }
      // If seen any 1, compute inclusive area; else sentinel to penalize this split.
      if (minI !== n) {
            return (maxI - minI + 1) * (maxJ - minJ + 1);
      }
      return 1e9; // large sentinel
}

/* 90° clockwise rotation to consider symmetric partitions (vertical vs horizontal). */
function rotate(vec) {
      const n = vec.length, m = vec[0].length;
      const ret = Array.from({ length: m }, () => Array(n).fill(0));
      // (i, j) -> (j, n-1-i); filled as ret[m-1-j][i]
      for (let i = 0; i < n; i++) {
            for (let j = 0; j < m; j++) {
                  ret[m - 1 - j][i] = vec[i][j];
            }
      }
      return ret;
}

/* Enumerate all 3-rectangle partitions; sum bounding areas; keep minimum. */
function solve(grid) {
      const n = grid.length, m = grid[0].length;
      let res = n * m; // upper bound

      // One horizontal cut i and one vertical cut j (two variants).
      for (let i = 0; i + 1 < n; i++) {
            for (let j = 0; j + 1 < m; j++) {
                  // Top whole; bottom split left/right
                  res = Math.min(
                        res,
                        minimumSum2(grid, 0, i, 0, m - 1)
                        + minimumSum2(grid, i + 1, n - 1, 0, j)
                        + minimumSum2(grid, i + 1, n - 1, j + 1, m - 1)
                  );
                  // Top split left/right; bottom whole
                  res = Math.min(
                        res,
                        minimumSum2(grid, 0, i, 0, j)
                        + minimumSum2(grid, 0, i, j + 1, m - 1)
                        + minimumSum2(grid, i + 1, n - 1, 0, m - 1)
                  );
            }
      }

      // Three horizontal bands via two cuts i < j.
      for (let i = 0; i + 2 < n; i++) {
            for (let j = i + 1; j + 1 < n; j++) {
                  res = Math.min(
                        res,
                        minimumSum2(grid, 0, i, 0, m - 1)
                        + minimumSum2(grid, i + 1, j, 0, m - 1)
                        + minimumSum2(grid, j + 1, n - 1, 0, m - 1)
                  );
            }
      }
      return res;
}

/* Evaluate original and rotated grids and return the minimal sum across both orientations. */
function minimumSum(grid) {
      const rgrid = rotate(grid);
      return Math.min(solve(grid), solve(rgrid));
}
