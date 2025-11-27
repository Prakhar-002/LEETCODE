//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2435

//? ⌚ Time complexity ➺ O(r * c * k) 

//? 🧺 Space complexity ➺ O(r * c * k)

var numberOfPaths = function (grid, k) {
      const ROWS = grid.length;            // Number of grid rows
      const COLS = grid[0].length;         // Number of grid columns
      const MOD = 1e9 + 7;                 // Large modulus to prevent overflow

      // Initialize 3D cache array: dimensions ROWS x COLS x k, filled with -1 to indicate unvisited states
      const cache = Array.from({ length: ROWS },
            () => Array.from({ length: COLS }, () => Array(k).fill(-1)));

      // Recursive DFS with memoization:
      // Parameters: current row (r), column (c), current remainder (remain)
      function dfs(r, c, remain) {
            // Out of grid boundaries means no valid path
            if (r >= ROWS || c >= COLS) return 0;

            // Update remainder by adding current cell value mod k
            remain = (remain + grid[r][c]) % k;

            // Base case: reached bottom-right cell, return 1 if remainder zero (valid path), else 0
            if (r === ROWS - 1 && c === COLS - 1) {
                  return remain === 0 ? 1 : 0;
            }

            // If result already computed for this state, return cached value
            if (cache[r][c][remain] !== -1) return cache[r][c][remain];

            // Explore down and right paths recursively
            let down = dfs(r + 1, c, remain) % MOD;
            let right = dfs(r, c + 1, remain) % MOD;

            // Cache the total valid paths count mod MOD
            cache[r][c][remain] = (down + right) % MOD;

            return cache[r][c][remain];
      }

      // Initiate DFS from top-left corner with remainder 0
      return dfs(0, 0, 0);
};
