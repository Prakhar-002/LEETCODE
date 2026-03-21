//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3643

//? ⌚ Time complexity ➺ O(k ^ 2) 

//? 🧺 Space complexity ➺ O(1)

var reverseSubmatrix = function (grid, x, y, k) {
      let t = x;           // Top row pointer starting at x
      let b = x + k - 1;  // Bottom row pointer starting at x+k-1

      // ---------- Swap rows from outside in until pointers meet ----------
      while (t < b) {

            // Swap each element column by column within [y, y+k) range
            for (let i = y; i < y + k; i++) {
                  const temp = grid[t][i];
                  grid[t][i] = grid[b][i];
                  grid[b][i] = temp;
            }

            // Move pointers inward
            t++;
            b--;
      }

      return grid;
};