//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 209

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <limits.h>  // For INT_MAX

int minSubArrayLen(int target, int* nums, int numsSize) {
      int left = 0, sum = 0;
      int res = INT_MAX;  // Initialize result as maximum possible int

      // Use sliding window technique
      for (int right = 0; right < numsSize; right++) {
            sum += nums[right];  // Add current number to the window sum

            // Shrink the window while sum is ≥ target
            while (sum >= target) {
                  int length = right - left + 1;   // Calculate current window size
                  if (length < res) {
                        res = length;              // Update result if it's smaller
                  }
                  sum -= nums[left];               // Remove leftmost element
                  left++;                           // Move window's left bound forward
            }
      }

      // If res wasn't updated, no subarray was found → return 0
      return (res == INT_MAX) ? 0 : res;
}
