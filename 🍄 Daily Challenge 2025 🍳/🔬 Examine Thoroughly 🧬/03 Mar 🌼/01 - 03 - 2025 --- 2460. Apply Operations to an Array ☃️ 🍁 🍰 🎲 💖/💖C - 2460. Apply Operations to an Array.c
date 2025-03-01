//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2460

// ? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

// ? 🧺 Space complexity ➺ O(1)

#include <stdlib.h>   // For malloc()

int* applyOperations(int* nums, int numsSize, int* returnSize) {
      // Set the return size equal to input size since the array size does not change
      *returnSize = numsSize;

      // First pass - apply the operation:
      // If two adjacent elements are equal, double the first and set the second to zero
      for (int i = 0; i < numsSize - 1; i++) {
            if (nums[i] == nums[i + 1]) {
                  nums[i] *= 2;      // Double the value of nums[i]
                  nums[i + 1] = 0;    // Set the next element to zero
            }
      }

      // Second pass - shift all non-zero elements to the left (maintain order)
      int j = 0;    // Pointer to track where the next non-zero element should go

      for (int i = 0; i < numsSize; i++) {
            if (nums[i] != 0) {
                  // Swap nums[i] and nums[j]
                  int temp = nums[i];
                  nums[i] = nums[j];
                  nums[j] = temp;

                  // Move the non-zero pointer forward
                  j++;
            }
      }

      // Return the modified array
      return nums;
}
