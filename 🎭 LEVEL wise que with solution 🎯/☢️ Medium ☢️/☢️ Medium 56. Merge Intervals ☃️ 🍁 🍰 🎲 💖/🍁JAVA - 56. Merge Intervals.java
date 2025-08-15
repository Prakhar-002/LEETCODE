//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 56

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

import java.util.*;

class Solution {
      public int[][] merge(int[][] intervals) {
            List<int[]> merged = new ArrayList<>(); // Final list of merged intervals

            // ----------------------------------------------------------
            // Step 1: Sort intervals by their start value
            // ----------------------------------------------------------
            Arrays.sort(intervals, (a, b) -> Integer.compare(a[0], b));

            // Step 2: Initialize 'prev' as the first interval
            int[] prev = intervals;

            // ----------------------------------------------------------
            // Step 3: Iterate over each interval and merge if overlapping
            // ----------------------------------------------------------
            for (int i = 1; i < intervals.length; i++) {
                  int[] interval = intervals[i];
                  // Overlap case → merge by updating the end time
                  if (interval <= prev) {
                        prev = Math.max(prev, interval);
                  }
                  // No overlap → push previous interval, update 'prev'
                  else {
                        merged.add(prev);
                        prev = interval;
                  }
            }

            // Step 4: Append the last interval
            merged.add(prev);

            return merged.toArray(new int[merged.size()][]);
      }
}
