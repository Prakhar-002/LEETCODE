//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2161

// ? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

// ? 🧺 Space complexity ➺ O(1)

//* One Pass

int* pivotArray(int* nums, int numsSize, int pivot, int* returnSize) {
      // Step 1: Find the length of the input array
      int N = numsSize;

      // Step 2: Initialize two pointers to handle placing elements
      // 'lessPtr' will place numbers smaller than pivot (from the left side)
      int lessPtr = 0;

      // 'greaterPtr' will place numbers greater than pivot (from the right side)
      int greaterPtr = N - 1;

      // Step 3: Create the result array (same size as nums), initially filled with zeros
      int* partitionArr = (int*)calloc(N, sizeof(int));

      // Step 4: First pass to process elements and categorize them into:
      //        - numbers smaller than pivot (placed at the beginning)
      //        - numbers greater than pivot (placed at the end)
      //        - numbers equal to pivot will be handled later
      // This pass uses two indices simultaneously: 
      // i scans from left to right and j scans from right to left
      for (int i = 0, j = N - 1; i < N && j >= 0; i++, j--) {

            // If nums[i] is smaller than pivot, place it at 'lessPtr' position
            if (nums[i] < pivot) {
                  partitionArr[lessPtr++] = nums[i];
            }

            // If nums[j] is greater than pivot, place it at 'greaterPtr' position
            if (nums[j] > pivot) {
                  partitionArr[greaterPtr--] = nums[j];
            }
      }

      // Step 5: After the first pass, the middle section (between lessPtr and greaterPtr)
      //         should contain all values equal to pivot
      // We fill all those middle positions with the pivot itself
      while (lessPtr <= greaterPtr) {
            partitionArr[lessPtr++] = pivot;
      }

      // Step 6: Set return size and return result array
      *returnSize = N;
      return partitionArr;
}

//!---------------------------------------------------------- 

// ? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

// ? 🧺 Space complexity ➺ O(1)

//* 3 iteration 

#include <stdio.h>
#include <stdlib.h>

int* pivotArray(int* nums, int numsSize, int pivot, int* returnSize) {
      // Allocate space for the result array to store rearranged elements
      int* result = (int*)malloc(numsSize * sizeof(int));

      // Index to keep track of insertion position in result array
      int index = 0;

      // Step 1: Add all numbers smaller than pivot to result array
      for (int i = 0; i < numsSize; i++) {
            if (nums[i] < pivot) {
                  result[index++] = nums[i];
            }
      }

      // Step 2: Add all numbers equal to pivot to result array
      for (int i = 0; i < numsSize; i++) {
            if (nums[i] == pivot) {
                  result[index++] = nums[i];
            }
      }

      // Step 3: Add all numbers greater than pivot to result array
      for (int i = 0; i < numsSize; i++) {
            if (nums[i] > pivot) {
                  result[index++] = nums[i];
            }
      }

      // Set return size (number of elements in result array)
      *returnSize = numsSize;

      // Return pointer to the rearranged array
      return result;
}
