
//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1765

//? ⌚ Time complexity ➺ O(n * m) 👉🏻  n = len(isWater)

//? 🧺 Space complexity ➺ O(n * m) 👉🏻 m = len(isWater[0])

//* MultiSource BFS

import java.util.*;

class Solution {
      public int[][] highestPeak(int[][] isWater) {
            // Get the number of rows and columns in the grid
            int ROWS = isWater.length;
            int COLS = isWater[0].length;

            // Initialize the result grid with -1 to indicate unvisited cells
            int[][] heights = new int[ROWS][COLS];
            for (int[] row : heights) {
                  Arrays.fill(row, -1);
            }

            // Initialize a queue to perform BFS (queue to store coordinates)
            Queue<int[]> queue = new LinkedList<>();

            // Iterate through the grid to find water cells
            for (int r = 0; r < ROWS; r++) {
                  for (int c = 0; c < COLS; c++) {
                        if (isWater[r][c] == 1) { // If the current cell is water
                              queue.add(new int[] { r, c }); // Add it to the queue
                              heights[r][c] = 0; // Water cells have a height of 0
                        }
                  }
            }

            // Directions for neighbors: up, down, left, right
            int[][] directions = { { 1, 0 }, { -1, 0 }, { 0, 1 }, { 0, -1 } };

            // Perform Breadth-First Search (BFS) to calculate the heights
            while (!queue.isEmpty()) {
                  // Dequeue the front cell
                  int[] cell = queue.poll();
                  int r = cell[0], c = cell[1];

                  // Get the current height of the cell
                  int currentHeight = heights[r][c];

                  // Process each neighbor
                  for (int[] dir : directions) {
                        int nr = r + dir[0];
                        int nc = c + dir[1];

                        // Check if the neighbor is within bounds and unvisited
                        if (nr >= 0 && nr < ROWS && nc >= 0 && nc < COLS && heights[nr][nc] == -1) {
                              queue.add(new int[] { nr, nc }); // Add neighbor to the queue
                              heights[nr][nc] = currentHeight + 1; // Set its height
                        }
                  }
            }

            // Return the final height grid
            return heights;
      }
}
