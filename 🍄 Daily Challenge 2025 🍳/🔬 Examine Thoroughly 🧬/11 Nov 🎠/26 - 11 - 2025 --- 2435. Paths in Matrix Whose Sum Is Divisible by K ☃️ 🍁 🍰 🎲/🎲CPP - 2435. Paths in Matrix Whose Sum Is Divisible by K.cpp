//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2435

//? ⌚ Time complexity ➺ O(r * c * k)

//? 🧺 Space complexity ➺ O(r * c * k)

#include <vector>
using namespace std;

class Solution {
public:
      int ROWS, COLS, MOD = 1000000007;
      vector<vector<vector<int>>> cache;  // 3D cache for memoization based on row, column, remainder

      int numberOfPaths(vector<vector<int>>& grid, int k) {
            ROWS = grid.size();           // Number of rows in the grid
            COLS = grid[0].size();        // Number of columns in the grid

            // Initialize cache with -1 indicating uncomputed states for all possible remainders
            cache = vector<vector<vector<int>>>(ROWS, vector<vector<int>>(COLS, vector<int>(k, -1)));

            // Start DFS traversal from top-left cell (0, 0) with initial remainder 0
            return dfs(grid, 0, 0, 0, k);
      }

      int dfs(vector<vector<int>>& grid, int r, int c, int remain, int k) {
            // If indices go out of grid boundaries, no valid path exists
            if (r >= ROWS || c >= COLS) return 0;

            // Update remainder with current cell's value modulo k
            remain = (remain + grid[r][c]) % k;

            // Base case: if bottom-right cell is reached, check if remainder is zero (path valid)
            if (r == ROWS - 1 && c == COLS - 1) {
                  return remain == 0 ? 1 : 0;
            }

            // Return previously computed result if cached
            if (cache[r][c][remain] != -1) return cache[r][c][remain];

            // Recursively explore moving down and right
            int down = dfs(grid, r + 1, c, remain, k) % MOD;
            int right = dfs(grid, r, c + 1, remain, k) % MOD;

            // Cache the sum of valid paths mod MOD for current state
            cache[r][c][remain] = (down + right) % MOD;

            return cache[r][c][remain];
      }
};