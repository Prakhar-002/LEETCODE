//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2352

//? ⌚ Time complexity ➺ O(n * m) 👉🏻  n = No. of rows

//? 🧺 Space complexity ➺ O(n * m)  -> m = No. of columns

var equalPairs = function (grid) {
      // Step 1: Convert each row into a tuple (using arrays)
      const rowArray = [];
      for (let i = 0; i < grid.length; i++) {
            rowArray.push([...grid[i]]);
      }

      // Step 2: Convert each column into a tuple (using arrays)
      const colArray = [];
      for (let i = 0; i < grid[0].length; i++) {
            const col = [];
            for (let j = 0; j < grid.length; j++) {
                  col.push(grid[j][i]);
            }
            colArray.push(col);
      }

      // Step 3: Count the frequency of each row and column using Map
      const rowCount = new Map();
      for (let row of rowArray) {
            const rowKey = row.toString();
            rowCount.set(rowKey, (rowCount.get(rowKey) || 0) + 1);
      }

      const colCount = new Map();
      for (let col of colArray) {
            const colKey = col.toString();
            colCount.set(colKey, (colCount.get(colKey) || 0) + 1);
      }

      // Step 4: Calculate the number of equal pairs
      let result = 0;
      for (let [row, rowFrequency] of rowCount) {
            if (colCount.has(row)) {
                  result += rowFrequency * colCount.get(row);  // Multiply counts of matching rows and columns
            }
      }

      return result;
}