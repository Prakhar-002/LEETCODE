//! https://github.com/Prakhar-002/LEETCODE

import java.util.Arrays;

class Solution {
      public int minIncrementForUnique(int[] nums) {
            // Sort the array
            Arrays.sort(nums);

            // Make variable 
            int increment = 0; 

            for (int i = 1; i < nums.length; i++) {
                  // check adjacent values 
                  if (nums[i - 1] >= nums[i]) {
                        // inc by diff of two value and + 1 
                        increment += 1 + nums[i - 1] - nums[i];
                        // make Ith value to I - 1 th value +1 
                        nums[i] = nums[i - 1] + 1;
                  }
            }

            return increment;
      }
}