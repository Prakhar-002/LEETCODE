//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2017

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(grid[0])

//? 🧺 Space complexity ➺ O(1)

#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

class Solution {
public:
      long long gridGame(vector<vector<int>>& grid) {
            // Initialize the minimum points required to win as the maximum possible value
            long long point = LLONG_MAX;

            // Suffix sum of the points in the first row, representing the total points 
            // remaining in the first row from the current column onward
            long long firstRowSuffix = 0;

            // Prefix sum of the points in the second row, representing the total points 
            // accumulated in the second row up to the current column
            long long secRowPrefix = 0;

            // Calculate the total sum of the first row to initialize the suffix sum
            for (int FirstRowPoint : grid[0]) {
                  firstRowSuffix += FirstRowPoint;
            }

            // Number of columns in the grid
            int n = grid[0].size();

            // Iterate over each column to determine the optimal position to switch to the second row
            for (int j = 0; j < n; j++) { 
                  // Decrement the points in the suffix sum as we move to the next column
                  firstRowSuffix -= grid[0][j];

                  // Calculate the maximum points that the opponent can collect if we switch 
                  // to the second row at this column, and update the minimum points accordingly
                  point = min(point, max(firstRowSuffix, secRowPrefix));

                  // Increment the prefix sum for the second row as we include the current column
                  secRowPrefix += grid[1][j];
            }

            // Return the minimum points required for the robot to win
            return point;
      }
};

// !------------------------------------------------------

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(grid[0])

//? 🧺 Space complexity ➺ O(n)

class Solution {
public:
      long gridGame(vector<vector<int>>& grid) {
            int cols = grid[0].size(); // Number of columns

            // Compute prefix sums for the two rows
            vector<long> prefixTop(cols), prefixBottom(cols);
            prefixTop[0] = grid[0][0];
            prefixBottom[0] = grid[1][0];

            for (int col = 1; col < cols; col++) {
                  prefixTop[col] = prefixTop[col - 1] + grid[0][col];
                  prefixBottom[col] = prefixBottom[col - 1] + grid[1][col];
            }

            long minSecondScore = LLONG_MAX; // Minimum score for the second robot

            // Evaluate all possible columns where the first robot changes rows
            for (int col = 0; col < cols; col++) {
                  // Remaining score for the top row after `col`
                  long scoreTop = prefixTop[cols - 1] - prefixTop[col];
                  // Collected score for the bottom row up to `col`
                  long scoreBottom = col > 0 ? prefixBottom[col - 1] : 0;
                  // Maximum score the second robot can get
                  long secondRobotScore = max(scoreTop, scoreBottom);
                  // Update minimum possible score for the second robot
                  minSecondScore = min(minSecondScore, secondRobotScore);
            }

            return minSecondScore;
      }
};
