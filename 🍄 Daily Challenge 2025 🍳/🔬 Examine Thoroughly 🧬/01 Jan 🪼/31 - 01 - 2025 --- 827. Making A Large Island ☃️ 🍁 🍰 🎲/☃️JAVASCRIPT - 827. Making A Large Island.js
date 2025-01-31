//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 827

//? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(grid)

//? 🧺 Space complexity ➺ O(n ^ 2)

var largestIsland = function (grid) {
      const N = grid.length; // Get the size of the grid (NxN)

      // Function to check if a cell is out of bounds
      const outOfBound = (r, c) => {
            return r < 0 || c < 0 || r >= N || c >= N;
      };

      // Depth-First Search (DFS) to label each island and calculate its size
      const dfs = (r, c, label) => {
            // Base case: if cell is out of bounds or not land (value != 1)
            if (outOfBound(r, c) || grid[r][c] !== 1) {
                  return 0;
            }

            // Label the current cell with the island's unique label
            grid[r][c] = label;

            // Initialize the size of this island (current cell counts as 1)
            let size = 1;

            // Define the four possible neighbors (up, down, left, right)
            const neighbors = [
                  [r + 1, c],
                  [r - 1, c],
                  [r, c + 1],
                  [r, c - 1]
            ];

            // Recursively calculate the size of the connected island
            for (const [nr, nc] of neighbors) {
                  size += dfs(nr, nc, label);
            }

            return size;
      };

      // Object to store the size of islands keyed by their label
      const size = {};
      let label = 2; // Start labeling islands from 2 (to distinguish from land 1)

      // First pass: Label all islands and calculate their sizes
      for (let r = 0; r < N; r++) {
            for (let c = 0; c < N; c++) {
                  if (grid[r][c] === 1) {
                        size[label] = dfs(r, c, label); // Label and calculate size
                        label++; // Move to the next label for the next island
                  }
            }
      }

      // Function to calculate the potential size of an island by connecting water
      const connect = (r, c) => {
            // Define the four possible neighbors
            const neighbors = [
                  [r + 1, c],
                  [r - 1, c],
                  [r, c + 1],
                  [r, c - 1]
            ];

            // Set to track visited island labels
            const visited = new Set();

            // Start with a size of 1 (the flipped water cell)
            let connectedIsland = 1;

            // Check each neighbor
            for (const [nr, nc] of neighbors) {
                  if (!outOfBound(nr, nc) && !visited.has(grid[nr][nc])) {
                        connectedIsland += size[grid[nr][nc]] || 0; // Add island size
                        visited.add(grid[nr][nc]); // Mark island as visited
                  }
            }

            return connectedIsland;
      };

      // Get the size of the largest island from the precomputed sizes
      let island = Math.max(0, ...Object.values(size));

      // Second pass: Try flipping each water cell (0) to land (1)
      for (let r = 0; r < N; r++) {
            for (let c = 0; c < N; c++) {
                  if (grid[r][c] === 0) { // If the cell is water
                        island = Math.max(island, connect(r, c)); // Calculate potential size of the island
                  }
            }
      }

      return island;
}
