//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3197

//? ⌚ Time complexity ➺ O(n^2 + m^2) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n * m)

class Solution {
      // Compute area of the tightest bounding rectangle covering all 1s
      // inside the submatrix rows [u..d] and cols [l..r].
      // If no 1 exists there, return a large sentinel to penalize this split.
      private int minimumSum2(int[][] grid, int u, int d, int l, int r) {
            int min_i = grid.length, max_i = 0; // row bounds of 1s
            int min_j = grid[0].length, max_j = 0; // col bounds of 1s

            // Scan region to find bounding box of 1s.
            for (int i = u; i <= d; i++) {
                  for (int j = l; j <= r; j++) {
                        if (grid[i][j] == 1) {
                              min_i = Math.min(min_i, i);
                              min_j = Math.min(min_j, j);
                              max_i = Math.max(max_i, i);
                              max_j = Math.max(max_j, j);
                        }
                  }
            }

            // If at least one 1 seen, compute inclusive area; else return sentinel.
            return min_i <= max_i
                        ? (max_i - min_i + 1) * (max_j - min_j + 1)
                        : Integer.MAX_VALUE / 3; // safe to sum without overflow
      }

      // Rotate matrix 90° clockwise to consider symmetric partitions
      // (horizontal-first vs vertical-first).
      private int[][] rotate(int[][] vec) {
            int n = vec.length, m = vec[0].length;
            int[][] ret = new int[m][n];
            // Mapping: (i,j) -> (j, n-1-i); filled as ret[m - 1 - j][i].
            for (int i = 0; i < n; i++) {
                  for (int j = 0; j < m; j++) {
                        ret[m - j - 1][i] = vec[i][j];
                  }
            }
            return ret;
      }

      // Try all 3-rectangle splits:
      // - One band + two blocks (top whole & bottom split; or top split & bottom
      // whole).
      // - Three horizontal bands (two horizontal cuts).
      // Sum bounding areas and minimize across all splits.
      private int solve(int[][] grid) {
            int n = grid.length, m = grid[0].length;
            int res = n * m; // upper bound

            // One horizontal cut i, one vertical cut j (two variants).
            for (int i = 0; i + 1 < n; i++) {
                  for (int j = 0; j + 1 < m; j++) {
                        // Top whole; bottom split (left/right)
                        res = Math.min(
                                    res,
                                    minimumSum2(grid, 0, i, 0, m - 1)
                                                + minimumSum2(grid, i + 1, n - 1, 0, j)
                                                + minimumSum2(grid, i + 1, n - 1, j + 1, m - 1));
                        // Top split (left/right); bottom whole
                        res = Math.min(
                                    res,
                                    minimumSum2(grid, 0, i, 0, j)
                                                + minimumSum2(grid, 0, i, j + 1, m - 1)
                                                + minimumSum2(grid, i + 1, n - 1, 0, m - 1));
                  }
            }

            // Three horizontal bands via two cuts i < j.
            for (int i = 0; i + 2 < n; i++) {
                  for (int j = i + 1; j + 1 < n; j++) {
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

      // Evaluate original and rotated grid to cover both partition orientations;
      // return minimum.
      public int minimumSum(int[][] grid) {
            int[][] rgrid = rotate(grid);
            return Math.min(solve(grid), solve(rgrid));
      }
}
