//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 200

//? ⌚ Time complexity ➺ O(n * m) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n * m)

import java.util.*;

class Solution {
      public int numIslands(char[][] grid) {
            // Possible movement directions: down, up, right, left
            int[][] directions = { { 1, 0 }, { -1, 0 }, { 0, 1 }, { 0, -1 } };
            int ROWS = grid.length, COLS = grid[0].length;
            int islands = 0; // Count of islands found

            // ----------------------------------------------------------
            // BFS to traverse all connected land cells starting at (r, c)
            // ----------------------------------------------------------
            for (int r = 0; r < ROWS; r++) {
                  for (int c = 0; c < COLS; c++) {
                        // Found land → perform BFS to mark entire island
                        if (grid[r][c] == '1') {
                              bfs(r, c, grid, directions, ROWS, COLS);
                              islands++;
                        }
                  }
            }
            return islands;
      }

      private void bfs(int r, int c, char[][] grid, int[][] directions, int ROWS, int COLS) {
            Queue<int[]> q = new LinkedList<>();
            grid[r][c] = '0'; // Mark visited
            q.offer(new int[] { r, c });

            while (!q.isEmpty()) {
                  int[] cell = q.poll();
                  int row = cell[0], col = cell[1];

                  // Explore four directions
                  for (int[] dir : directions) {
                        int nr = row + dir[0];
                        int nc = col + dir[1];
                        // Skip if OOB or water
                        if (nr < 0 || nc < 0 || nr >= ROWS || nc >= COLS || grid[nr][nc] == '0') {
                              continue;
                        }

                        q.offer(new int[] { nr, nc });
                        grid[nr][nc] = '0'; // Mark visited
                  }
            }
      }
}
