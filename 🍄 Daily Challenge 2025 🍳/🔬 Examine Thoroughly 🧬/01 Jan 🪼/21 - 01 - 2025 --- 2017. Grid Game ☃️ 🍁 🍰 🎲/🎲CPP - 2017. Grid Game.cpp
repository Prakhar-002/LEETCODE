//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2017

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(grid[0])

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <algorithm>
#include <climits>

class Solution {
public:
      long gridGame(std::vector<std::vector<int>>& grid) {
            int cols = grid[0].size(); // Number of columns

            // Compute prefix sums for the two rows
            std::vector<long> prefixTop(cols), prefixBottom(cols);
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
                  long secondRobotScore = std::max(scoreTop, scoreBottom);
                  // Update minimum possible score for the second robot
                  minSecondScore = std::min(minSecondScore, secondRobotScore);
            }

            return minSecondScore;
      }
};
