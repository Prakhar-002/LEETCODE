//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 37

//? ⌚ Time complexity ➺ O(9^k * k^2) 👉🏻  k = empty cells

//? 🧺 Space complexity ➺ O(k)

class Solution {
public:
      // Public interface to start the solving process
      void solveSudoku(vector<vector<char>>& board) {
            solve(board);  // Begin recursive backtracking
      }

private:
      // Recursive backtracking solver
      bool solve(vector<vector<char>>& board) {
            // Iterate through every cell in the 9x9 board
            for (int i = 0; i < 9; i++) {
                  for (int j = 0; j < 9; j++) {
                        // When encountering an empty cell '.'
                        if (board[i][j] == '.') {
                              // Try every digit from '1' to '9'
                              for (char c = '1'; c <= '9'; c++) {
                                    // Check if placing c at board[i][j] is valid
                                    if (isPossible(board, i, j, c)) {
                                          board[i][j] = c; // Place digit c

                                          // Recursively try to solve the rest of the board
                                          if (solve(board)) 
                                                return true;  // If solved, propagate true up the call stack

                                          board[i][j] = '.'; // Otherwise, backtrack (reset cell)
                                    }
                              }

                              // If no digit leads to a solution, backtrack
                              return false;
                        }
                  }
            }

            // If no empty cells left, puzzle is solved
            return true;
      }

      // Checks if placing digit c at (row, col) is valid
      bool isPossible(vector<vector<char>>& board, int row, int col, char c) {
            // Iterate over the row, column, and 3x3 sub-box
            for (int i = 0; i < 9; i++) {
                  // Check if digit c already exists in the row
                  if (board[row][i] == c) return false;

                  // Check if digit c already exists in the column
                  if (board[i][col] == c) return false;

                  // Check if digit c already exists in the 3x3 box
                  if (board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == c) return false;
            }
            // Placement is valid if digit c not found in row, col, or box
            return true;
      }
};
