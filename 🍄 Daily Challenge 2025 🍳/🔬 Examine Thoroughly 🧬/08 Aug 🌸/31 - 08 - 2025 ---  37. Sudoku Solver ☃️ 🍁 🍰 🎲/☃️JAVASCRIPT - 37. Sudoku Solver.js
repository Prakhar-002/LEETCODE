//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 37

//? ⌚ Time complexity ➺ O(9^k * k^2) 👉🏻  k = empty cells

//? 🧺 Space complexity ➺ O(k)

var solveSudoku = function (board) {
      // Entry point: modifies board in place
      solve(board);

      // Main solver using backtracking
      function solve(board) {
            for (let i = 0; i < 9; i++) {
                  for (let j = 0; j < 9; j++) {
                        // If cell is empty, try all possible digits
                        if (board[i][j] === '.') {
                              for (let c = 1; c <= 9; c++) {
                                    let charC = c.toString();
                                    // Check if placing digit is valid
                                    if (isPossible(board, i, j, charC)) {
                                          board[i][j] = charC;
                                          // Recurse to solve rest of board
                                          if (solve(board)) return true;
                                          board[i][j] = '.'; // Backtrack
                                    }
                              }

                              // No valid digit found, trigger backtracking
                              return false;
                        }
                  }
            }
            // All cells are filled
            return true;
      }

      // Checks if placing digit c at (row, col) is valid
      function isPossible(board, row, col, c) {
            for (let i = 0; i < 9; i++) {
                  // Check for duplicate in row, column, and 3x3 subgrid
                  if (board[row][i] === c) return false;
                  if (board[i][col] === c) return false;
                  if (board[Math.floor(row / 3) * 3 + Math.floor(i / 3)]
                  [Math.floor(col / 3) * 3 + i % 3] === c) return false;
            }
            return true;
      }
};
