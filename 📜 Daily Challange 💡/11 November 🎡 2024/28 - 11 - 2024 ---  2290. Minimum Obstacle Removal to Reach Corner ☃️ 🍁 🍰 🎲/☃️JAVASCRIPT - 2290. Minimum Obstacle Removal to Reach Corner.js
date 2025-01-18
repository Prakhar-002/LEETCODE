//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2290

//? ⌚ Time complexity ➺ O(n * m)  👉🏻  n = len(grid)

//? 🧺 Space complexity ➺ O(n * m) 👉🏻  m = len(grid[0])

var minimumObstacles = function (grid) {
      const ROWS = grid.length;
      const COLS = grid[0].length;

      // Deque for BFS, storing [obstacles, row, col]
      const q = [];
      q.push([0, 0, 0]); // Start at (0, 0) with 0 obstacles

      // Visited set to avoid revisiting cells
      const visited = Array.from({ length: ROWS }, () => Array(COLS).fill(false));
      visited[0][0] = true;

      // Perform BFS
      while (q.length > 0) {
            const [obstacles, r, c] = q.shift();

            // If we reach the bottom-right corner, return the obstacle count
            if (r === ROWS - 1 && c === COLS - 1) {
                  return obstacles;
            }

            // Define the neighbors (down, up, right, left)
            const directions = [
                  [1, 0],
                  [-1, 0],
                  [0, 1],
                  [0, -1]
            ];
            for (const [dr, dc] of directions) {
                  const nr = r + dr, nc = c + dc;

                  // Check bounds and if the cell is already visited
                  if (nr < 0 || nc < 0 || nr >= ROWS || nc >= COLS || visited[nr][nc]) {
                        continue;
                  }

                  // Mark the cell as visited
                  visited[nr][nc] = true;

                  // Add to the queue based on whether it's an obstacle
                  if (grid[nr][nc] === 1) {
                        q.push([obstacles + 1, nr, nc]);
                  } else {
                        q.unshift([obstacles, nr, nc]);
                  }
            }
      }

      // If no valid path exists, return -1
      return -1;
}