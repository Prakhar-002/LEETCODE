//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3546

//? ⌚ Time complexity ➺ O(n * m) 

//? 🧺 Space complexity ➺ O(n + m)

// Approach: Row/col prefix sums to check equal-half partition

var canPartitionGrid = function (grid) {
      const ROWS = grid.length;
      const COLS = grid[0].length;

      const rows = new Array(ROWS).fill(0);
      const cols = new Array(COLS).fill(0);
      let total = 0;

      // ---------- Build row sums, col sums, and total ----------
      for (let i = 0; i < ROWS; i++) {
            for (let j = 0; j < COLS; j++) {
                  rows[i] += grid[i][j];
                  cols[j] += grid[i][j];
                  total += grid[i][j];
            }
      }

      // Odd total can never be split into two equal halves
      if (total % 2 === 1)
            return false;

      // ---------- Horizontal cuts: accumulate row by row ----------
      // Check if upper portion == lower portion at any row boundary
      let upper = 0;

      for (let i = 0; i < ROWS - 1; i++) {
            upper += rows[i];
            if (upper === total - upper)
                  return true;
      }

      // ---------- Vertical cuts: accumulate col by col ----------
      // Check if left portion == right portion at any col boundary
      let left = 0;

      for (let j = 0; j < COLS - 1; j++) {
            left += cols[j];
            if (left === total - left)
                  return true;
      }

      return false;
};