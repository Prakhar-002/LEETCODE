//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 462

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

import java.util.*;

class Solution {
      public int minMoves2(int[] nums) {
            // Sort the array to find the median efficiently
            Arrays.sort(nums);

            // The median minimizes the sum of absolute differences
            int median = nums[nums.length / 2];

            // Initialize the move counter
            int count = 0;

            // Iterate over the array to compute the total moves required
            for (int num : nums) {
                  count += Math.abs(median - num); // Add the absolute difference
            }

            return count; // Return the minimum number of moves needed
      }
}
