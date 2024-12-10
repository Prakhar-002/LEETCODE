//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1679

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <stdio.h>
#include <stdlib.h>

// Function to compare two integers for sorting
int compare(const void* a, const void* b) {
      return (*(int*)a - *(int*)b);
}

int maxOperations(int* nums, int numsSize, int k) {
      // Sort the array to apply two-pointer technique
      qsort(nums, numsSize, sizeof(int), compare);

      int l = 0, r = numsSize - 1;
      int pairs = 0;

      // Use two pointers to find pairs
      while (l < r) {
            // Check if the sum of the elements at the two pointers equals k
            if (nums[l] + nums[r] == k) {
                  pairs++;  // A valid pair is found, so increment the pair count
                  l++;  // Move the left pointer to the right
                  r--;  // Move the right pointer to the left
            } else if (nums[l] + nums[r] > k) {
                  r--;  // Move the right pointer to the left to decrease the sum
            } else {
                  l++;  // Move the left pointer to the right to increase the sum
            }
      }

      // Return the total number of pairs found
      return pairs;
}





