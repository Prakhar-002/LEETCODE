//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3546

//? ⌚ Time complexity ➺ O(n * m) 

//? 🧺 Space complexity ➺ O(n + m)

#include <vector>
using namespace std;

class Solution {
public:
      bool canPartitionGrid(vector<vector<int>>& grid) {
            int ROWS = grid.size();
            int COLS = grid[0].size();

            vector<long long> rows(ROWS, 0);
            vector<long long> cols(COLS, 0);
            long long total = 0;

            // ---------- Build row sums, col sums, and total ----------
            for (int i = 0; i < ROWS; i++) {
                  for (int j = 0; j < COLS; j++) {
                        rows[i] += grid[i][j];
                        cols[j] += grid[i][j];
                        total   += grid[i][j];
                  }
            }

            // Odd total can never be split into two equal halves
            if (total % 2 == 1)
                  return false;

            // ---------- Horizontal cuts: accumulate row by row ----------
            // Check if upper portion == lower portion at any row boundary
            long long upper = 0;

            for (int i = 0; i < ROWS - 1; i++) {
                  upper += rows[i];
                  if (upper == total - upper)
                        return true;
            }

            // ---------- Vertical cuts: accumulate col by col ----------
            // Check if left portion == right portion at any col boundary
            long long left = 0;

            for (int j = 0; j < COLS - 1; j++) {
                  left += cols[j];
                  if (left == total - left)
                        return true;
            }

            return false;
      }
};