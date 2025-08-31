//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 37

//? ⌚ Time complexity ➺ O(9^k * k^2) 👉🏻  k = empty cells

//? 🧺 Space complexity ➺ O(k)

class Solution {
      // Entry point: modifies the board in place to a solved state
      public void solveSudoku(char[][] board) {
            solve(board);
      }

      // Main backtracking solver
      private boolean solve(char[][] board) {
            // Traverse every cell of the board
            for (int i = 0; i < 9; i++) {
                  for (int j = 0; j < 9; j++) {
                        // If the cell is empty ('.'), attempt to fill it
                        if (board[i][j] == '.') {
                              // Try every possible digit 1-9
                              for (char c = '1'; c <= '9'; c++) {
                                    // Check if it's valid to place digit c here
                                    if (isPossible(board, i, j, c)) {
                                          board[i][j] = c; // Place digit

                                          // Continue to solve the rest of the board recursively
                                          if (solve(board)) return true; // If solved, propagate success
                                          else board[i][j] = '.'; // Otherwise, backtrack
                                    }
                              }
                              // If no digit can be placed, trigger backtracking
                              return false;
                        }
                  }
            }

            // If all cells are filled without contradiction, the board is solved
            return true;
      }

      // Checks if placing digit c at (row, col) is valid
      private boolean isPossible(char[][] board, int row, int col, char c) {
            for (int i = 0; i < 9; i++) {
                  // Check row for duplicate
                  if (board[row][i] == c) return false;
                  // Check column for duplicate
                  if (board[i][col] == c) return false;
                  // Check 3x3 subgrid for duplicate
                  if (board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == c) return false;
            }

            // Placement is valid if no duplicates found
            return true;
      }
}
