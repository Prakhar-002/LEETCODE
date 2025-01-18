//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1368

//? ⌚ Time complexity ➺ O(n * m)  👉🏻  n = len(grid)

//? 🧺 Space complexity ➺ O(n * m) 👉🏻  m = len(grid[0])

var minCost = function (grid) {
      const ROWS = grid.length, COLS = grid[0].length;

      // Direction vectors for movement: {Right, Left, Down, Up}
      const directions = [
            [0, 1],  // Right
            [0, -1], // Left
            [1, 0],  // Down
            [-1, 0]  // Up
      ];

      // Minimum cost grid initialized to Infinity
      const minCost = Array.from({ length: ROWS }, () => Array(COLS).fill(Infinity));
      minCost[0][0] = 0;

      // Deque for BFS
      const deque = [];
      deque.push([0, 0, 0]); // [row, col, cost]

      while (deque.length > 0) {
            const [r, c, cost] = deque.shift();

            // If we reach the bottom-right corner, return the cost
            if (r === ROWS - 1 && c === COLS - 1) {
                  return cost;
            }

            // Explore all four directions
            for (let d = 0; d < 4; d++) {
                  const nr = r + directions[d][0];
                  const nc = c + directions[d][1];
                  const nCost = (d + 1 === grid[r][c]) ? cost : cost + 1;

                  // Check bounds and if the cost is optimal
                  if (nr < 0 || nc < 0 || nr >= ROWS || nc >= COLS || nCost >= minCost[nr][nc]) {
                        continue;
                  }

                  minCost[nr][nc] = nCost;

                  // Add to deque: prioritize no-cost moves
                  if (d + 1 === grid[r][c]) {
                        deque.unshift([nr, nc, nCost]);
                  } else {
                        deque.push([nr, nc, nCost]);
                  }
            }
      }

      return -1; // Unreachable case (should not happen)
}