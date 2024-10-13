//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 334

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = nums.length

//? 🧺 Space complexity ➺ O(1)

#include <stdbool.h>
#include <stdlib.h>
#include <limits.h>

bool increasingTriplet(int* nums, int numsSize) {
      // Check if the array is empty or has fewer than 3 elements; no triplet is possible
      if (nums == NULL || numsSize < 3) {
            return false;  // Return false if the condition is met
      }

      // Initialize 'a' to INT_MAX (this will track the smallest number)
      int a = INT_MAX;
      // Initialize 'b' to INT_MAX (this will track the second smallest number)
      int b = INT_MAX;

      // Iterate over each number in the array
      for (int i = 0; i < numsSize; i++) {
            // If the current number is smaller than or equal to 'a', update 'a'
            if (nums[i] <= a) {
                  a = nums[i];
            }
            // Else if the current number is smaller than or equal to 'b', update 'b'
            else if (nums[i] <= b) {
                  b = nums[i];
            }
            // If the current number is greater than both 'a' and 'b', return true (triplet found)
            else {
                  return true;
            }
      }

      // If the loop completes without finding an increasing triplet, return false
      return false;
}

