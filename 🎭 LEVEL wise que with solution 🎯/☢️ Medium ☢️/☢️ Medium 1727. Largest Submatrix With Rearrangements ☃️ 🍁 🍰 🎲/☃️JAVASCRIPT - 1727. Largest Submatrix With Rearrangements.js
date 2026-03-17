//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1727

//? ⌚ Time complexity ➺ O(n * m) 

//? 🧺 Space complexity ➺ O(n)

var largestSubmatrix = function (matrix) {
      // Get dimensions
      let ROWS = matrix.length;
      let COLS = matrix[0].length;

      let maxArea = 0;

      // Stores (height, column)
      let prevHeights = [];

      // Traverse rows
      for (let row = 0; row < ROWS; row++) {

            let heights = [];
            let seen = new Set();

            // STEP 1: Extend previous heights
            for (let [height, col] of prevHeights) {
                  if (matrix[row][col] === 1) {
                        heights.push([height + 1, col]);
                        seen.add(col);
                  }
            }

            // STEP 2: Start new heights
            for (let col = 0; col < COLS; col++) {
                  if (!seen.has(col) && matrix[row][col] === 1) {
                        heights.push([1, col]);
                  }
            }

            // STEP 3: Sort descending
            heights.sort((a, b) => b[0] - a[0]);

            // STEP 4: Compute max area
            for (let i = 0; i < heights.length; i++) {
                  let width = i + 1;
                  let height = heights[i][0];

                  maxArea = Math.max(maxArea, width * height);
            }

            // STEP 5: Update for next iteration
            prevHeights = heights;
      }

      return maxArea;
};