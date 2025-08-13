//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 51

//? ⌚ Time complexity ➺ O(n!) 

//? 🧺 Space complexity ➺ O(n ^ 2)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
      vector<vector<string>> solveNQueens(int n) {
            // Sets for attacked columns and diagonals
            unordered_set<int> cols;    // Columns
            unordered_set<int> posDiag; // r + c
            unordered_set<int> negDiag; // r - c

            // Initialize board with '.'
            vector<string> board(n, string(n, '.'));

            vector<vector<string>> res;
            backtrack(0, n, board, cols, posDiag, negDiag, res);
            return res;
      }

private:
      void backtrack(int r, int n, vector<string>& board,
                  unordered_set<int>& cols, unordered_set<int>& posDiag, unordered_set<int>& negDiag,
                  vector<vector<string>>& res) {
            // ----------------------------------------------------------
            // Base Case: All rows filled → Save current configuration
            // ----------------------------------------------------------
            if (r == n) {
                  res.push_back(board);
                  return;
            }

            // ----------------------------------------------------------
            // Try all columns in row r
            // ----------------------------------------------------------
            for (int c = 0; c < n; c++) {
                  // Skip if column or diagonals under attack
                  if (cols.count(c) || posDiag.count(r + c) || negDiag.count(r - c)) {
                        continue;
                  }

                  // ---------------------------------------------------
                  // Place queen and mark attacks
                  // ---------------------------------------------------
                  cols.insert(c);
                  posDiag.insert(r + c);
                  negDiag.insert(r - c);
                  board[r][c] = 'Q';

                  backtrack(r + 1, n, board, cols, posDiag, negDiag, res);

                  // ---------------------------------------------------
                  // Backtrack: remove queen and unmark attacks
                  // ---------------------------------------------------
                  cols.erase(c);
                  posDiag.erase(r + c);
                  negDiag.erase(r - c);
                  board[r][c] = '.';
            }
      }
};
