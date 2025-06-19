//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2294

//? ⌚ Time complexity ➺ O(n Log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <stdio.h>
#include <stdlib.h>

// Comparison function for qsort to sort integers in ascending order
int compare(const void *a, const void *b) {
      return (*(int *)a - *(int *)b);
}

int partitionArray(int* nums, int numsSize, int k) {
      // Sort the array to process elements in non-decreasing order
      qsort(nums, numsSize, sizeof(int), compare);

      // Pointer to traverse the array
      int i = 0;

      // Counter for the number of subsequences
      int subsequence = 0;

      // Iterate through the array to form subsequences
      while (i < numsSize) {
            // Start a new subsequence from the current index
            int index = i;

            // Extend the subsequence as long as the difference between
            // the current element and the first element in the subsequence is <= k
            while (i < numsSize && nums[index] + k >= nums[i]) {
                  i++;
            }

            // Increment the count of subsequences
            subsequence++;
      }

      return subsequence;
}
