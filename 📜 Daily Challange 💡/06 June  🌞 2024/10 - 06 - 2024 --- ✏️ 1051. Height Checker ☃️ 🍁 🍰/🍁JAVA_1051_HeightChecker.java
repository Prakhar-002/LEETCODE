//! https://github.com/Prakhar-002/LEETCODE


// Todo 📌 QUESTION NUMBER 1051 

import java.util.Arrays;

class Solution {
      public int heightChecker(int[] heights) {
            // Creating same copy od given array
            int [] expected = heights.clone();

            // Sort copied array
            Arrays.sort(expected);

            int count = 0;

            for (int i = 0; i < heights.length; i++) {
                  if (heights[i] != expected[i]) {
                        count++;
                  }
            } 

            return count;
      }
}