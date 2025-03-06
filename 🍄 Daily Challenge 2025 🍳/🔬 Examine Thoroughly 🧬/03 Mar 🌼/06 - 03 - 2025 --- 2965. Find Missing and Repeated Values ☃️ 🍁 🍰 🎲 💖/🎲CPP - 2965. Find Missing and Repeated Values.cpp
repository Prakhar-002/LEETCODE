//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2965

//? ⌚ Time complexity ➺ O(n^2) 👉🏻  n = len(grid)

//? 🧺 Space complexity ➺ O(1)

#include <vector>
using namespace std;

class Solution {
public:
      vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
            // Get the dimensions of the square grid (n x n)
            int n = grid.size();

            // Total number of cells in the grid (1 to n*n)
            int total = n * n;

            // Variables to store actual sums
            long long sumVal = 0;
            long long sqrSum = 0;

            // Calculate actual sum and square sum from the grid
            for (int i = 0; i < n; i++) {
                  for (int j = 0; j < n; j++) {
                        int num = grid[i][j];
                        sumVal += num;
                        sqrSum += (long long)num * num;
                  }
            }

            // Expected sum of numbers from 1 to n*n
            long long expectedSum = (long long)total * (total + 1) / 2;

            // Expected square sum of numbers from 1 to n*n
            long long expectedSquareSum = (long long)total * (total + 1) * (2 * total + 1) / 6;

            // Calculate differences between actual and expected values
            long long sumDiff = sumVal - expectedSum;           // x - y
            long long sqrDiff = sqrSum - expectedSquareSum;     // x² - y²

            // Find x + y using algebraic identity: x² - y² = (x - y) * (x + y)
            long long sumXPlusY = sqrDiff / sumDiff;

            // Solve for x (repeated) and y (missing)
            int repeated = (sumXPlusY + sumDiff) / 2;
            int missing = (sumXPlusY - sumDiff) / 2;

            // Return result as vector
            return {repeated, missing};
      }
};
