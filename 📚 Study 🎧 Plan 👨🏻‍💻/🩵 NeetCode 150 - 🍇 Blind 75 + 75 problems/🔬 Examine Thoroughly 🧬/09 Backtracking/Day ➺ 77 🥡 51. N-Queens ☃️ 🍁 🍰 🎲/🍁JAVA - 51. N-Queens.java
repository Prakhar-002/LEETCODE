//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 51

//? ⌚ Time complexity ➺ O(n!) 

//? 🧺 Space complexity ➺ O(n ^ 2)

class Solution {
      public List<List<String>> solveNQueens(int n) {
            // Sets to track which columns and diagonals are occupied
            Set<Integer> cols = new HashSet<>(); // Columns
            Set<Integer> posDiag = new HashSet<>(); // r + c
            Set<Integer> negDiag = new HashSet<>(); // r - c

            // Create an n x n board filled with '.'
            char[][] board = new char[n][n];
            for (char[] row : board) {
                  Arrays.fill(row, '.');
            }

            List<List<String>> res = new ArrayList<>(); // Stores solutions
            backtrack(0, n, board, cols, posDiag, negDiag, res);
            return res;
      }

      private void backtrack(int r, int n, char[][] board,
                  Set<Integer> cols, Set<Integer> posDiag, Set<Integer> negDiag,
                  List<List<String>> res) {
            // ----------------------------------------------------------
            // Base Case:
            // Placed queens in all rows → Save board configuration
            // ----------------------------------------------------------
            if (r == n) {
                  List<String> copy = new ArrayList<>();
                  for (char[] row : board) {
                        copy.add(new String(row));
                  }
                  res.add(copy);
                  return;
            }

            // ----------------------------------------------------------
            // Try placing a queen in each column of row r
            // ----------------------------------------------------------
            for (int c = 0; c < n; c++) {
                  // Skip if column or diagonals attacked
                  if (cols.contains(c) || posDiag.contains(r + c) || negDiag.contains(r - c)) {
                        continue;
                  }

                  // ---------------------------------------------------
                  // Place queen and mark attacks
                  // ---------------------------------------------------
                  cols.add(c);
                  posDiag.add(r + c);
                  negDiag.add(r - c);
                  board[r][c] = 'Q';

                  backtrack(r + 1, n, board, cols, posDiag, negDiag, res);

                  // ---------------------------------------------------
                  // Backtrack: unmark and remove queen
                  // ---------------------------------------------------
                  cols.remove(c);
                  posDiag.remove(r + c);
                  negDiag.remove(r - c);
                  board[r][c] = '.';
            }
      }
}
