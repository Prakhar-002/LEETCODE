//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2965

//? ⌚ Time complexity ➺ O(n^2) 👉🏻  n = len(grid)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int[] findMissingAndRepeatedValues(int[][] grid) {
            // Get the dimensions of the square grid (n x n)
            int n = grid.length;

            // Total number of cells in the grid (1 to n*n)
            int total = n * n;

            // Variables to store actual sums
            long sumVal = 0;
            long sqrSum = 0;

            // Calculate actual sum and square sum from the grid
            for (int i = 0; i < n; i++) {
                  for (int j = 0; j < n; j++) {
                        int num = grid[i][j];
                        sumVal += num;
                        sqrSum += (long) num * num;
                  }
            }

            // Expected sum of numbers from 1 to n*n
            long expectedSum = (long) total * (total + 1) / 2;

            // Expected square sum of numbers from 1 to n*n
            long expectedSquareSum = (long) total * (total + 1) * (2 * total + 1) / 6;

            // Calculate differences between actual and expected values
            long sumDiff = sumVal - expectedSum; // x - y
            long sqrDiff = sqrSum - expectedSquareSum; // x² - y²

            // Find x + y using algebraic identity: x² - y² = (x - y) * (x + y)
            long sumXPlusY = sqrDiff / sumDiff;

            // Solve for x (repeated) and y (missing)
            int repeated = (int) ((sumXPlusY + sumDiff) / 2);
            int missing = (int) ((sumXPlusY - sumDiff) / 2);

            // Return result as array
            return new int[] { repeated, missing };
      }
}
