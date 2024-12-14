//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2593

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

import java.util.*;

class Solution {
      public long findScore(int[] nums) {
            int n = nums.length;

            // Create a list to store pairs of numbers and their indices
            List<int[]> numIndexPairs = new ArrayList<>();
            for (int i = 0; i < n; i++) {
                  numIndexPairs.add(new int[]{nums[i], i});
            }

            // Sort the list based on the numbers in ascending order
            numIndexPairs.sort((a, b) -> Integer.compare(a[0], b[0]));

            // Create a boolean array to track whether an index is "marked"
            boolean[] isMarked = new boolean[n];

            long result = 0;

            // Iterate over the sorted list
            for (int[] pair : numIndexPairs) {
                  int num = pair[0];
                  int index = pair[1];

                  // If the current index is not marked, process it
                  if (!isMarked[index]) {
                        result += num;

                        // Mark the current index and adjacent indices
                        isMarked[index] = true;
                        if (index - 1 >= 0) {
                              isMarked[index - 1] = true;
                        }
                        if (index + 1 < n) {
                              isMarked[index + 1] = true;
                        }
                  }
            }

            return result;
      }
}
