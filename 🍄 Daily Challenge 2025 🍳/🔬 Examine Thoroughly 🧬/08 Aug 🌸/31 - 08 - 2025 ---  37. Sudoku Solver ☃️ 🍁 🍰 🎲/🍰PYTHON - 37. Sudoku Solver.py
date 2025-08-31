#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 37

#? ⌚ Time complexity ➺ O(9^k * k^2) 👉🏻  k = empty cells

#? 🧺 Space complexity ➺ O(k)

from collections import defaultdict
from typing import List

class Solution:
      def solveSudoku(self, board: List[List[str]]) -> None:
            """
            Solves the Sudoku puzzle by modifying the board in-place.
            """

            # Initialize sets to keep track of digits already used in each row, column, and grid
            rows, cols = defaultdict(set), defaultdict(set)
            grids = defaultdict(set)  # grids identified by (row//3, col//3)

            one_nine = set([str(i) for i in range(1, 10)])  # Possible digits '1'..'9'
            fill = []  # List of empty cells (with '.')

            # Preprocessing: fill sets with existing digits from the initial board
            for r in range(9):
                  for c in range(9):
                        if board[r][c] != '.':
                              # Mark digit as used in row, column and grid
                              rows[r].add(board[r][c])
                              cols[c].add(board[r][c])
                              grids[(r // 3, c // 3)].add(board[r][c])
                        else:
                              fill.append((r, c))  # Track positions to fill

            def dfs(i):
                  """
                  Depth-first search with backtracking to fill empty cells from index i onwards.
                  """
                  # Base Case: all empty cells filled successfully
                  if i == len(fill):
                        return True

                  r, c = fill[i]
                  # Calculate possible digits for current empty cell excluding those in row, col, and grid
                  options = one_nine - rows[r] - cols[c] - grids[(r // 3, c // 3)]

                  # If no options available, cannot fill this cell, backtrack
                  if not options:
                        return False

                  # Try each possible digit for the current empty cell
                  for op in options:
                        # Place digit op tentatively
                        rows[r].add(op)
                        cols[c].add(op)
                        grids[(r // 3, c // 3)].add(op)
                        board[r][c] = op

                        # Recur to fill the next empty cell
                        if not dfs(i + 1):
                              # If subsequent path fails, backtrack changes for current cell
                              rows[r].remove(op)
                              cols[c].remove(op)
                              grids[(r // 3, c // 3)].remove(op)
                              board[r][c] = '.'
                        else:
                              # If successful, break out of loop early
                              break
                  else:
                        # If no digit works for this cell, return False to backtrack
                        return False
                  
                  return True

            # Start backtracking from first empty cell
            dfs(0)
