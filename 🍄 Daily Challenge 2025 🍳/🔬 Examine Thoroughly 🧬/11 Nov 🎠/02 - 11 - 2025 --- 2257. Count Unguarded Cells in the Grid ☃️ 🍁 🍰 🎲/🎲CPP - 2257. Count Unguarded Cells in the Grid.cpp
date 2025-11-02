//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2257

//? ⌚ Time complexity ➺ O(m * n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(m * n)

#include <vector>
using namespace std;

class Solution {
public:
      /**
       * Returns number of unguarded cells in a grid.
       * Guards and walls block sight. Guard's line covers four directions.
       */
      int countUnguarded(
            int m, int n,
            vector<vector<int>>& guards,
            vector<vector<int>>& walls) {
            vector<vector<int>> g(m, vector<int>(n, 0)); // Grid: 0 = unguarded, 1 = seen, 2 = guard/wall

            // Mark guards and walls
            for (auto& guard : guards)
                  g[guard[0]][guard[1]] = 2;
            for (auto& wall : walls)
                  g[wall[0]][wall[1]] = 2;

            // Four directions (up, right, down, left)
            vector<pair<int,int>> dirs = { {-1,0}, {0,1}, {1,0}, {0,-1} };

            // Propagate each guard's line of sight
            for (auto& guard : guards) {
                  int gx = guard[0], gy = guard[1];
                  for (auto& d : dirs) {
                        int x = gx, y = gy;
                        while (true) {
                              x += d.first;
                              y += d.second;
                              // Stop on boundary/obstacle
                              if (x < 0 || x >= m || y < 0 || y >= n || g[x][y] == 2) break;
                              // Mark as guarded
                              g[x][y] = 1;
                        }
                  }
            }

            // Count cells not covered or blocked
            int res = 0;
            for (int i = 0; i < m; ++i)
                  for (int j = 0; j < n; ++j)
                        if (g[i][j] == 0) res++;
            return res;
      }
};
