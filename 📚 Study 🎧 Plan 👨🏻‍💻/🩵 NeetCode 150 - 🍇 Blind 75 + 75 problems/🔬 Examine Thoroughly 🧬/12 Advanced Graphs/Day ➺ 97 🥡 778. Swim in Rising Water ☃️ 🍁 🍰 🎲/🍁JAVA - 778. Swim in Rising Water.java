//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 778

//? ⌚ Time complexity ➺ O(n ^ 2 log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n ^ 2)

import java.util.PriorityQueue;
import java.util.Comparator;
import java.util.HashSet;
import java.util.Set;

class Solution {
      public int swimInWater(int[][] grid) {
            // ----------------------------------------------------------
            // Step 1: Initialization
            // ----------------------------------------------------------
            int N = grid.length;
            // Min-heap stores int[]{time, row, col}. `time` is max elevation on path so far.
            PriorityQueue<int[]> minH = new PriorityQueue<>(Comparator.comparingInt(a -> a[0]));
            minH.offer(new int[] { grid[0][0], 0, 0 });

            // `visit` tracks visited cells. We use `r * N + c` as a unique key for each cell.
            Set<Integer> visit = new HashSet<>();
            visit.add(0 * N + 0);

            int[][] directions = { { 1, 0 }, { -1, 0 }, { 0, 1 }, { 0, -1 } };

            // ----------------------------------------------------------
            // Step 2: Dijkstra's Algorithm Search
            // ----------------------------------------------------------
            // Process cells from the priority queue until empty.
            while (!minH.isEmpty()) {
                  // Get the cell reachable with the minimum time `t` so far.
                  int[] current = minH.poll();
                  int t = current[0];
                  int r = current[1];
                  int c = current[2];

                  // If we reached the destination, `t` is the minimum required time.
                  if (r == N - 1 && c == N - 1) {
                        return t;
                  }

                  // Explore all valid neighbors.
                  for (int[] dir : directions) {
                        int nr = r + dir[0];
                        int nc = c + dir[1];
                        int cellKey = nr * N + nc;

                        // Skip if neighbor is out of bounds or already visited.
                        if (nr < 0 || nc < 0 || nr >= N || nc >= N || visit.contains(cellKey)) {
                              continue;
                        }

                        visit.add(cellKey);
                        // The time for the new path is the max of the current path's time
                        // and the elevation of the new cell.
                        int newTime = Math.max(t, grid[nr][nc]);

                        // Add the new cell to the heap to be explored.
                        minH.offer(new int[] { newTime, nr, nc });
                  }
            }
            return -1; // Should not be reached.
      }
}
