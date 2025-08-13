#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 51

#? ⌚ Time complexity ➺ O(n!) 

#? 🧺 Space complexity ➺ O(n ^ 2)

from typing import List 

class Solution:
      def solveNQueens(self, n: int) -> List[List[str]]:
            # Sets to track columns and diagonals already occupied by a queen
            cols = set()      # Columns where queens are placed
            posDiag = set()   # Positive diagonals (r + c) occupied
            negDiag = set()   # Negative diagonals (r - c) occupied

            # Chessboard initialized with '.'
            board = [["."] * n for _ in range(n)]

            res = []  # Final result containing all valid boards

            def backtrack(r):
                  # ----------------------------------------------------------
                  # Base Case:
                  # If we've placed queens in all rows, store the board
                  # ----------------------------------------------------------
                  if r == n:
                        # Convert board rows from list of chars to strings
                        copy = ["".join(row) for row in board]
                        res.append(copy)
                        return

                  # ----------------------------------------------------------
                  # Try placing a queen in each column of the current row r
                  # ----------------------------------------------------------
                  for c in range(n):
                        # Skip if column or diagonals are already under attack
                        if c in cols or (r + c) in posDiag or (r - c) in negDiag:
                              continue

                        # Place queen: mark column and diagonals as used
                        cols.add(c)
                        posDiag.add(r + c)
                        negDiag.add(r - c)
                        board[r][c] = 'Q'

                        # Move to next row
                        backtrack(r + 1)

                        # Backtrack: remove queen and unmark attack paths
                        cols.remove(c)
                        posDiag.remove(r + c)
                        negDiag.remove(r - c)
                        board[r][c] = '.'

            # Start searching from row 0
            backtrack(0)
            return res
