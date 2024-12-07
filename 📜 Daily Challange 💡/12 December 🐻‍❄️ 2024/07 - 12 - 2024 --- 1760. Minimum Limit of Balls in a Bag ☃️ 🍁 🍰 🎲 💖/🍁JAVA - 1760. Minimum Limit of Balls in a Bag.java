//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1760

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

import java.util.*;

class Solution {
      // Helper function to check if the division is possible
      private boolean canDivide(int[] nums, int maxBalls, int maxOperations) {
            int operations = 0;

            for (int n : nums) {
                  // Calculate operations needed for the current bag
                  operations += Math.ceil((double) n / maxBalls) - 1;

                  // If operations exceed the limit, return false
                  if (operations > maxOperations) {
                        return false;
                  }
            }

            return true; // Division is possible
      }

      // Main function to find the minimum possible maximum size
      public int minimumSize(int[] nums, int maxOperations) {
            int left = 1, right = Arrays.stream(nums).max().getAsInt();

            while (left < right) {
                  int mid = left + (right - left) / 2;

                  if (canDivide(nums, mid, maxOperations)) {
                        right = mid; // Reduce upper bound
                  } else {
                        left = mid + 1; // Increase lower bound
                  }
            }

            return left; // The smallest maximum size
      }
}
