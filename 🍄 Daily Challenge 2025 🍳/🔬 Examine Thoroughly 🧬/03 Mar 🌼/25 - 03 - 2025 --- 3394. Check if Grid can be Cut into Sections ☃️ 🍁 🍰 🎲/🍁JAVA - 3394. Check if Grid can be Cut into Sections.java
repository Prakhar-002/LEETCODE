//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3394

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(rectangles)

//? 🧺 Space complexity ➺ O(n)

import java.util.*;

class Solution {
      public boolean checkValidCuts(int n, int[][] rectangles) {
            // Extract x and y coordinate intervals from the rectangles
            List<int[]> x_intervals = new ArrayList<>();
            List<int[]> y_intervals = new ArrayList<>();

            for (int[] rect : rectangles) {
                  x_intervals.add(new int[]{rect[0], rect[2]}); // (x_start, x_end)
                  y_intervals.add(new int[]{rect[1], rect[3]}); // (y_start, y_end)
            }

            // Sort the intervals based on the starting coordinate
            x_intervals.sort(Comparator.comparingInt(a -> a[0]));
            y_intervals.sort(Comparator.comparingInt(a -> a[0]));

            // Check whether there are at least 3 non-overlapping intervals in either direction
            return Math.max(countNonOverlapping(x_intervals), countNonOverlapping(y_intervals)) >= 3;
      }

      // Function to count non-overlapping intervals
      private int countNonOverlapping(List<int[]> intervals) {
            int count = 0; // Tracks the number of non-overlapping intervals
            int last_end = -1; // Stores the end of the last selected interval

            for (int[] interval : intervals) {
                  int start = interval[0];
                  int end = interval[1];

                  // If the current interval does not overlap with the last one, count it
                  if (last_end <= start) {
                        count++;
                  }

                  // Update the last selected interval's end coordinate
                  last_end = Math.max(last_end, end);

                  // Stop early if at least 3 non-overlapping intervals are found
                  if (count == 3) {
                        break;
                  }
            }
            return count;
      }
}
