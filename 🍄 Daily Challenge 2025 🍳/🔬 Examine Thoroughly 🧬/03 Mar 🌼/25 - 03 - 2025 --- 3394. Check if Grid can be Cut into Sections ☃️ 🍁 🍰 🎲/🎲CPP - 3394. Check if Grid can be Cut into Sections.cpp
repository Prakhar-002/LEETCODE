//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3394

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(rectangles)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <algorithm>

class Solution {
public:
      bool checkValidCuts(int n, std::vector<std::vector<int>>& rectangles) {
            std::vector<std::pair<int, int>> x_intervals, y_intervals;

            // Extract x and y coordinate intervals from the rectangles
            for (const auto& rect : rectangles) {
                  x_intervals.emplace_back(rect[0], rect[2]); // (x_start, x_end)
                  y_intervals.emplace_back(rect[1], rect[3]); // (y_start, y_end)
            }

            // Sort the intervals based on the starting coordinate
            std::sort(x_intervals.begin(), x_intervals.end());
            std::sort(y_intervals.begin(), y_intervals.end());

            // Check whether there are at least 3 non-overlapping intervals in either direction
            return std::max(countNonOverlapping(x_intervals), countNonOverlapping(y_intervals)) >= 3;
      }

private:
      // Function to count non-overlapping intervals
      int countNonOverlapping(const std::vector<std::pair<int, int>>& intervals) {
            int count = 0; // Tracks the number of non-overlapping intervals
            int last_end = -1; // Stores the end of the last selected interval

            for (const auto& interval : intervals) {
                  int start = interval.first;
                  int end = interval.second;

                  // If the current interval does not overlap with the last one, count it
                  if (last_end <= start) {
                        count++;
                  }

                  // Update the last selected interval's end coordinate
                  last_end = std::max(last_end, end);

                  // Stop early if at least 3 non-overlapping intervals are found
                  if (count == 3) {
                        break;
                  }
            }
            return count;
      }
};
