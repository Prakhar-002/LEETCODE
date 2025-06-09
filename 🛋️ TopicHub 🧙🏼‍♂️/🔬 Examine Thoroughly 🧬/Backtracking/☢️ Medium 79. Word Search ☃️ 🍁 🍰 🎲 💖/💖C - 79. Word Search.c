//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 79

//? ⌚ Time complexity ➺ O(ROWS * COLS * 4 ^ L) 👉🏻  L = len(WORD)

//? 🧺 Space complexity ➺ O(ROWS * COLS)

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Function prototype for DFS
bool dfs(char** board, int rows, int cols, char* word, int r, int c, int i, bool** path);

// Main function to check if the word exists in the board
bool exist(char** board, int boardSize, int* boardColSize, char* word) {
      // Create a visited path matrix
      bool** path = (bool**)malloc(boardSize * sizeof(bool*));
      for (int r = 0; r < boardSize; r++) {
            path[r] = (bool*)malloc(boardColSize[r] * sizeof(bool));
            for (int c = 0; c < boardColSize[r]; c++) {
                  path[r][c] = false;
            }
      }

      // Start DFS from each cell in the board
      for (int r = 0; r < boardSize; r++) {
            for (int c = 0; c < boardColSize[r]; c++) {
                  if (dfs(board, boardSize, boardColSize[r], word, r, c, 0, path)) {
                        // Free memory before returning
                        for (int k = 0; k < boardSize; k++) {
                              free(path[k]);
                        }
                        free(path);
                        return true;
                  }
            }
      }

      // Free memory before returning false
      for (int k = 0; k < boardSize; k++) {
            free(path[k]);
      }
      free(path);

      return false;
}

// Depth-First Search (DFS) function
bool dfs(char** board, int rows, int cols, char* word, int r, int c, int i, bool** path) {
      // If we have found all characters of the word, return true
      if (word[i] == '\0') {
            return true;
      }

      // Check boundary conditions and character match
      if (r < 0 || c < 0 || r >= rows || c >= cols || 
            board[r][c] != word[i] || path[r][c]) {
            return false;
      }

      // Mark the current cell as visited
      path[r][c] = true;

      // Explore all four directions: down, up, right, left
      bool search = (dfs(board, rows, cols, word, r + 1, c, i + 1, path) || 
                        dfs(board, rows, cols, word, r - 1, c, i + 1, path) || 
                        dfs(board, rows, cols, word, r, c + 1, i + 1, path) || 
                        dfs(board, rows, cols, word, r, c - 1, i + 1, path));

      // Backtrack: Unmark the current cell before returning
      path[r][c] = false;

      return search;
}
