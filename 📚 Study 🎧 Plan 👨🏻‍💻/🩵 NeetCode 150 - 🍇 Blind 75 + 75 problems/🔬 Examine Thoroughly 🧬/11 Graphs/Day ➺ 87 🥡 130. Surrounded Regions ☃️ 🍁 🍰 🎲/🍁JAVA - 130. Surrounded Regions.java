//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 130

//? ⌚ Time complexity ➺ O(m * n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(m * n)

import java.util.*;

class Solution {
      public void solve(char[][] board) {
            int ROWS = board.length, COLS = board[0].length; // Dimensions of the board

            // ----------------------------------------------------------
            // DFS helper to mark connected 'O's from a starting position
            // ----------------------------------------------------------
            // Implemented below as capture()

            // Step 1: Run DFS for 'O's on the left and right borders
            for (int r = 0; r < ROWS; r++) {
                  if (board[r][0] == 'O') {
                        capture(r, 0, board, ROWS, COLS);
                  }
                  if (board[r][COLS - 1] == 'O') {
                        capture(r, COLS - 1, board, ROWS, COLS);
                  }
            }

            // Step 2: Run DFS for 'O's on the top and bottom borders
            for (int c = 0; c < COLS; c++) {
                  if (board[0][c] == 'O') {
                        capture(0, c, board, ROWS, COLS);
                  }
                  if (board[ROWS - 1][c] == 'O') {
                        capture(ROWS - 1, c, board, ROWS, COLS);
                  }
            }

            // Step 3: Convert all remaining 'O's to 'X' and 'T's back to 'O'
            for (int r = 0; r < ROWS; r++) {
                  for (int c = 0; c < COLS; c++) {
                        if (board[r][c] == 'O') {
                              board[r][c] = 'X';
                        } else if (board[r][c] == 'T') {
                              board[r][c] = 'O';
                        }
                  }
            }
      }

      private void capture(int r, int c, char[][] board, int ROWS, int COLS) {
            // Return if out of bounds or current cell is not 'O'
            if (r < 0 || c < 0 || r == ROWS || c == COLS || board[r][c] != 'O') {
                  return;
            }

            // Temporarily mark 'O' as 'T'
            board[r][c] = 'T';

            // Explore four directions
            capture(r + 1, c, board, ROWS, COLS);
            capture(r - 1, c, board, ROWS, COLS);
            capture(r, c + 1, board, ROWS, COLS);
            capture(r, c - 1, board, ROWS, COLS);
      }
}
