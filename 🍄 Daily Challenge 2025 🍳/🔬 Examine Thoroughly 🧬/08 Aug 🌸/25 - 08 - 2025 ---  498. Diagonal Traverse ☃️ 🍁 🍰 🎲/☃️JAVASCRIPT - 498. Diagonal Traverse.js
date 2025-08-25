//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 498

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(matrix)

//? 🧺 Space complexity ➺ O(1)

var findDiagonalOrder = function (matrix) {
      // Handle empty input
      if (!matrix || matrix.length === 0 || matrix[0].length === 0) {
            return [];
      }

      const n = matrix.length, m = matrix[0].length;
      // Start at top-left; direction = +1 means up-right, -1 means down-left
      let row = 0, col = 0, direction = 1;
      const result = [];

      // Visit every cell exactly once
      while (result.length < n * m) {
            result.push(matrix[row][col]);

            // Next step along current diagonal
            const newRow = row - direction;
            const newCol = col + direction;

            // If next step is out of bounds, snap to border and flip direction
            if (newRow < 0 || newRow >= n || newCol < 0 || newCol >= m) {
                  if (direction === 1) { // moving up-right
                        // If at last column, go down; otherwise go right
                        if (col === m - 1) {
                              row += 1;
                        } else {
                              col += 1;
                        }
                  } else { // moving down-left
                        // If at last row, go right; otherwise go down
                        if (row === n - 1) {
                              col += 1;
                        } else {
                              row += 1;
                        }
                  }
                  direction = -direction; // flip zigzag direction
            } else {
                  // Still in bounds: continue along the diagonal
                  row = newRow;
                  col = newCol;
            }
      }

      return result;
};
