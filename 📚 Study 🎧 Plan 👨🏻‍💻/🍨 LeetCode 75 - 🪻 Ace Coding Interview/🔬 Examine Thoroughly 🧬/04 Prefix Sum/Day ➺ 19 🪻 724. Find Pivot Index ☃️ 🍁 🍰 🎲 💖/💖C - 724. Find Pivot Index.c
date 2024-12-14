//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 724

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <stdio.h>

int pivotIndex(int* nums, int numsSize) {
      // Calculate the total sum of the array
      int totalSum = 0;
      for (int i = 0; i < numsSize; i++) {
            totalSum += nums[i];
      }

      // Initialize the running sum for the left side
      int leftSum = 0;

      // Iterate through the array to find the pivot index
      for (int i = 0; i < numsSize; i++) {
            // Right sum is totalSum minus leftSum minus the current element
            int rightSum = totalSum - leftSum - nums[i];

            // Check if left sum equals right sum
            if (leftSum == rightSum) {
                  return i;
            }

            // Update left sum to include the current element
            leftSum += nums[i];
      }

      // If no pivot index is found, return -1
      return -1;
}


//!-------------------------------------------------------------------------------------

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <stdio.h>
#include <stdlib.h>

int pivotIndex(int* nums, int numsSize) {
      // Allocate memory for cumulative sums
      int* leftSum = (int*)calloc(numsSize, sizeof(int));
      int* rightSum = (int*)calloc(numsSize, sizeof(int));

      // Calculate the cumulative sum from the left
      for (int i = 1; i < numsSize; i++) {
            leftSum[i] = leftSum[i - 1] + nums[i - 1];
      }

      // Calculate the cumulative sum from the right
      for (int i = numsSize - 2; i >= 0; i--) {
            rightSum[i] = rightSum[i + 1] + nums[i + 1];
      }

      // Check for the pivot index where leftSum equals rightSum
      for (int i = 0; i < numsSize; i++) {
            if (leftSum[i] == rightSum[i]) {
                  free(leftSum);
                  free(rightSum);
                  return i; // Return the pivot index if found
            }
      }

      // Free allocated memory
      free(leftSum);
      free(rightSum);

      // If no pivot index is found, return -1
      return -1;
}
