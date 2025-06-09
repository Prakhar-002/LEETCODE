//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 79

//? ⌚ Time complexity ➺ O(ROWS * COLS * 4 ^ L) 👉🏻  L = len(WORD)

//? 🧺 Space complexity ➺ O(ROWS * COLS)

#include <vector>
#include <string>

using namespace std;

class Solution {
public:
      bool exist(vector<vector<char>>& board, string word) {
            int ROWS = board.size();
            int COLS = board[0].size();

            // Create a visited matrix to track path
            vector<vector<bool>> path(ROWS, vector<bool>(COLS, false));

            // Start DFS from each cell in the board
            for (int r = 0; r < ROWS; r++) {
                  for (int c = 0; c < COLS; c++) {
                        if (dfs(board, word, path, r, c, 0)) {
                              return true; // If word is found, return true
                        }
                  }
            }
            return false; // Return false if word is not found
      }

private:
      // Depth-First Search (DFS) function
      bool dfs(vector<vector<char>>& board, string& word, vector<vector<bool>>& path, int r, int c, int i) {
            // If we have found all characters of the word, return true
            if (i == word.length()) {
                  return true;
            }

            // Check boundary conditions and character match
            if (r < 0 || c < 0 || r >= board.size() || c >= board[0].size() || 
                  board[r][c] != word[i] || path[r][c]) {
                  return false;
            }

            // Mark the current cell as visited
            path[r][c] = true;

            // Explore all four directions: down, up, right, left
            bool search = (dfs(board, word, path, r + 1, c, i + 1) || 
                                    dfs(board, word, path, r - 1, c, i + 1) || 
                                    dfs(board, word, path, r, c + 1, i + 1) || 
                                    dfs(board, word, path, r, c - 1, i + 1));

            // Backtrack: Unmark the current cell before returning
            path[r][c] = false;

            return search;
      }
};
