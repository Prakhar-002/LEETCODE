//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 448

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
      // Allocate memory for the result array (worst case: all numbers are missing)
      int* res = (int*)malloc(numsSize * sizeof(int));
      int resIndex = 0;

      // Iterate over the input array to mark the presence of numbers
      for (int i = 0; i < numsSize; i++) {
            // Compute the index corresponding to the absolute value of the number
            int index = abs(nums[i]) - 1;
            // If the number at the computed index is positive, mark it as negative
            if (nums[index] > 0) {
                  nums[index] = -nums[index];
            }
      }

      // Iterate over the modified array to find missing numbers
      for (int i = 0; i < numsSize; i++) {
            // If a number is positive, its index + 1 is missing in the input
            if (nums[i] > 0) {
                  res[resIndex++] = i + 1;
            }
      }

      // Set the return size to the count of missing numbers
      *returnSize = resIndex;

      // Return the array of missing numbers
      return res;
}
