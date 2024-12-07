//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 283

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <stdio.h>

void moveZeroes(int* nums, int numsSize) {
      int i = 0, j = 0;

      // Iterate through the array using two pointers
      while (j < numsSize) {

            // Skip over zero elements
            while (j < numsSize && nums[j] == 0) {
                  j++;
            }

            // If no non-zero element is found, exit the loop
            if (j == numsSize) {
                  break;
            }

            // Move the non-zero element to position i
            int num = nums[j];
            // Update pointers
            nums[j++] = 0;
            nums[i++] = num;
      }
}

