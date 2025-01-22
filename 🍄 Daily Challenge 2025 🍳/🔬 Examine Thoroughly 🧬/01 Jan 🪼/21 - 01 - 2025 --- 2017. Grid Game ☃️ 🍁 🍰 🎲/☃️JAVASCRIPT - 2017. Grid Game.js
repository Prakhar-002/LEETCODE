//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2017

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(grid[0])

//? 🧺 Space complexity ➺ O(1)

var gridGame = function (grid) {
      // Initialize the minimum points required to win as the maximum possible value
      let point = Number.MAX_SAFE_INTEGER;

      // Suffix sum of the points in the first row, representing the total points 
      // remaining in the first row from the current column onward
      let firstRowSuffix = 0;

      // Prefix sum of the points in the second row, representing the total points 
      // accumulated in the second row up to the current column
      let secRowPrefix = 0;

      // Calculate the total sum of the first row to initialize the suffix sum
      for (let FirstRowPoint of grid[0]) {
            firstRowSuffix += FirstRowPoint;
      }

      // Number of columns in the grid
      const n = grid[0].length;

      // Iterate over each column to determine the optimal position to switch to the second row
      for (let j = 0; j < n; j++) {
            // Decrement the points in the suffix sum as we move to the next column
            firstRowSuffix -= grid[0][j];

            // Calculate the maximum points that the opponent can collect if we switch 
            // to the second row at this column, and update the minimum points accordingly
            point = Math.min(point, Math.max(firstRowSuffix, secRowPrefix));

            // Increment the prefix sum for the second row as we include the current column
            secRowPrefix += grid[1][j];
      }

      // Return the minimum points required for the robot to win
      return point;
}

// !------------------------------------------------------

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(grid[0])

//? 🧺 Space complexity ➺ O(n)

var gridGame = function (grid) {
      const cols = grid[0].length; // Number of columns

      // Compute prefix sums for the two rows
      const prefixTop = Array(cols).fill(0);
      const prefixBottom = Array(cols).fill(0);

      prefixTop[0] = grid[0][0];
      prefixBottom[0] = grid[1][0];

      for (let col = 1; col < cols; col++) {
            prefixTop[col] = prefixTop[col - 1] + grid[0][col];
            prefixBottom[col] = prefixBottom[col - 1] + grid[1][col];
      }

      let minSecondScore = Number.MAX_SAFE_INTEGER; // Minimum score for the second robot

      // Evaluate all possible columns where the first robot changes rows
      for (let col = 0; col < cols; col++) {
            // Remaining score for the top row after `col`
            const scoreTop = prefixTop[cols - 1] - prefixTop[col];

            // Collected score for the bottom row up to `col`
            const scoreBottom = col > 0 ? prefixBottom[col - 1] : 0;

            // Maximum score the second robot can get
            const secondRobotScore = Math.max(scoreTop, scoreBottom);

            // Update minimum possible score for the second robot
            minSecondScore = Math.min(minSecondScore, secondRobotScore);
      }

      return minSecondScore;
}