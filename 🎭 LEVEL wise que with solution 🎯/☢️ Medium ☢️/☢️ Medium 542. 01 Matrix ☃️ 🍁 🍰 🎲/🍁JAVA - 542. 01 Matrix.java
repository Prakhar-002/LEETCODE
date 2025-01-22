//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1765

//? ⌚ Time complexity ➺ O(n * m) 👉🏻  n = len(mat)

//? 🧺 Space complexity ➺ O(n * m) 👉🏻 m = len(mat[0])

//* MultiSource BFS

import java.util.*;

class Solution {
      public int[][] updateMatrix(int[][] mat) {
            // Get the number of rows and columns in the grid
            int ROWS = mat.length;
            int COLS = mat[0].length;

            // Initialize a deque to perform BFS (queue to store coordinates)
            Deque<int[]> q = new ArrayDeque<>(); // (r, c)

            // Initialize the result grid with -1 to indicate unvisited cells
            int[][] distances = new int[ROWS][COLS];
            for (int[] row : distances) {
                  Arrays.fill(row, -1);
            }

            // Iterate through the grid to find cells with zeroes
            for (int r = 0; r < ROWS; r++) {
                  for (int c = 0; c < COLS; c++) {
                        if (mat[r][c] == 0) {  // If the current cell is a 0
                              q.offer(new int[] { r, c });  // Add it to the queue
                              distances[r][c] = 0;  // Cells with 0 have a distance of 0
                        }
                  }
            }

            // Directions for neighbors: up, down, left, right
            int[][] directions = { { 1, 0 }, { -1, 0 }, { 0, 1 }, { 0, -1 } };

            // Perform Breadth-First Search (BFS) to calculate the distance to the nearest 0
            while (!q.isEmpty()) {
                  // Dequeue the front cell
                  int[] current = q.poll();
                  int r = current[0], c = current[1];

                  // Get the current distance of the cell (this represents the distance to the nearest 0)
                  int currentDistance = distances[r][c];

                  // Process each neighbor
                  for (int[] dir : directions) {
                        int nr = r + dir[0], nc = c + dir[1];

                        // Check if the neighbor is within bounds and unvisited
                        if (nr >= 0 && nr < ROWS && nc >= 0 && nc < COLS && distances[nr][nc] == -1) {
                              q.offer(new int[] { nr, nc });  // Add the neighbor to the queue to process later
                              distances[nr][nc] = currentDistance + 1;  // Set the neighbor's distance
                        }
                  }
            }

            // Return the final grid of distances
            return distances;
      }
}
