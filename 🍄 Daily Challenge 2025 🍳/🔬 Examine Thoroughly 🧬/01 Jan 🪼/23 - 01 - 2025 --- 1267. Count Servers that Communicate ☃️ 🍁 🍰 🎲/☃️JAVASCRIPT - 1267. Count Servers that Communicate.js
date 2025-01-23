//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1267

//? ⌚ Time complexity ➺ O(n * m) 👉🏻  n = len(grid)

//? 🧺 Space complexity ➺ O(n + m)  ->  m = lem(grid[0])

var countServers = function (grid) {
      // Determine the number of rows and columns in the grid
      const ROWS = grid.length;
      const COLS = grid[0].length;

      // Arrays to store the count of servers in each row and column
      const rowCount = new Array(ROWS).fill(0);
      const colCount = new Array(COLS).fill(0);

      // First pass: count the servers in each row and column
      for (let r = 0; r < ROWS; r++) {
            for (let c = 0; c < COLS; c++) {
                  if (grid[r][c] === 1) {  // If there is a server at this position
                        rowCount[r]++;    // Increment the count for the row
                        colCount[c]++;    // Increment the count for the column
                  }
            }
      }

      // Variable to count the servers that can communicate
      let communicate = 0;

      // Second pass: check if a server can communicate with another
      for (let r = 0; r < ROWS; r++) {
            for (let c = 0; c < COLS; c++) {
                  // A server can communicate if it's not isolated
                  // (i.e., there is more than one server in its row or column)
                  if (grid[r][c] === 1 && (rowCount[r] > 1 || colCount[c] > 1)) {
                        communicate++;  // Increment the count of communicating servers
                  }
            }
      }

      return communicate;  // Return the total count of communicating servers
}