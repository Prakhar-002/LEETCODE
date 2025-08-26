//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3000

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(rectangles)

//? 🧺 Space complexity ➺ O(1)

import java.util.*;

class Solution {
      // Return the area of the rectangle that has the largest diagonal length.
      // If multiple rectangles share the same (largest) diagonal length, return the
      // one with the larger area.
      public int areaOfMaxDiagonal(int[][] rectangles) {
            // Track best area found so far.
            int maxArea = 0;
            // Track the maximum squared diagonal seen so far (avoid sqrt for
            // precision/performance).
            long maxDiaSq = 0;

            for (int[] rect : rectangles) {
                  int length = rect[0];
                  int width = rect[1];

                  // Squared diagonal = length^2 + width^2 (Pythagoras).
                  long curDiaSq = 1L * length * length + 1L * width * width;
                  int area = length * width;

                  // If strictly larger diagonal, update both diagonal and area.
                  if (curDiaSq > maxDiaSq) {
                        maxDiaSq = curDiaSq;
                        maxArea = area;
                  }
                  // If same diagonal length, prefer the larger area.
                  else if (curDiaSq == maxDiaSq) {
                        if (area > maxArea) {
                              maxArea = area;
                        }
                  }
            }

            // Area corresponding to the largest diagonal (with tie broken by area).
            return maxArea;
      }
}
