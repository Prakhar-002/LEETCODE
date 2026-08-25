//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3718

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

import java.util.Arrays;

class Solution {
      public int missingMultiple(int[] nums, int k) {
            // Sort array in ascending order
            Arrays.sort(nums);

            // Start checking from the first positive multiple of k
            int multiple = k;

            for (int num : nums) {
                  // If current multiple is found in nums, move to the next multiple
                  if (num == multiple) {
                        multiple += k;
                  }
                  // If the current element exceeds multiple, the multiple is missing
                  else if (num > multiple) {
                        return multiple;
                  }
            }

            // Return the first missing multiple if all prior multiples were found
            return multiple;
      }
}