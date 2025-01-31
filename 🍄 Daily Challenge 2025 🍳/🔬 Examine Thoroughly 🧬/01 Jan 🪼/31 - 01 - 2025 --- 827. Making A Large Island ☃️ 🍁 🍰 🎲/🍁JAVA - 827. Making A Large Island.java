//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 827

//? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(grid)

//? 🧺 Space complexity ➺ O(n ^ 2)

import java.util.*;

class Solution {

      // Function to check if a cell is out of bounds
      public boolean outOfBound(int r, int c, int N) {
            // A cell is out of bounds if its row or column index is outside the grid
            return r < 0 || c < 0 || r >= N || c >= N;
      }

      // Depth-First Search (DFS) to label each island and calculate its size
      public int dfs(int[][] grid, int r, int c, int label, int N) {
            // Base case: Stop if the cell is out of bounds or not land (grid[r][c] != 1)
            if (outOfBound(r, c, N) || grid[r][c] != 1) {
                  return 0;
            }

            // Label the current cell with a unique identifier (label)
            grid[r][c] = label;

            // Initialize size to 1 (current cell counts as part of the island)
            int size = 1;

            // Define the four possible neighboring cells (up, down, left, right)
            int[][] neighbors = {{r + 1, c}, {r - 1, c}, {r, c + 1}, {r, c - 1}};

            // Recursively calculate the size of the connected island
            for (int[] neighbor : neighbors) {
                  size += dfs(grid, neighbor[0], neighbor[1], label, N);
            }

            // Return the total size of the island
            return size;
      }

      // Function to calculate the potential size of an island by connecting water
      public int connect(int[][] grid, int r, int c, Map<Integer, Integer> size, int N) {
            // Define the four possible neighbors of the current cell
            int[][] neighbors = {{r + 1, c}, {r - 1, c}, {r, c + 1}, {r, c - 1}};
            
            // A set to keep track of visited island labels
            Set<Integer> visited = new HashSet<>();
            
            // Start with a size of 1 (flipping the current water cell to land)
            int connectedIsland = 1;

            // Iterate through the neighboring cells
            for (int[] neighbor : neighbors) {
                  int nr = neighbor[0], nc = neighbor[1];
                  // If the neighbor is within bounds and its island label hasn't been visited yet
                  if (!outOfBound(nr, nc, N) && !visited.contains(grid[nr][nc])) {
                        // Add the size of the neighboring island to the total size
                        connectedIsland += size.getOrDefault(grid[nr][nc], 0);
                        // Mark this island label as visited
                        visited.add(grid[nr][nc]);
                  }
            }

            // Return the total size of the newly formed island
            return connectedIsland;
      }

      // Main function to calculate the largest island size
      public int largestIsland(int[][] grid) {
            int N = grid.length; // Size of the NxN grid

            // Map to store the size of each labeled island
            Map<Integer, Integer> size = new HashMap<>();
            
            int label = 2; // Start labeling islands from 2 (to distinguish from 1s)

            // First pass: Label all islands and calculate their sizes
            for (int r = 0; r < N; r++) {
                  for (int c = 0; c < N; c++) {
                        if (grid[r][c] == 1) { // If the cell is land
                              size.put(label, dfs(grid, r, c, label, N)); // Label and calculate size
                              label++; // Move to the next label for the next island
                        }
                  }
            }

            // Get the size of the largest island from the labeled sizes
            int island = size.values().stream().max(Integer::compare).orElse(0);

            // Second pass: Try flipping each water cell (0) to land (1)
            for (int r = 0; r < N; r++) {
                  for (int c = 0; c < N; c++) {
                        if (grid[r][c] == 0) { // If the cell is water
                              island = Math.max(island, connect(grid, r, c, size, N));
                        }
                  }
            }

            // Return the size of the largest possible island
            return island;
      }
}
