//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1765

//? ⌚ Time complexity ➺ O(n * m) 👉🏻  n = len(mat)

//? 🧺 Space complexity ➺ O(n * m) 👉🏻 m = len(mat[0])

//* MultiSource BFS

var updateMatrix = function(mat) {
      // Get the number of rows and columns in the grid
      const ROWS = mat.length;
      const COLS = mat[0].length;

      // Initialize a deque to perform BFS (queue to store coordinates)
      const q = [];  // (r, c)

      // Initialize the result grid with -1 to indicate unvisited cells
      const distances = Array.from({ length: ROWS }, () => Array(COLS).fill(-1));

      // Iterate through the grid to find cells with zeroes
      for (let r = 0; r < ROWS; r++) {
            for (let c = 0; c < COLS; c++) {
                  if (mat[r][c] === 0) {  // If the current cell is a 0
                        q.push([r, c]);  // Add it to the queue
                        distances[r][c] = 0;  // Cells with 0 have a distance of 0
                  }
            }
      }

      // Directions for neighbors: up, down, left, right
      const directions = [[1, 0], [-1, 0], [0, 1], [0, -1]];

      // Perform Breadth-First Search (BFS) to calculate the distance to the nearest 0
      while (q.length) {
            // Dequeue the front cell
            const [r, c] = q.shift();

            // Get the current distance of the cell (this represents the distance to the nearest 0)
            const currentDistance = distances[r][c];

            // Process each neighbor
            for (const [dr, dc] of directions) {
                  const nr = r + dr, nc = c + dc;

                  // Check if the neighbor is within bounds and unvisited
                  if (nr >= 0 && nr < ROWS && nc >= 0 && nc < COLS && distances[nr][nc] === -1) {
                        q.push([nr, nc]);  // Add the neighbor to the queue to process later
                        distances[nr][nc] = currentDistance + 1;  // Set the neighbor's distance
                  }
            }
      }

      // Return the final grid of distances
      return distances;
};
