//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 643

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <stdio.h>
#include <limits.h>

double findMaxAverage(int* nums, int numsSize, int k) {
      int l = 0;  // Left pointer of the sliding window
      int cur_sum = 0;  // To store the sum of elements within the window
      double max_sum = INT_MIN;  // Initialize max_sum to negative infinity

      // Loop through the array with the right pointer (r)
      for (int r = 0; r < numsSize; r++) {
            cur_sum += nums[r];  // Add the current element to the current window sum

            // If the window size reaches k, check for the max sum
            if (r - l + 1 == k) {
                  if (cur_sum > max_sum) {
                        max_sum = cur_sum;  // Update the maximum sum
                  }
                  cur_sum -= nums[l];  // Remove the element at the left of the window
                  l++;  // Move the left pointer to the right to slide the window
            }
      }

      return max_sum / k;  // Return the maximum average (max_sum divided by k)
}
