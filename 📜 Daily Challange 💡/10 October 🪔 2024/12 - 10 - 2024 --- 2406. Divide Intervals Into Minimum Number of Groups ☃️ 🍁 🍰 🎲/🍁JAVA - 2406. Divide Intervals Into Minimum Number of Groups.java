//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2406

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(intervals)

//? 🧺 Space complexity ➺ O(n)

import java.util.Arrays;

class Solution {
      public int minGroups(int[][] intervals) {
            // `startPoints` array stores the start points of each interval
            int[] startPoints = new int[intervals.length];
            // `endPoints` array stores the end points of each interval
            int[] endPoints = new int[intervals.length];

            // `for` loop populates these arrays by iterating over the `intervals` array
            for (int i = 0; i < intervals.length; i++) {
                  // store the starting point in `startPoints` array
                  startPoints[i] = intervals[i][0];
                  // store the ending point in `endPoints` array
                  endPoints[i] = intervals[i][1];
            }

            // sort the `startPoints` array
            Arrays.sort(startPoints);
            // sort the `endPoints` array
            Arrays.sort(endPoints);

            // `sIdx` pointer used to iterate over the sorted `startPoints` array
            int sIdx = 0;
            // `eIdx` pointer used to iterate over the sorted `endPoints` array
            int eIdx = 0;

            int groups = 0;
            int intersections = 0;

            // loop continues until all intervals (start points) have been processed
            while (sIdx < intervals.length) {
                  // if the current start point is earlier or equal to the current end point
                  if (startPoints[sIdx] <= endPoints[eIdx]) {
                        // means a new interval is starting before the last one ends
                        intersections++; // thus increasing the number of "intersections"
                        // start pointer is incremented to process the next interval
                        sIdx++;
                  }
                  // If not, an interval has ended before a new one starts
                  else {
                        // count of "intersections" decreases
                        intersections--;
                        // and the end pointer is incremented
                        eIdx++;
                  }

                  // `groups` variable is updated to hold the maximum number of intersections seen so far
                  groups = Math.max(groups, intersections);
            }

            // returns `groups`, which now holds the minimum number of groups required
            return groups;
      }
}
