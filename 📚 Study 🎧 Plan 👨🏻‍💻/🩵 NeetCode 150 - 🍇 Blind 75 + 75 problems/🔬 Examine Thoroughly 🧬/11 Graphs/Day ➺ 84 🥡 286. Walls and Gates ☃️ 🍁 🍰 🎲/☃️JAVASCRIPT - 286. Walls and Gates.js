//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 286

//? ⌚ Time complexity ➺ O(m * n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(m * n)

var islandsAndTreasure = function (grid) {
      const ROWS = grid.length, COLS = grid[0].length;
      const visit = new Set();
      const q = [];

      // Step 1: Add all gates (0) to the BFS queue
      for (let r = 0; r < ROWS; r++) {
            for (let c = 0; c < COLS; c++) {
                  if (grid[r][c] === 0) {
                        q.push([r, c]);
                        visit.add(r + "," + c);
                  }
            }
      }

      let dist = 0;
      const dirs = [[1, 0], [-1, 0], [0, 1], [0, -1]];

      // Step 2: BFS from all gates
      while (q.length) {
            let size = q.length;
            for (let i = 0; i < size; i++) {
                  const [r, c] = q.shift();
                  grid[r][c] = dist;

                  for (let [dr, dc] of dirs) {
                        let nr = r + dr;
                        let nc = c + dc;
                        let key = nr + "," + nc;

                        if (nr < 0 || nc < 0 || nr >= ROWS || nc >= COLS ||
                              visit.has(key) || grid[nr][nc] === -1) {
                              continue;
                        }
                        visit.add(key);
                        q.push([nr, nc]);
                  }
            }
            dist++;
      }
};
