//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2563

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

import java.util.Arrays;

class Solution {
      // Main function to count the number of fair pairs
      public long countFairPairs(int[] nums, int lower, int upper) {
            // Step 1: Sort the input array for two-pointer processing
            Arrays.sort(nums);

            // Step 2: Count number of pairs with sum <= upper
            // and subtract those with sum < lower (i.e., <= lower - 1)
            return count(nums, upper) - count(nums, lower - 1);
      }

      // Helper function to count number of pairs with sum <= target
      private long count(int[] nums, int target) {
            long res = 0; // Initialize result
            int left = 0; // Left pointer
            int right = nums.length - 1; // Right pointer

            // Use two-pointer technique
            while (left < right) {
                  // If current pair sum > target, move the right pointer left
                  if (nums[left] + nums[right] > target) {
                        right--;
                  } else {
                        // If current pair sum <= target,
                        // All pairs (left, left+1), ..., (left, right) are valid
                        res += right - left;

                        // Move left pointer to consider next element
                        left++;
                  }
            }

            return res; // Return total valid pairs for given target
      }
}

