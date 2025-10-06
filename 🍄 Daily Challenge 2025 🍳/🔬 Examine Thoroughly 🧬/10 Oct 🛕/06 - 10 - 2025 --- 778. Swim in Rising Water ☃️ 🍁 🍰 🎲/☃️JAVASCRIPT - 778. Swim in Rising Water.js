//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 778

//? ⌚ Time complexity ➺ O(n ^ 2 log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n ^ 2)

var swimInWater = function (grid) {
      // ----------------------------------------------------------
      // Step 1: Initialization
      // ----------------------------------------------------------
      const N = grid.length; // The dimension of the N x N grid.
      // `visit` tracks visited (r, c) cells using string keys to prevent cycles.
      const visit = new Set();
      // Min-priority queue stores `[time, row, col]`.
      // It prioritizes elements with the smallest `time`.
      const minPQ = new MinPriorityQueue((entry) => entry[0]);
      // The four possible directions to move: right, left, down, up.
      const directions = [
            [0, 1],
            [0, -1],
            [1, 0],
            [-1, 0],
      ];

      // Start Dijkstra's algorithm from the top-left cell (0, 0).
      // The initial time required is the elevation of the start cell.
      minPQ.push([grid[0][0], 0, 0]);
      // Mark the starting cell as visited.
      visit.add('0,0');

      // ----------------------------------------------------------
      // Step 2: Dijkstra's Algorithm Search
      // ----------------------------------------------------------
      // Process cells from the priority queue until it is empty.
      while (!minPQ.isEmpty()) {
            // Get the cell reachable with the minimum time `t` so far.
            const [t, r, c] = minPQ.pop();

            // If we have reached the destination (bottom-right corner),
            // then `t` is the minimum possible time required. Return it.
            if (r === N - 1 && c === N - 1) {
                  return t;
            }

            // Explore all valid neighbors of the current cell (r, c).
            for (const [dr, dc] of directions) {
                  const nr = r + dr;
                  const nc = c + dc;

                  // Check if the neighbor is out of bounds or has already been visited.
                  if (
                        nr < 0 ||
                        nc < 0 ||
                        nr >= N ||
                        nc >= N ||
                        visit.has(`${nr},${nc}`)
                  ) {
                        // If invalid or visited, skip to the next neighbor.
                        continue;
                  }

                  // Mark the valid, unvisited neighbor as visited.
                  visit.add(`${nr},${nc}`);

                  // The time for the new path is the maximum of:
                  // 1. The time `t` required to reach the current cell.
                  // 2. The elevation of the neighbor cell itself.
                  const newTime = Math.max(t, grid[nr][nc]);

                  // Add the neighbor to the priority queue to be explored later.
                  minPQ.push([newTime, nr, nc]);
            }
      }
};
