//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 407

//? ⌚ Time complexity ➺ O(m * n log(m * n)) 👉🏻  m = len(heightMap)

//? 🧺 Space complexity ➺ O(m * n)           👉🏻  n = len(heightMap[0])

import java.util.PriorityQueue; 

class Solution {
      public int trapRainWater(int[][] heightMap) {
            int rows = heightMap.length;
            int cols = heightMap[0].length;

            // Min-heap to store cells, sorted by height
            PriorityQueue<int[]> minHeap = new PriorityQueue<>((a, b) -> a[0] - b[0]);
            boolean[][] visited = new boolean[rows][cols];

            // Add all boundary cells to the heap and mark them as visited
            for (int r = 0; r < rows; r++) {
                  for (int c = 0; c < cols; c++) {
                        if (r == 0 || r == rows - 1 || c == 0 || c == cols - 1) {
                              minHeap.offer(new int[]{heightMap[r][c], r, c}); // Add boundary cell to heap
                              visited[r][c] = true;                            // Mark as visited
                        }
                  }
            }

            int res = 0;        // Variable to store the total trapped water
            int maxH = 0;       // Track the maximum height encountered so far
            int[][] directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}}; // Four directions: down, up, right, left

            // Process cells in the heap
            while (!minHeap.isEmpty()) {
                  int[] cell = minHeap.poll();
                  int height = cell[0];
                  int r = cell[1];
                  int c = cell[2];

                  maxH = Math.max(maxH, height); // Update maximum height seen so far

                  // Explore neighbors of the current cell
                  for (int[] d : directions) {
                        int nr = r + d[0];
                        int nc = c + d[1];

                        // Check if neighbor is valid and not visited
                        if (nr < 0 || nc < 0 || nr >= rows || nc >= cols || visited[nr][nc]) {
                              continue;
                        }

                        // Calculate water trapped at the neighbor
                        res += Math.max(0, maxH - heightMap[nr][nc]);

                        // Add neighbor to heap and mark as visited
                        minHeap.offer(new int[]{heightMap[nr][nc], nr, nc});
                        visited[nr][nc] = true;
                  }
            }

            return res; // Return the total trapped water
      }
}
