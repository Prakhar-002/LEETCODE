//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 994

//? ⌚ Time complexity ➺ O(n * m) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n * m)

import java.util.*;

class Solution {
      public int orangesRotting(int[][] grid) {
            int ROWS = grid.length, COLS = grid[0].length; // Dimensions

            Queue<int[]> q = new LinkedList<>(); // Queue for BFS
            int fresh = 0; // Count of fresh oranges
            int time = 0; // Minutes elapsed

            // ----------------------------------------------------------
            // Step 1: Enqueue all rotten oranges, count fresh oranges
            // ----------------------------------------------------------
            for (int r = 0; r < ROWS; r++) {
                  for (int c = 0; c < COLS; c++) {
                        if (grid[r][c] == 1) {
                              fresh++;
                        }
                        if (grid[r][c] == 2) {
                              q.offer(new int[] { r, c });
                        }
                  }
            }

            // Directions for adjacent cells (right, left, down, up)
            int[][] directions = { { 0, 1 }, { 0, -1 }, { 1, 0 }, { -1, 0 } };

            // ----------------------------------------------------------
            // Step 2: BFS to rot all reachable fresh oranges
            // ----------------------------------------------------------
            while (!q.isEmpty() && fresh > 0) {
                  int size = q.size();
                  for (int i = 0; i < size; i++) {
                        int[] pos = q.poll();
                        int r = pos[0], c = pos[1];

                        // Check all 4 directions
                        for (int[] dir : directions) {
                              int row = r + dir[0];
                              int col = c + dir[1];

                              // Skip if out of bounds or not a fresh orange
                              if (row < 0 || row == ROWS || col < 0 || col == COLS || grid[row][col] != 1) {
                                    continue;
                              }

                              // Rot and enqueue this orange
                              grid[row][col] = 2;
                              q.offer(new int[] { row, col });
                              fresh--;
                        }
                  }
                  // One "minute" has passed
                  time++;
            }

            // If all fresh oranges are gone, return time, else -1.
            return fresh == 0 ? time : -1;
      }
}
