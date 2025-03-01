//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2460

// ? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

// ? 🧺 Space complexity ➺ O(1)

#include <stdlib.h>   // For malloc()

int* applyOperations(int* nums, int numsSize, int* returnSize) {
      // 'w' is the write pointer - position to place the next valid non-zero element
      int w = 0;

      // Process the array, merging and shifting non-zero elements left
      for (int r = 0; r < numsSize - 1; r++) {      
            // If two adjacent numbers are the same, merge them into one
            if (nums[r] == nums[r + 1]) {
                  nums[r] *= 2;        // Double the value of nums[r]
                  nums[r + 1] = 0;     // Set the next element to zero after merging
            }

            // If current element is non-zero, move it to the write position
            if (nums[r] != 0) {
                  nums[w] = nums[r];   // Move to leftmost available spot
                  if (w != r) {
                        nums[r] = 0;    // Clear the old spot if it was moved
                  }
                  w++;   // Move write pointer forward
            }
      }

      // Handle the very last element (nums[numsSize-1]), since loop stops at numsSize-2
      if (nums[numsSize - 1] != 0) {
            nums[w] = nums[numsSize - 1];
            if (w != numsSize - 1) {
                  nums[numsSize - 1] = 0;
            }
            w++;
      }

      // The array is now processed (merged and compacted)
      // Set the actual return size
      *returnSize = numsSize;

      // Allocate memory for the result array and copy nums into it
      int* result = (int*)malloc(numsSize * sizeof(int));
      for (int i = 0; i < numsSize; i++) {
            result[i] = nums[i];
      }

      return result;
}
