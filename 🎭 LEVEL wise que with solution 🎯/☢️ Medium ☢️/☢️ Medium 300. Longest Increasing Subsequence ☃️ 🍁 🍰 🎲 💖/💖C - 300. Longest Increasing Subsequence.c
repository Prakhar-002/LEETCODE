//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 300

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(len(res))

#include <stdio.h>
#include <stdlib.h>

// Helper function for binary search
int binarySearch(int* arr, int size, int target) {
      int left = 0;
      int right = size - 1;

      while (left <= right) {
            int mid = (left + right) / 2;

            if (arr[mid] == target) {
                  return mid;
            } else if (arr[mid] > target) {
                  right = mid - 1;
            } else {
                  left = mid + 1;
            }
      }

      // Return the position where the target should be placed
      return left;
}

// Main function to calculate LIS length
int lengthOfLIS(int* nums, int numsSize) {
      if (numsSize == 0) return 0;

      // Allocate array to store the increasing subsequence tails
      int* lis = (int*)malloc(sizeof(int) * numsSize);
      int lisSize = 0;

      for (int i = 0; i < numsSize; i++) {
            // If current number is larger than last element in lis, append it
            if (lisSize == 0 || nums[i] > lis[lisSize - 1]) {
                  lis[lisSize++] = nums[i];
            } else {
                  // Find the position to replace using binary search
                  int idx = binarySearch(lis, lisSize, nums[i]);
                  lis[idx] = nums[i];  // Replace with smaller value
            }
      }

      // The size of the LIS array is the answer
      free(lis);
      return lisSize;
}
