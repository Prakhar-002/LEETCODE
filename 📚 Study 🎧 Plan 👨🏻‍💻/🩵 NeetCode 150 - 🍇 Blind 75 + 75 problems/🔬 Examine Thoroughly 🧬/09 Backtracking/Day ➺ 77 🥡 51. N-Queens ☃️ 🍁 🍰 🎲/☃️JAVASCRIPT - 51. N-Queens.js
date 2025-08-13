//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 51

//? ⌚ Time complexity ➺ O(n!) 

//? 🧺 Space complexity ➺ O(n ^ 2)

var solveNQueens = function (n) {
      // Sets to track occupied columns and diagonals
      let cols = new Set();     // Columns
      let posDiag = new Set();  // r + c
      let negDiag = new Set();  // r - c

      // Create chessboard filled with '.'
      let board = Array.from({ length: n }, () => Array(n).fill('.'));

      let res = []; // Stores all valid configurations

      function backtrack(r) {
            // ----------------------------------------------------------
            // Base Case:
            // If all rows are filled, push a copy of board to result
            // ----------------------------------------------------------
            if (r === n) {
                  res.push(board.map(row => row.join("")));
                  return;
            }

            // ----------------------------------------------------------
            // Try placing queen in each column of row r
            // ----------------------------------------------------------
            for (let c = 0; c < n; c++) {
                  // Skip if attacked
                  if (cols.has(c) || posDiag.has(r + c) || negDiag.has(r - c)) {
                        continue;
                  }

                  // ---------------------------------------------------
                  // Place queen and mark attacks
                  // ---------------------------------------------------
                  cols.add(c);
                  posDiag.add(r + c);
                  negDiag.add(r - c);
                  board[r][c] = 'Q';

                  backtrack(r + 1);

                  // ---------------------------------------------------
                  // Backtrack: unmark and remove queen
                  // ---------------------------------------------------
                  cols.delete(c);
                  posDiag.delete(r + c);
                  negDiag.delete(r - c);
                  board[r][c] = '.';
            }
      }

      backtrack(0);
      return res;
};
