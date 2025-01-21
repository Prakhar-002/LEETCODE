//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2017

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