//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2965

//? ⌚ Time complexity ➺ O(n^2) 👉🏻  n = len(grid)

//? 🧺 Space complexity ➺ O(1)

var findMissingAndRepeatedValues = function (grid) {
      // Get the dimensions of the square grid (n x n)
      const n = grid.length;

      // Total number of cells in the grid (1 to n*n)
      const total = n * n;

      // Variables to store actual sums
      let sumVal = 0;
      let sqrSum = 0;

      // Calculate actual sum and square sum from the grid
      for (let row of grid) {
            for (let num of row) {
                  sumVal += num;
                  sqrSum += num * num;
            }
      }

      // Expected sum of numbers from 1 to n*n
      const expectedSum = total * (total + 1) / 2;

      // Expected square sum of numbers from 1 to n*n
      const expectedSquareSum = total * (total + 1) * (2 * total + 1) / 6;

      // Calculate differences between actual and expected values
      const sumDiff = sumVal - expectedSum;         // x - y
      const sqrDiff = sqrSum - expectedSquareSum;   // x² - y²

      // Find x + y using algebraic identity: x² - y² = (x - y) * (x + y)
      const sumXPlusY = sqrDiff / sumDiff;

      // Solve for x (repeated) and y (missing)
      const repeated = (sumXPlusY + sumDiff) / 2;
      const missing = (sumXPlusY - sumDiff) / 2;

      // Return result as array
      return [repeated, missing];
}