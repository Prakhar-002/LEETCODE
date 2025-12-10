//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1765

//? ⌚ Time complexity ➺ O(n * m) 👉🏻  n = len(isWater)

//? 🧺 Space complexity ➺ O(n * m) 👉🏻 m = len(isWater[0])

//* MultiSource BFS

var highestPeak = function (isWater) {
      // Get the number of rows and columns in the grid
      const ROWS = isWater.length;
      const COLS = isWater[0].length;

      // Initialize the result grid with -1 to indicate unvisited cells
      const heights = Array.from({ length: ROWS }, () => Array(COLS).fill(-1));

      // Initialize a queue to perform BFS
      const queue = [];
      let head = 0; // Pointer to the front of the queue

      // Iterate through the grid to find water cells
      for (let r = 0; r < ROWS; r++) {
            for (let c = 0; c < COLS; c++) {
                  if (isWater[r][c] === 1) { // If the current cell is water
                        queue.push([r, c]); // Add it to the queue
                        heights[r][c] = 0; // Water cells have a height of 0
                  }
            }
      }

      // Directions for neighbors: up, down, left, right
      const directions = [[1, 0], [-1, 0], [0, 1], [0, -1]];

      // Perform Breadth-First Search (BFS) to calculate the heights
      while (head < queue.length) {
            // Get the front cell without using shift()
            const [r, c] = queue[head++];
            const currentHeight = heights[r][c];

            // Process each neighbor
            for (const [dr, dc] of directions) {
                  const nr = r + dr;
                  const nc = c + dc;

                  // Check if the neighbor is within bounds and unvisited
                  if (nr >= 0 && nr < ROWS && nc >= 0 && nc < COLS && heights[nr][nc] === -1) {
                        queue.push([nr, nc]); // Add neighbor to the queue
                        heights[nr][nc] = currentHeight + 1; // Set its height
                  }
            }
      }

      // Return the final height grid
      return heights;
};