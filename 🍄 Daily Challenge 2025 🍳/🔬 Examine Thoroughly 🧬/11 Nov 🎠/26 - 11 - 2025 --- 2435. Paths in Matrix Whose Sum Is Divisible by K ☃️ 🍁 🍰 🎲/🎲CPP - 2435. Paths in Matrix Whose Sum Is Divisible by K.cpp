//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2435

//? ⌚ Time complexity ➺ O(r * c * k)

//? 🧺 Space complexity ➺ O(r * c * k)

#include <vector>
using namespace std;

class Solution {
public:
      int ROWS, COLS, MOD = 1000000007;
      vector<vector<vector<int>>> cache;

      int numberOfPaths(vector<vector<int>>& grid, int k) {
            ROWS = grid.size();
            COLS = grid[0].size();
            cache = vector<vector<vector<int>>>(ROWS, vector<vector<int>>(COLS, vector<int>(k, -1)));
            return dfs(grid, 0, 0, 0, k);
      }

      int dfs(vector<vector<int>>& grid, int r, int c, int remain, int k) {
            if (r >= ROWS || c >= COLS) return 0;  // Boundary check

            remain = (remain + grid[r][c]) % k;  // Update remainder including current cell

            if (r == ROWS - 1 && c == COLS - 1) {
                  // Check if final path sum modulo k is zero
                  return remain == 0 ? 1 : 0;
            }

            if (cache[r][c][remain] != -1) return cache[r][c][remain];

            int down = dfs(grid, r + 1, c, remain, k) % MOD;
            int right = dfs(grid, r, c + 1, remain, k) % MOD;

            cache[r][c][remain] = (down + right) % MOD;

            return cache[r][c][remain];
      }
};
