//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1368

//? ⌚ Time complexity ➺ O(n * m)  👉🏻  n = len(grid)

//? 🧺 Space complexity ➺ O(n * m) 👉🏻  m = len(grid[0])

import java.util.ArrayDeque;
import java.util.Deque;

class Solution {
      public int minCost(int[][] grid) {
            int ROWS = grid.length, COLS = grid[0].length;

            // Direction vectors for movement: {Right, Left, Down, Up}
            int[][] directions = { {0, 1}, {0, -1}, {1, 0}, {-1, 0} };

            // Minimum cost grid initialized to a large value
            int[][] minCost = new int[ROWS][COLS];
            for (int i = 0; i < ROWS; i++) {
                  for (int j = 0; j < COLS; j++) {
                        minCost[i][j] = Integer.MAX_VALUE;
                  }
            }
            minCost[0][0] = 0;

            // Deque for BFS
            Deque<int[]> deque = new ArrayDeque<>();
            deque.offerFirst(new int[] {0, 0, 0}); // {row, col, cost}

            while (!deque.isEmpty()) {
                  int[] curr = deque.pollFirst();
                  int r = curr[0], c = curr[1], cost = curr[2];

                  // If we reach the bottom-right corner, return the cost
                  if (r == ROWS - 1 && c == COLS - 1) {
                        return cost;
                  }

                  // Explore all four directions
                  for (int d = 0; d < 4; d++) {
                        int nr = r + directions[d][0];
                        int nc = c + directions[d][1];
                        int nCost = (d + 1 == grid[r][c]) ? cost : cost + 1;

                        // Check bounds and if the cost is optimal
                        if (nr < 0 || nc < 0 || nr >= ROWS || nc >= COLS || nCost >= minCost[nr][nc]) {
                              continue;
                        }

                        minCost[nr][nc] = nCost;

                        // Add to deque: prioritize no-cost moves
                        if (d + 1 == grid[r][c]) {
                              deque.offerFirst(new int[] {nr, nc, nCost});
                        } else {
                              deque.offerLast(new int[] {nr, nc, nCost});
                        }
                  }
            }

            return -1; // Unreachable case (should not happen)
      }
}
