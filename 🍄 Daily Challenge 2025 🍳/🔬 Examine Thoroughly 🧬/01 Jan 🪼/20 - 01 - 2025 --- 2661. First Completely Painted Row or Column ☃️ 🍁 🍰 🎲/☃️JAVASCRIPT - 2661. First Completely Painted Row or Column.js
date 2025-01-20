//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2661

//? ⌚ Time complexity ➺ O(n * m) 👉🏻  n = len(mat)

//? 🧺 Space complexity ➺ O(n * m)👉🏻  m = len(mat[0])

var firstCompleteIndex = function (arr, mat) {
      // Determine the number of rows and columns in the matrix
      const ROWS = mat.length;
      const COLS = mat[0].length;

      // Create a map to store each matrix element's position (row, column)
      const matToPos = new Map();

      // Populate the map with matrix element positions
      for (let r = 0; r < ROWS; r++) {
            for (let c = 0; c < COLS; c++) {
                  matToPos.set(mat[r][c], [r, c]);
            }
      }

      // Initialize counters for rows and columns to track painted cells
      const rowCount = new Array(ROWS).fill(0);
      const colCount = new Array(COLS).fill(0);

      // Iterate through the `arr` elements
      for (let i = 0; i < arr.length; i++) {
            // Get the position (row, column) of the current element in the matrix
            const [r, c] = matToPos.get(arr[i]);

            // Increment the counters for the respective row and column
            rowCount[r]++;
            colCount[c]++;

            // Check if the current row or column is completely painted
            if (rowCount[r] === COLS || colCount[c] === ROWS) {
                  // Return the current index if a row or column is complete
                  return i;
            }
      }

      // Return -1 if no row or column is completely painted
      return -1;
}