//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 130

//? ⌚ Time complexity ➺ O(m * n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(m * n)

var solve = function (board) {
      // Get the number of rows and columns in the board
      let ROWS = board.length,
            COLS = board[0].length;

      // ----------------------------------------------------------
      // DFS helper function to mark connected 'O's from a cell
      // ----------------------------------------------------------
      const capture = (r, c) => {
            // If out of bounds or the cell is not 'O', stop recursion
            if (
                  r < 0 ||
                  c < 0 ||
                  r == ROWS ||
                  c == COLS ||
                  board[r][c] !== 'O'
            ) {
                  return;
            }

            // Temporarily mark 'O' as 'T' to indicate it's safe
            board[r][c] = 'T';

            // Explore all 4 directions recursively
            capture(r + 1, c); // Down
            capture(r - 1, c); // Up
            capture(r, c + 1); // Right
            capture(r, c - 1); // Left
      };

      // ----------------------------------------------------------
      // Step 1: Capture all safe 'O's connected to the left & right borders
      // ----------------------------------------------------------
      for (let r = 0; r < ROWS; r++) {
            if (board[r][0] === 'O') capture(r, 0);
            if (board[r][COLS - 1] === 'O') capture(r, COLS - 1);
      }

      // ----------------------------------------------------------
      // Step 2: Capture all safe 'O's connected to the top & bottom borders
      // ----------------------------------------------------------
      for (let c = 0; c < COLS; c++) {
            if (board[0][c] === 'O') capture(0, c);
            if (board[ROWS - 1][c] === 'O') capture(ROWS - 1, c);
      }

      // ----------------------------------------------------------
      // Step 3: Flip all remaining 'O's to 'X' (captured)
      //         and flip all 'T's back to 'O' (safe)
      // ----------------------------------------------------------
      for (let r = 0; r < ROWS; r++) {
            for (let c = 0; c < COLS; c++) {
                  if (board[r][c] === 'O') board[r][c] = 'X';
                  else if (board[r][c] === 'T') board[r][c] = 'O';
            }
      }
};
