//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 757

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

import java.util.Arrays;
import java.util.Comparator;

class Solution {
      public int intersectionSizeTwo(int[][] intervals) {
            int res = 0;  // Initialize result: minimum size of the intersection set

            // Sort intervals by ending value first, then by starting value
            Arrays.sort(intervals, 
                              Comparator.comparingInt((int[] i) -> i[1])
                                    .thenComparingInt(i -> i[0])
                        );

            // p1 and p2 track the last two chosen points for set S, initialized to impossible values
            int p1 = -1, p2 = -1;

            for (int[] interval : intervals) {
                  int left = interval[0], right = interval[1];

                  // Case 1: current interval contains neither p1 nor p2
                  if (p2 < left) {
                        res += 2;  // Need to add two points: right-1 and right
                        p1 = right - 1;
                        p2 = right;
                  }

                  // Case 2: only p2 (but not p1) is inside current interval
                  else if (p1 < left) {
                        res += 1;  // Need to add one more point (right)
                        if (p2 == right) {
                              p1 = right - 1;
                        } else {
                              p1 = p2;
                              p2 = right;
                        }
                  }

                  // Case 3: both points already cover the interval, do nothing
            }

            return res;  // Return the final minimum size of the intersection set
      }
}
