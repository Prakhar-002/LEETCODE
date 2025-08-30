#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 36

#? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = 9

#? 🧺 Space complexity ➺ O(n ^ 2)

from collections import defaultdict
from typing import List

class Solution:
      def isValidSudoku(self, board: List[List[str]]) -> bool:
            # Use defaultdicts to track values in rows, columns, and 3x3 squares
            cols = defaultdict(set)          # Columns tracking
            rows = defaultdict(set)          # Rows tracking
            squares = defaultdict(set)       # 3x3 squares tracking (row // 3, col // 3)

            # Traverse each cell in the 9x9 board
            for r in range(9):
                  for c in range(9):
                        # Skip empty cells
                        if board[r][c] == '.':
                              continue

                        # Check if the number already exists in the row, column, or 3x3 square
                        if (board[r][c] in rows[r] or
                              board[r][c] in cols[c] or
                              board[r][c] in squares[(r // 3, c // 3)]):
                              return False

                        # Add the number to the corresponding row, column, and square
                        rows[r].add(board[r][c])
                        cols[c].add(board[r][c])
                        squares[(r // 3, c // 3)].add(board[r][c])

            # If no duplicates found, the board is valid
            return True
