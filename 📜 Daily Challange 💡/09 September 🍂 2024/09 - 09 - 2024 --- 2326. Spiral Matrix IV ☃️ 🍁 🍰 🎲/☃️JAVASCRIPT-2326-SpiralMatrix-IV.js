//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2326

//? ⌚ Time complexity ➺ O(m * n) 👉🏻 m = No. o rows n = No. of columns

//? 🧺 Space complexity ➺ O(1) 

var spiralMatrix = function (m, n, head) {
      // initializes a 2D array `matrix` of integers with dimensions `m` by `n`
      // To store linked list value in this matrix in spiral format  
      const matrix = Array(m).fill().map(() => Array(n).fill(-1));

      // An index indicating the starting row of the current layer being filled
      let startRow = 0;
      // An index indicating the ending row of the current layer being filled
      let endRow = matrix.length - 1;
      // An index indicating the starting column of the current layer being filled
      let startCol = 0;
      // An index indicating the ending column of the current layer being filled
      let endCol = matrix[0].length - 1;

      // uses a while loop to continue the spiral process as long as there is a layer to fill, 
      // determined by `startRow <= endRow` and `startCol <= endCol`.
      while (startRow <= endRow && startCol <= endCol) {

            // Top Row Filling ... 
            for (let j = startCol; j <= endCol; j++) {
                  //  filling the top row with linkedList value if not head`head` is `null`) then -1
                  matrix[startRow][j] = (head !== null) ? head.val : -1;
                  // update if  `head` is not `null`
                  head = (head !== null) ? head.next : head;
            }

            // Right Column Filling ...
            for (let i = startRow + 1; i <= endRow; i++) {
                  // After the top row, it fills down the rightmost column 
                  // with linkedList value if not head`head` is `null`) then -1
                  matrix[i][endCol] = (head !== null) ? head.val : -1;
                  // update if  `head` is not `null`
                  head = (head !== null) ? head.next : head;
            }

            // Bottom Row Filling...
            for (let j = endCol - 1; j >= startCol; j--) {
                  // if there is only one row left, in which case
                  if (startRow === endRow) {
                        // it breaks out of the loop to avoid overwriting values filled in the top row
                        break;
                  }

                  // After the rightmost column, it fills bottom row of the current layer  
                  // with linkedList value if not head`head` is `null`) then -1
                  matrix[endRow][j] = (head !== null) ? head.val : -1;
                  // update if  `head` is not `null`
                  head = (head !== null) ? head.next : head;
            }

            // Left Column Filling...
            for (let i = endRow - 1; i >= startRow + 1; i--) {
                  // if there is only one column left, in which case
                  if (startCol === endCol) {
                        // it breaks out of the loop to avoid overwriting values filled in the top column
                        break;
                  }

                  // After bottom row of the current layer, it fills leftmost column 
                  // with linkedList value if not head`head` is `null`) then -1
                  matrix[i][startCol] = (head !== null) ? head.val : -1;
                  // update if  `head` is not `null`
                  head = (head !== null) ? head.next : head;
            }

            // Increment and Decrement Boundaries => to prepare for the next inner layer

            // incrementing `startRow` and `startCol`,
            startRow++;
            startCol++;

            // decrementing `endRow` and `endCol`
            endRow--;
            endCol--;
      }

      // returns the filled `matrix`
      return matrix;
};