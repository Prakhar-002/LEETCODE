//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 286

//? ⌚ Time complexity ➺ O(m * n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(m * n)

import java.util.*;

class Solution {
      public void islandsAndTreasure(int[][] grid) {
            int ROWS = grid.length, COLS = grid[0].length;
            Set<String> visit = new HashSet<>();
            Queue<int[]> q = new LinkedList<>();

            // ----------------------------------------------------------
            // Helper function: add cell to BFS if valid and unvisited
            // ----------------------------------------------------------
            // We'll inline this logic in BFS to avoid Java inner function complexity

            // Step 1: Add all gates (0) to BFS queue
            for (int r = 0; r < ROWS; r++) {
                  for (int c = 0; c < COLS; c++) {
                        if (grid[r][c] == 0) {
                              q.offer(new int[] { r, c });
                              visit.add(r + "," + c);
                        }
                  }
            }

            int dist = 0; // Distance from gate

            // ----------------------------------------------------------
            // Step 2: BFS from all gates simultaneously
            // ----------------------------------------------------------
            int[][] dirs = { { 1, 0 }, { -1, 0 }, { 0, 1 }, { 0, -1 } };
            while (!q.isEmpty()) {
                  int size = q.size();
                  for (int i = 0; i < size; i++) {
                        int[] cell = q.poll();
                        int r = cell[0], c = cell[1];
                        grid[r][c] = dist;

                        // Try all 4 neighbors
                        for (int[] d : dirs) {
                              int nr = r + d[0];
                              int nc = c + d[1];
                              String key = nr + "," + nc;
                              if (nr < 0 || nc < 0 || nr >= ROWS || nc >= COLS ||
                                          visit.contains(key) || grid[nr][nc] == -1) {
                                    continue;
                              }
                              visit.add(key);
                              q.offer(new int[] { nr, nc });
                        }
                  }
                  dist++;
            }
      }
}
