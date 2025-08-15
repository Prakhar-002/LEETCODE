#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 130

#? ⌚ Time complexity ➺ O(m * n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(m * n)

from typing import List

class Solution:
      def solve(self, board: List[List[str]]) -> None:
            ROWS, COLS = len(board), len(board[0])  # Dimensions of the board

            # ----------------------------------------------------------
            # DFS helper to mark connected 'O's from a starting position
            # ----------------------------------------------------------
            def capture(r, c):
                  # Return if out of bounds or current cell is not 'O'
                  if (r < 0 or c < 0 or r == ROWS or
                        c == COLS or board[r][c] != "O"):
                        return

                  # Temporarily mark 'O' as 'T' to indicate it's safe
                  board[r][c] = "T"

                  # Explore all four directions (down, up, right, left)
                  capture(r + 1, c)
                  capture(r - 1, c)
                  capture(r, c + 1)
                  capture(r, c - 1)

            # ----------------------------------------------------------
            # Step 1: Run DFS for 'O's on the left and right borders
            # ----------------------------------------------------------
            for r in range(ROWS):
                  if board[r][0] == "O":
                        capture(r, 0)
                  if board[r][COLS - 1] == "O":
                        capture(r, COLS - 1)

            # ----------------------------------------------------------
            # Step 2: Run DFS for 'O's on the top and bottom borders
            # ----------------------------------------------------------
            for c in range(COLS):
                  if board[0][c] == "O":
                        capture(0, c)
                  if board[ROWS - 1][c] == "O":
                        capture(ROWS - 1, c)

            # ----------------------------------------------------------
            # Step 3: Convert all remaining 'O's to 'X' and 'T's back to 'O'
            # ----------------------------------------------------------
            for r in range(ROWS):
                  for c in range(COLS):
                        if board[r][c] == "O":
                              board[r][c] = "X"
                        elif board[r][c] == "T":
                              board[r][c] = "O"
