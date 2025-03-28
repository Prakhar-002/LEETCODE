//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2503

//? ⌚ Time complexity ➺ O(q log q + (n * m)log(n * m)) 👉🏻  n = len(grid)

//? 🧺 Space complexity ➺ O(n * m) 👉🏻 q = len(queries) 👉🏻  m = len(grid[0])

import java.util.*; 

class Solution {
      public int[] maxPoints(int[][] grid, int[] queries) {
            int rows = grid.length, cols = grid[0].length;
            int[][] directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}}; // Possible moves: Down, Up, Right, Left

            // Pair queries with their original indices and sort based on query value
            int[][] q = new int[queries.length][2];
            for (int i = 0; i < queries.length; i++) {
                  q[i][0] = queries[i];
                  q[i][1] = i;
            }

            Arrays.sort(q, Comparator.comparingInt(a -> a[0]));

            // Min-heap to process cells in increasing order of values
            PriorityQueue<int[]> minHeap = new PriorityQueue<>(Comparator.comparingInt(a -> a[0]));
            minHeap.add(new int[]{grid[0][0], 0, 0}); // Initial cell (value, row, col)

            boolean[][] visited = new boolean[rows][cols]; // Track visited cells
            visited[0][0] = true;

            int[] result = new int[queries.length]; // Store results for each query
            int points = 0; // Number of reachable cells

            // Process each query
            for (int[] query : q) {
                  int limit = query[0], idx = query[1];

                  // Expand reachable cells while the smallest value is below the current query
                  while (!minHeap.isEmpty() && minHeap.peek()[0] < limit) {
                        int[] cell = minHeap.poll(); // Remove smallest element
                        int r = cell[1], c = cell[2];
                        points++;

                        // Explore the four possible directions
                        for (int[] dir : directions) {
                              int nr = r + dir[0], nc = c + dir[1];

                              // Check if the next cell is within bounds and not visited
                              if (nr >= 0 && nr < rows && nc >= 0 && nc < cols && !visited[nr][nc]) {
                                    minHeap.add(new int[]{grid[nr][nc], nr, nc});
                                    visited[nr][nc] = true;
                              }
                        }
                  }

                  result[idx] = points; // Store the answer for this query
            }

            return result;
      }
}
