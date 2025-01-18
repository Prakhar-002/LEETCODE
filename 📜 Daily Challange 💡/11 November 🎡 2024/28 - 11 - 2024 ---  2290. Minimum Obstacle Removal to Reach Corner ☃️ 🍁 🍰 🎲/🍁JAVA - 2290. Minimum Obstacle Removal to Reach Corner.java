//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2290

//? ⌚ Time complexity ➺ O(n * m)  👉🏻  n = len(grid)

//? 🧺 Space complexity ➺ O(n * m) 👉🏻  m = len(grid[0])

import java.util.*;

class Solution {
      public int minimumObstacles(int[][] grid) {
            int ROWS = grid.length;
            int COLS = grid[0].length;

            // Queue for BFS, storing {obstacles, row, col}
            Deque<int[]> q = new LinkedList<>();
            q.offer(new int[] {0, 0, 0}); // Start at (0, 0) with 0 obstacles

            // Visited set to avoid revisiting cells
            boolean[][] visited = new boolean[ROWS][COLS];
            visited[0][0] = true;

            // Perform BFS
            while (!q.isEmpty()) {
                  int[] current = q.poll();
                  int obstacles = current[0], r = current[1], c = current[2];

                  // If we reach the bottom-right corner, return the obstacle count
                  if (r == ROWS - 1 && c == COLS - 1) {
                        return obstacles;
                  }

                  // Define the neighbors (down, up, right, left)
                  int[][] directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
                  for (int[] dir : directions) {
                        int nr = r + dir[0], nc = c + dir[1];

                        // Check bounds and if the cell is already visited
                        if (nr < 0 || nc < 0 || nr >= ROWS || nc >= COLS || visited[nr][nc]) {
                              continue;
                        }

                        // Mark the cell as visited
                        visited[nr][nc] = true;

                        // Add to the queue based on whether it's an obstacle
                        if (grid[nr][nc] == 1) {
                              q.offer(new int[] {obstacles + 1, nr, nc});
                        } else {
                              q.offerFirst(new int[] {obstacles, nr, nc});
                        }
                  }
            }

            // If no valid path exists, return -1
            return -1;
      }
}
