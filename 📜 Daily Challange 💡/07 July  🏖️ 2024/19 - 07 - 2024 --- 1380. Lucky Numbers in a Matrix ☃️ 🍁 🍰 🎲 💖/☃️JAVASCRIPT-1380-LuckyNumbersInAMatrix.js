//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 1380

//? ⌚ Time complexity -> O(n * m) 👉 N = rows , M = columns

//? 🧺 Space complexity -> O(min(n, m)) 👉 Minimum of rows or columns 

var luckyNumbers = function (matrix) {
      const isMaxInColumn = (matrix, number, col) => {
            for (let row = 0; row < matrix.length; row++) {
                  if (matrix[row][col] > number) {
                        return false;
                  }
            }
            return true;
      };

      const findColumn = (matrix, row) => {
            // the the first col is our minCol
            let minCol = 0;
            // and the first val of that row:col is our minNumber
            let minNumber = matrix[row][minCol];

            for (let col = 0; col < matrix[row].length; col++) {
                  // if somewhere in entire columns
                  // we got a number less that our minNumber
                  if (matrix[row][col] < minNumber) {
                        // update our minNumber
                        minNumber = matrix[row][col];
                        // update our minNumber
                        minCol = col;
                  }
            }

            return minCol;
      };

      const luckyNumbers = [];

      for (let row = 0; row < matrix.length; row++) {

            // Find col of the min elem in every row
            const minCol = findColumn(matrix, row);
            // extract the number
            const number = matrix[row][minCol];

            // check if this number also maximum in it's column
            if (isMaxInColumn(matrix, number, minCol)) {
                  luckyNumbers.push(number);
            }
      }

      return luckyNumbers;
};