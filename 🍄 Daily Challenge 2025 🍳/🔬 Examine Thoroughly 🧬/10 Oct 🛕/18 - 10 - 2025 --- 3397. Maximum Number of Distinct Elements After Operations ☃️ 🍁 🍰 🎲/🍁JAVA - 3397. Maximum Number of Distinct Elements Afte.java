//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3397

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

import java.util.*;

class Solution {
      public int maxDistinctElements(int[] nums, int k) {
            Arrays.sort(nums); // Sort array to apply greedy distinct assignment

            int count = 0; // Counts max distinct elements assigned
            int prev = Integer.MIN_VALUE; // Last assigned value in growing sequence

            for (int num : nums) {
                  // Assign current number to a value in [num-k, num+k] range
                  // Must be strictly greater than prev to ensure distinctness
                  int curr = Math.min(Math.max(num - k, prev + 1), num + k);

                  if (curr > prev) {
                        count++; // Valid distinct assignment found
                        prev = curr; // Update the last assigned number
                  }
            }
            return count;
      }
}
