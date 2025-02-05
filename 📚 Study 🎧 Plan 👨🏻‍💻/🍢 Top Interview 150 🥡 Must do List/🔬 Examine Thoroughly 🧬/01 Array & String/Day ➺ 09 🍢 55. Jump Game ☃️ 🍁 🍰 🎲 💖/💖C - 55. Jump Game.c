//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 55

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <stdio.h>
#include <stdbool.h>

bool canJump(int nums[], int size) {
      int jump = 0;  // Maximum reachable index

      // Iterate through each index
      for (int i = 0; i < size; i++) {
            // If the current index is beyond the maximum reachable index, return false
            if (i > jump) {
                  return false;
            }

            // Update the maximum reachable index
            if (jump < i + nums[i]) {
                  jump = i + nums[i];
            }
      }

      // If we can iterate through all elements, reaching the last index is possible
      return true;
}
