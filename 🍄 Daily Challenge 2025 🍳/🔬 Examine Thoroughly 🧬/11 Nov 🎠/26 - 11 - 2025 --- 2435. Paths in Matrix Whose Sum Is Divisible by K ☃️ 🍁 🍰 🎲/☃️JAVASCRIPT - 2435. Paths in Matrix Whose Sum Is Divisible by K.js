//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2435

//? ⌚ Time complexity ➺ O(r * c * k) 

//? 🧺 Space complexity ➺ O(r * c * k)

// JavaScript version with corrected logic matching Python
var numberOfPaths = function (grid, k) {
      const ROWS = grid.length;
      const COLS = grid[0].length;
      const MOD = 1e9 + 7;

      const cache = Array.from({ length: ROWS },
            () => Array.from({ length: COLS }, () => Array(k).fill(-1)));

      function dfs(r, c, remain) {
            if (r >= ROWS || c >= COLS) return 0;  // Boundary check

            remain = (remain + grid[r][c]) % k;   // Update remainder including current cell

            if (r === ROWS - 1 && c === COLS - 1) {
                  // Check if path sum mod k is zero at target
                  return remain === 0 ? 1 : 0;
            }

            if (cache[r][c][remain] !== -1) return cache[r][c][remain];

            let down = dfs(r + 1, c, remain) % MOD;
            let right = dfs(r, c + 1, remain) % MOD;

            cache[r][c][remain] = (down + right) % MOD;

            return cache[r][c][remain];
      }

      return dfs(0, 0, 0);
};
