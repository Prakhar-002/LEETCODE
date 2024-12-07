//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1760

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <stdio.h>
#include <math.h>

// Helper function to check if the division is possible
int canDivide(int nums[], int size, int maxBalls, int maxOperations) {
      int operations = 0;

      for (int i = 0; i < size; i++) {
            // Calculate operations needed for the current bag
            operations += ceil((double)nums[i] / maxBalls) - 1;

            // If operations exceed the limit, return false
            if (operations > maxOperations) {
                  return 0;
            }
      }

      return 1; // Division is possible
}

// Main function to find the minimum possible maximum size
int minimumSize(int nums[], int size, int maxOperations) {
      int left = 1, right = nums[0];

      // Find the maximum value in the array
      for (int i = 1; i < size; i++) {
            if (nums[i] > right) {
                  right = nums[i];
            }
      }

      while (left < right) {
            int mid = left + (right - left) / 2;

            if (canDivide(nums, size, mid, maxOperations)) {
                  right = mid; // Reduce upper bound
            } else {
                  left = mid + 1; // Increase lower bound
            }
      }

      return left; // The smallest maximum size
}
