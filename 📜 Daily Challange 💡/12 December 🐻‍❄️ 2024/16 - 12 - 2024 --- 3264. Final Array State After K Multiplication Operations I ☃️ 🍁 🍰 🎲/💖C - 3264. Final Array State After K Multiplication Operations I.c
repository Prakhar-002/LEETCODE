//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3264

//? ⌚ Time complexity ➺ O(n * k) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <stdio.h>
#include <stdlib.h>

// Function to get the final state of the array
int* getFinalState(int* nums, int numsSize, int k, int multiplier, int* returnSize) {
      // Allocate memory for the result array
      int* result = (int*)malloc(numsSize * sizeof(int));
      
      // Copy the input array into the result array
      for (int i = 0; i < numsSize; i++) {
            result[i] = nums[i];
      }

      // Perform k iterations to transform the smallest element
      while (k-- > 0) {
            int minIndex = 0; // Index of the smallest element

            // Find the index of the smallest element in the array
            for (int i = 1; i < numsSize; i++) {
                  if (result[i] < result[minIndex]) {
                        minIndex = i; // Update minIndex if a smaller element is found
                  }
            }

            // Multiply the smallest element by the multiplier
            result[minIndex] *= multiplier;
      }

      // Set the return size
      *returnSize = numsSize;

      // Return the modified array
      return result;
}
