//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 994

//? ⌚ Time complexity ➺ O(n * m) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n * m)

var orangesRotting = function (grid) {
      const ROWS = grid.length, COLS = grid[0].length;

      const q = [];
      let fresh = 0; // Count of fresh oranges
      let time = 0;  // Minutes elapsed

      // ----------------------------------------------------------
      // Step 1: Enqueue all rotten oranges, count fresh oranges
      // ----------------------------------------------------------
      for (let r = 0; r < ROWS; r++) {
            for (let c = 0; c < COLS; c++) {
                  if (grid[r][c] === 1) fresh++;
                  if (grid[r][c] === 2) q.push([r, c]);
            }
      }

      const directions = [[0, 1], [0, -1], [1, 0], [-1, 0]];

      // ----------------------------------------------------------
      // Step 2: BFS to rot all reachable fresh oranges
      // ----------------------------------------------------------
      while (q.length && fresh > 0) {
            let size = q.length;
            for (let i = 0; i < size; i++) {
                  const [r, c] = q.shift();

                  for (let [dr, dc] of directions) {
                        const row = r + dr, col = c + dc;
                        if (row < 0 || row === ROWS || col < 0 || col === COLS || grid[row][col] !== 1)
                              continue;

                        grid[row][col] = 2;
                        q.push([row, col]);
                        fresh--;
                  }
            }
            time++;
      }

      // If all fresh oranges are gone, return time, else -1.
      return fresh === 0 ? time : -1;
};
