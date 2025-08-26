//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3197

//? ⌚ Time complexity ➺ O(n^2 + m^2) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n * m)

#include <vector>
#include <climits>
using namespace std;

class Solution {
private:
      // Area of the tightest bounding rectangle for all 1s in [u..d] x [l..r].
      // If none, return large sentinel.
      int minimumSum2(const vector<vector<int>>& grid, int u, int d, int l, int r) {
            int n = grid.size(), m = grid[0].size();
            int min_i = n, max_i = 0;   // row bounds of 1s
            int min_j = m, max_j = 0;   // col bounds of 1s

            // Scan target submatrix to find bounding box of 1s.
            for (int i = u; i <= d; ++i) {
                  for (int j = l; j <= r; ++j) {
                        if (grid[i][j] == 1) {
                              if (i < min_i) min_i = i;
                              if (j < min_j) min_j = j;
                              if (i > max_i) max_i = i;
                              if (j > max_j) max_j = j;
                        }
                  }
            }

            // If at least one 1, compute area using inclusive indices; else sentinel.
            if (min_i <= max_i) {
                  return (max_i - min_i + 1) * (max_j - min_j + 1);
            } else {
                  return INT_MAX / 3;
            }
      }

      // 90° clockwise rotation: produce new matrix to consider symmetric partitions.
      vector<vector<int>> rotate(const vector<vector<int>>& vec) {
            int n = vec.size(), m = vec[0].size();
            vector<vector<int>> ret(m, vector<int>(n));
            // (i, j) -> (j, n-1-i), filled as ret[m-1-j][i].
            for (int i = 0; i < n; ++i) {
                  for (int j = 0; j < m; ++j) {
                        ret[m - 1 - j][i] = vec[i][j];
                  }
            }
            return ret;
      }

      // Enumerate all 3-rectangle partitions (two patterns + three horizontal bands),
      // sum the bounding-rectangle areas, and keep the minimum.
      int solve(const vector<vector<int>>& grid) {
            int n = grid.size(), m = grid[0].size();
            int res = n * m;

            // One horizontal cut i and one vertical cut j (two variants).
            for (int i = 0; i + 1 < n; ++i) {
                  for (int j = 0; j + 1 < m; ++j) {
                        // Top whole; bottom split left/right
                        res = min(res,
                                    minimumSum2(grid, 0, i, 0, m - 1)
                                    + minimumSum2(grid, i + 1, n - 1, 0, j)
                                    + minimumSum2(grid, i + 1, n - 1, j + 1, m - 1));
                        // Top split left/right; bottom whole
                        res = min(res,
                                    minimumSum2(grid, 0, i, 0, j)
                                    + minimumSum2(grid, 0, i, j + 1, m - 1)
                                    + minimumSum2(grid, i + 1, n - 1, 0, m - 1));
                  }
            }

            // Three horizontal bands via cuts i < j.
            for (int i = 0; i + 2 < n; ++i) {
                  for (int j = i + 1; j + 1 < n; ++j) {
                        res = min(res,
                                    minimumSum2(grid, 0, i, 0, m - 1)
                                    + minimumSum2(grid, i + 1, j, 0, m - 1)
                                    + minimumSum2(grid, j + 1, n - 1, 0, m - 1));
                  }
            }
            return res;
      }

public:
      // Consider both original and rotated to capture vertical-first and horizontal-first splits.
      int minimumSum(vector<vector<int>>& grid) {
            auto rgrid = rotate(grid);
            return min(solve(grid), solve(rgrid));
      }
};
