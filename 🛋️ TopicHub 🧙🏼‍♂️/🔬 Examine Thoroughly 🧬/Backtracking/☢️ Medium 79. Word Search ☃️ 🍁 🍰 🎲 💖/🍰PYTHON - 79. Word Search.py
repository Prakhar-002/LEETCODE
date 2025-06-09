#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 79

#? ⌚ Time complexity ➺ O(ROWS * COLS * 4 ^ L) 👉🏻  L = len(WORD)

#? 🧺 Space complexity ➺ O(ROWS * COLS)

from typing import List

class Solution:
      def exist(self, board: List[List[str]], word: str) -> bool:
            # Get the number of rows and columns in the board
            ROWS, COLS = len(board), len(board[0])

            # Create a visited path matrix to track visited cells
            path = [[False] * COLS for _ in range(ROWS)]

            # Depth-First Search (DFS) function
            def dfs(r, c, i):
                  # If the entire word is found, return True
                  if i == len(word):
                        return True

                  # Boundary conditions and validity check
                  if (r < 0 or c < 0 or 
                        r == ROWS or c == COLS or 
                        word[i] != board[r][c] or 
                        path[r][c]):
                        return False

                  # Mark the current cell as visited
                  path[r][c] = True

                  # Explore all four directions (down, up, right, left)
                  search = (dfs(r + 1, c, i + 1) or 
                              dfs(r - 1, c, i + 1) or
                              dfs(r, c + 1, i + 1) or
                              dfs(r, c - 1, i + 1))

                  # Backtrack: Unmark the current cell
                  path[r][c] = False

                  return search

            # Start DFS from each cell in the board
            for r in range(ROWS):
                  for c in range(COLS):
                        if dfs(r, c, 0):
                              return True

            return False
