//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 915

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <stdio.h>

int partitionDisjoint(int* nums, int numsSize) {
      int curMax = nums[0];  // Tracks max value in the left partition
      int possibleMax = nums[0];  // Stores the overall max value encountered
      int length = 1;  // Stores partition size

      // Iterate through the array to determine the partition point
      for (int i = 1; i < numsSize; i++) {
            if (nums[i] < curMax) {
                  // If the current number is smaller than curMax, expand the left partition
                  length = i + 1;
                  curMax = possibleMax;  // Update curMax to maintain partition condition
            } else {
                  // Update possibleMax to track the max element seen so far
                  if (nums[i] > possibleMax) {
                        possibleMax = nums[i];
                  }
            }
      }

      return length;  // Return the size of the left partition
}
