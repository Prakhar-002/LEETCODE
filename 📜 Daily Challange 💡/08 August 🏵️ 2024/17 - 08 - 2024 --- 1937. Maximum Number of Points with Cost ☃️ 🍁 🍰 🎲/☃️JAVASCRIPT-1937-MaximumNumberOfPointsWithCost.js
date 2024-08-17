//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1937

//? ⌚ Time complexity ➺ O(m * n) 👉🏻  m = rows, n = col

//? 🧺 Space complexity ➺ O(n)

var maxPoints = function (points) {
      // number of rows and columns 
      const ROWS = points.length;
      const COLS = points[0].length;

      // used to keep track of the maximum points collectable from the prev row 
      // when traversing the grid row by row
      let prevRowPoints = [...points[0]];

      //  iterates over each row starting from the second one
      for (let row = 1; row < ROWS; row++) {
            // copy of the point values in the current row
            let nextRowPoints = [...points[row]];

            // maximum points that can be obtained from the left side and right side
            let leftMaxSum = new Array(COLS).fill(0);
            let rightMaxSum = new Array(COLS).fill(0);

            //  first element of `leftMaxSum` is set to the first value of the previous row's point
            leftMaxSum[0] = prevRowPoints[0];

            // loop iterates over the columns, starting from the second column
            for (let col = 1; col < COLS; col++) {
                  // comparing the points at the current position in `prevRowPoints` 
                  // with the max points decrementing by 1 from the previous calculation
                  leftMaxSum[col] = Math.max(prevRowPoints[col], leftMaxSum[col - 1] - 1);
            }

            // the last element of `rightMaxSum` is set to the points value from the last column of the prev row
            rightMaxSum[COLS - 1] = prevRowPoints[COLS - 1];

            // loop then moves from right to left, starting from the second-to-last column
            for (let col = COLS - 2; col >= 0; col--) {
                  // comparing the points at the current position in `prevRowPoints` 
                  // with the max points decrementing by 1 from the previous calculation
                  rightMaxSum[col] = Math.max(prevRowPoints[col], rightMaxSum[col + 1] - 1);
            }

            // iterates over the columns
            for (let col = 0; col < COLS; col++) {
                  //  each value in `nextRowPoints` the maximum of the `leftMaxSum` and `rightMaxSum`
                  nextRowPoints[col] += Math.max(leftMaxSum[col], rightMaxSum[col]);
            }

            // `prevRowPoints` is then set to `nextRowPoints` for the next iteration
            prevRowPoints = nextRowPoints;
      }

      // returns the maximum value in the last computed `prevRowPoints`,
      return Math.max(...prevRowPoints);
};