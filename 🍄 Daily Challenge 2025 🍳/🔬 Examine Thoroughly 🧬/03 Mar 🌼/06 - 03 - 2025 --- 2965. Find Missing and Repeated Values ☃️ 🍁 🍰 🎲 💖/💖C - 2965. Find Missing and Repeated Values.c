//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2965

//? ⌚ Time complexity ➺ O(n^2) 👉🏻  n = len(grid)

//? 🧺 Space complexity ➺ O(1)

#include <stdio.h>
#include <stdlib.h>

int* findMissingAndRepeatedValues(int** grid, int gridSize, int* gridColSize, int* returnSize) {
      // Total number of cells in the grid (1 to gridSize * gridSize)
      int total = gridSize * gridSize;

      // Variables to store actual sums and square sums
      long long sumVal = 0;
      long long sqrSum = 0;

      // Step 1: Calculate actual sum and square sum from the grid
      for (int i = 0; i < gridSize; i++) {
            for (int j = 0; j < gridColSize[i]; j++) {
                  int num = grid[i][j];
                  sumVal += num;              // Sum of all numbers
                  sqrSum += (long long)num * num;   // Sum of squares
            }
      }

      // Step 2: Calculate expected sum and expected square sum
      // Sum of numbers from 1 to total: total * (total + 1) / 2
      long long expectedSum = (long long)total * (total + 1) / 2;

      // Sum of squares from 1 to total: total * (total + 1) * (2 * total + 1) / 6
      long long expectedSquareSum = (long long)total * (total + 1) * (2 * total + 1) / 6;

      // Step 3: Calculate differences between actual and expected
      long long sumDiff = sumVal - expectedSum;           // x - y
      long long sqrDiff = sqrSum - expectedSquareSum;     // x² - y²

      // Step 4: Find x (repeated number) and y (missing number)
      // From algebraic identity: x² - y² = (x - y) * (x + y)
      long long sumXPlusY = sqrDiff / sumDiff;   // x + y

      int repeated = (int)((sumXPlusY + sumDiff) / 2);    // repeated number
      int missing = (int)((sumXPlusY - sumDiff) / 2);     // missing number

      // Allocate memory to return result array [repeated, missing]
      int* result = (int*)malloc(2 * sizeof(int));
      result[0] = repeated;
      result[1] = missing;

      // Set returnSize to 2 since we are returning 2 numbers
      *returnSize = 2;

      // Return the result array
      return result;
}
