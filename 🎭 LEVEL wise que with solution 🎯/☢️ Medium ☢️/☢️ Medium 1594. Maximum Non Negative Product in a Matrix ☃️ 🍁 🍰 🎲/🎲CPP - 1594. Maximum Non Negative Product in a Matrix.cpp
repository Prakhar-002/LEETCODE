//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1594

//? ⌚ Time complexity ➺ O(m * n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(m * n)

#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

class Solution {
public:
      int m, n;
      long long MOD = 1'000'000'007;

      // dp[i][j] = {maxProduct, minProduct}, -1 flags uncomputed cells
      vector<vector<pair<long long, long long>>> dp;
      vector<vector<bool>> computed;

      // ---------- Recursive helper returning {maxProduct, minProduct} ----------
      pair<long long, long long> solve(vector<vector<int>>& grid, int i, int j) {

            // Base case: bottom-right cell has only one path (itself)
            if (i == m - 1 && j == n - 1)
                  return {grid[i][j], grid[i][j]};

            // Return cached result if already computed
            if (computed[i][j])
                  return dp[i][j];

            long long maxVal = LLONG_MIN;
            long long minVal = LLONG_MAX;

            // ---------- Move DOWN ----------
            if (i + 1 < m) {
                  auto [downMax, downMin] = solve(grid, i + 1, j);

                  // Multiply current cell with both extremes to catch sign flips
                  maxVal = max(maxVal, max(
                        (long long)grid[i][j] * downMax,
                        (long long)grid[i][j] * downMin));
                  minVal = min(minVal, min(
                        (long long)grid[i][j] * downMax,
                        (long long)grid[i][j] * downMin));
            }

            // ---------- Move RIGHT ----------
            if (j + 1 < n) {
                  auto [rightMax, rightMin] = solve(grid, i, j + 1);

                  maxVal = max(maxVal, max(
                        (long long)grid[i][j] * rightMax,
                        (long long)grid[i][j] * rightMin));
                  minVal = min(minVal, min(
                        (long long)grid[i][j] * rightMax,
                        (long long)grid[i][j] * rightMin));
            }

            // Cache and return both extremes
            computed[i][j] = true;
            dp[i][j]       = {maxVal, minVal};
            return dp[i][j];
      }

      int maxProductPath(vector<vector<int>>& grid) {
            m        = grid.size();
            n        = grid[0].size();
            dp       = vector<vector<pair<long long, long long>>>(m, vector<pair<long long, long long>>(n));
            computed = vector<vector<bool>>(m, vector<bool>(n, false));

            // Start recursion from top-left corner
            auto [maxProduct, _] = solve(grid, 0, 0);

            // If best product is negative → no valid non-negative path exists
            if (maxProduct < 0)
                  return -1;

            return (int)(maxProduct % MOD);
      }
};