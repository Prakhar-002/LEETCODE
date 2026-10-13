//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3727

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

import java.util.Arrays;

class Solution {
      public long maxAlternatingSum(int[] nums) {
            int n = nums.length;
            long[] squared = new long[n];

            // Square each element using 64-bit integer to prevent integer overflow
            for (int i = 0; i < n; i++) {
                  squared[i] = (long) nums[i] * nums[i];
            }

            // Sort the squared values in ascending order
            Arrays.sort(squared);

            long posSum = 0;
            long negSum = 0;

            // Smaller n / 2 elements are subtracted
            for (int i = 0; i < n / 2; i++) {
                  negSum += squared[i];
            }

            // Larger remaining elements are added
            for (int i = n / 2; i < n; i++) {
                  posSum += squared[i];
            }

            return posSum - negSum;
      }
}