//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3548

// ? ⌚ Time complexity ➺ O(n * m)

// ? 🧺 Space complexity ➺ O(n * m)

#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
      long long total = 0;

      // ---------- Check if any horizontal cut yields equal halves ----------
      bool checkHorCuts(vector<vector<int>>& grid) {
            int m    = grid.size();
            int n    = grid[0].size();
            unordered_set<long long> seen;
            long long top = 0;

            for (int i = 0; i < m - 1; i++) {
                  for (int j = 0; j < n; j++) {
                        seen.insert((long long)grid[i][j]);
                        top += grid[i][j];
                  }

                  long long bottom = total - top;
                  long long diff   = top - bottom;

                  // Exact equal split
                  if (diff == 0)
                        return true;
                  // Diff matches a corner or edge value (boundary adjustment check)
                  if (diff == grid[0][0])
                        return true;
                  if (diff == grid[0][n - 1])
                        return true;
                  if (diff == grid[i][0])
                        return true;
                  // Diff matches any previously seen value (non-first row, multi-col)
                  if (i > 0 && n > 1 && seen.count(diff))
                        return true;
            }

            return false;
      }

      // ---------- Reverse rows of grid in-place ----------
      void reverse(vector<vector<int>>& grid) {
            int top = 0, bottom = grid.size() - 1;
            while (top < bottom) {
                  swap(grid[top], grid[bottom]);
                  top++;
                  bottom--;
            }
      }

      bool canPartitionGrid(vector<vector<int>>& grid) {
            int m = grid.size();
            int n = grid[0].size();

            // ---------- Compute grand total ----------
            for (int i = 0; i < m; i++)
                  for (int j = 0; j < n; j++)
                        total += grid[i][j];

            // ---------- Horizontal cuts (top-down) ----------
            if (checkHorCuts(grid))
                  return true;

            // ---------- Horizontal cuts (bottom-up via reverse) ----------
            reverse(grid);
            if (checkHorCuts(grid))
                  return true;
            reverse(grid);    // restore original orientation

            // ---------- Build transpose for vertical cut checks ----------
            vector<vector<int>> transposeGrid(n, vector<int>(m));
            for (int i = 0; i < m; i++)
                  for (int j = 0; j < n; j++)
                        transposeGrid[j][i] = grid[i][j];

            // ---------- Vertical cuts (left-to-right) ----------
            if (checkHorCuts(transposeGrid))
                  return true;

            // ---------- Vertical cuts (right-to-left via reverse) ----------
            reverse(transposeGrid);
            return checkHorCuts(transposeGrid);
      }
}; 