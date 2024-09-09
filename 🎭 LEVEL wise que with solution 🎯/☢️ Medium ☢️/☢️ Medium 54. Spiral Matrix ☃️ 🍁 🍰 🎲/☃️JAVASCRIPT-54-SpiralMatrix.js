//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 54

//? ⌚ Time complexity ➺ O(m * n) 👉🏻 m = No. o rows n = No. of columns

//? 🧺 Space complexity ➺ O(1)

var spiralOrder = function (matrix) {
      // initializes an array to store value of matrix in spiral way
      const matrixList = [];

      // An index indicating the starting row of the current layer being filled
      let startRow = 0;
      // An index indicating the ending row of the current layer being filled
      let endRow = matrix.length - 1;
      // An index indicating the starting column of the current layer being filled
      let startCol = 0;
      // An index indicating the ending column of the current layer being filled
      let endCol = matrix[0].length - 1;

      // uses a while loop to continue until we traverse the whole matrix,
      // determined by `startRow <= endRow` and `startCol <= endCol`.
      while (startRow <= endRow && startCol <= endCol) {

            // Top Row adding ...
            for (let j = startCol; j <= endCol; j++) {
                  // add top row first
                  matrixList.push(matrix[startRow][j]);
            }

            // Right Column adding ...
            for (let i = startRow + 1; i <= endRow; i++) {
                  // After the top row, it add down the rightmost column
                  matrixList.push(matrix[i][endCol]);
            }

            // Bottom Row adding...
            for (let j = endCol - 1; j >= startCol; j--) {
                  // if there is only one row left, in which case
                  if (startRow === endRow) {
                        // it breaks out of the loop to avoid adding the same value twice
                        break;
                  }

                  // After the rightmost column, it add bottom row of the current layer
                  matrixList.push(matrix[endRow][j]);
            }

            // Left Column adding...
            for (let i = endRow - 1; i >= startRow + 1; i--) {
                  // if there is only one column left, in which case
                  if (startCol === endCol) {
                        // it breaks out of the loop to avoid adding the same value twice
                        break;
                  }

                  // After bottom row of the current layer, it add leftmost column
                  matrixList.push(matrix[i][startCol]);
            }

            // Increment and Decrement Boundaries => to prepare for the next inner layer

            // incrementing `startRow` and `startCol`,
            startRow++;
            startCol++;

            // decrementing `endRow` and `endCol`
            endRow--;
            endCol--;
      }

      // returns the filled `matrixList`
      return matrixList;
};

