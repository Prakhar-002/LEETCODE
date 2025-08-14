//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 200

//? ⌚ Time complexity ➺ O(n * m) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n * m)

var numIslands = function (grid) {
      // Possible movement directions: down, up, right, left
      const directions = [[1, 0], [-1, 0], [0, 1], [0, -1]];
      const ROWS = grid.length, COLS = grid[0].length;
      let islands = 0; // Count of islands found

      // ----------------------------------------------------------
      // BFS to traverse all connected land cells starting at (r, c)
      // ----------------------------------------------------------
      function bfs(r, c) {
            const q = [];
            grid[r][c] = '0'; // Mark visited
            q.push([r, c]);

            while (q.length) {
                  const [row, col] = q.shift();

                  // Explore all four directions
                  for (let [dr, dc] of directions) {
                        const nr = row + dr;
                        const nc = col + dc;
                        // Skip OOB or water
                        if (nr < 0 || nc < 0 || nr >= ROWS || nc >= COLS || grid[nr][nc] === '0') {
                              continue;
                        }
                        q.push([nr, nc]);
                        grid[nr][nc] = '0'; // Mark visited
                  }
            }
      }

      // ----------------------------------------------------------
      // Scan the whole grid
      // ----------------------------------------------------------
      for (let r = 0; r < ROWS; r++) {
            for (let c = 0; c < COLS; c++) {
                  if (grid[r][c] === '1') {
                        bfs(r, c);
                        islands++;
                  }
            }
      }

      return islands;
};
