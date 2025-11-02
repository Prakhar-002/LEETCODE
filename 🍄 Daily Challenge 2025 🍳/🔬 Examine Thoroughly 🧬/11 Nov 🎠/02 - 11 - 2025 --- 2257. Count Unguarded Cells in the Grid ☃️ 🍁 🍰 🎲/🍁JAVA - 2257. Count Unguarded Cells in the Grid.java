//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2257

//? ⌚ Time complexity ➺ O(m * n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(m * n)

import java.util.*;

class Solution {
      /**
       * Count number of unguarded cells in an m x n grid with guards and walls.
       * Guards and walls block visibility; guard's line of sight extends in 4 directions until blocked.
       */
      public int countUnguarded(int m, int n, int[][] guards, int[][] walls) {
            int[][] g = new int[m][n]; // Grid matrix to mark cell states (0: unguarded, 1: seen, 2: guard/wall)

            // Mark guards and walls
            for (int[] guard : guards) {
                  g[guard[0]][guard[1]] = 2;
            }
            for (int[] wall : walls) {
                  g[wall[0]][wall[1]] = 2;
            }

            // Four possible directions (up, right, down, left)
            int[][] dirs = { {-1, 0}, {0, 1}, {1, 0}, {0, -1} };

            // Process each guard's line of sight
            for (int[] guard : guards) {
                  int gx = guard[0], gy = guard[1];
                  for (int[] dir : dirs) {
                        int x = gx, y = gy;
                        while (true) {
                              x += dir[0];
                              y += dir[1];
                              // If out of bounds or hit wall/guard, stop
                              if (x < 0 || x >= m || y < 0 || y >= n || g[x][y] == 2) break;
                              // Mark cell as guarded
                              g[x][y] = 1;
                        }
                  }
            }

            // Count unguarded cells (cells with value 0)
            int res = 0;
            for (int i = 0; i < m; i++) {
                  for (int j = 0; j < n; j++) {
                        if (g[i][j] == 0) res++;
                  }
            }
            return res;
      }
}
