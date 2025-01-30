//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 36

//? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = 9

//? 🧺 Space complexity ➺ O(n ^ 2)

var isValidSudoku = function (board) {
      // Use maps to track values in rows, columns, and 3x3 squares
      const rows = new Map();
      const cols = new Map();
      const squares = new Map();

      // Initialize sets in maps
      for (let i = 0; i < 9; i++) {
            rows.set(i, new Set());
            cols.set(i, new Set());
      }

      for (let r = 0; r < 9; r++) {
            for (let c = 0; c < 9; c++) {
                  const val = board[r][c];

                  // Skip empty cells
                  if (val === '.') continue;

                  // Get the square key as "row / 3 - col / 3"
                  const squareKey = `${Math.floor(r / 3)}-${Math.floor(c / 3)}`;

                  // Initialize square set if not already present
                  if (!squares.has(squareKey)) {
                        squares.set(squareKey, new Set());
                  }

                  // Check if the value already exists in row, column, or square
                  if (rows.get(r).has(val) ||
                        cols.get(c).has(val) ||
                        squares.get(squareKey).has(val)) {
                        return false;
                  }

                  // Add the value to the row, column, and square
                  rows.get(r).add(val);
                  cols.get(c).add(val);
                  squares.get(squareKey).add(val);
            }
      }
      // If no duplicates found, the board is valid
      return true;
}