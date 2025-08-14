//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 695

//? ⌚ Time complexity ➺ O(n * m)

//? 🧺 Space complexity ➺ O(n * m)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
      int maxAreaOfIsland(vector<vector<int>>& grid) {
            int ROWS = grid.size(), COLS = grid[0].size(); // Grid dimensions
            int area = 0;

            // ----------------------------------------------------------
            // Scan the grid and run DFS for each land cell
            // ----------------------------------------------------------
            for (int r = 0; r < ROWS; r++) {
                  for (int c = 0; c < COLS; c++) {
                        area = max(area, dfs(r, c, grid, ROWS, COLS));
                  }
            }
            return area;
      }

private:
      // ----------------------------------------------------------
      // DFS to compute area of an island starting at (r, c)
      // ----------------------------------------------------------
      int dfs(int r, int c, vector<vector<int>>& grid, int ROWS, int COLS) {
            // Boundary or water check
            if (r < 0 || r >= ROWS || c < 0 || c >= COLS || grid[r][c] == 0) {
                  return 0;
            }

            grid[r][c] = 0; // Mark visited

            // Count current cell + DFS in 4 directions
            return (1 +
                        dfs(r + 1, c, grid, ROWS, COLS) +
                        dfs(r - 1, c, grid, ROWS, COLS) +
                        dfs(r, c + 1, grid, ROWS, COLS) +
                        dfs(r, c - 1, grid, ROWS, COLS)
                  );
      }
};
