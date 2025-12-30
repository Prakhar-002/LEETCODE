
//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 840

//? ⌚ Time complexity ➺ O(r * c) 👉🏻  r = rows, c = cols

//? 🧺 Space complexity ➺ O(1)

var numMagicSquaresInside = function (grid) {
      const ROWS = grid.length;
      const COLS = grid[0].length;

      function isMagic(row, col) {
            // Ensure for 1 to 9
            const values = new Set();
            for (let i = row; i < row + 3; i++) {
                  for (let j = col; j < col + 3; j++) {
                        // if already in values or out of 1 - 9 range
                        if (values.has(grid[i][j]) || grid[i][j] < 1 || grid[i][j] > 9) {
                              return 0;
                        }
                        // else add to our set
                        values.add(grid[i][j]);
                  }
            }

            // checking every row have sum 15
            for (let i = row; i < row + 3; i++) {
                  if (grid[i].slice(col, col + 3).reduce((a, b) => a + b) !== 15) {
                        return 0;
                  }
            }

            // checking every col have sum 15
            for (let j = col; j < col + 3; j++) {
                  if (grid[row][j] + grid[row + 1][j] + grid[row + 2][j] !== 15) {
                        return 0;
                  }
            }

            // checking every diagonals have sum 15
            if (
                  grid[row][col] + grid[row + 1][col + 1] + grid[row + 2][col + 2] !== 15 ||
                  grid[row][col + 2] + grid[row + 1][col + 1] + grid[row + 2][col] !== 15
            ) {
                  return 0;
            }

            // if everything is right return 1
            return 1;
      }

      let magicSquares = 0;

      // checking for every possibility
      for (let row = 0; row < ROWS - 2; row++) {
            for (let col = 0; col < COLS - 2; col++) {
                  magicSquares += isMagic(row, col);
            }
      }

      return magicSquares;
};
