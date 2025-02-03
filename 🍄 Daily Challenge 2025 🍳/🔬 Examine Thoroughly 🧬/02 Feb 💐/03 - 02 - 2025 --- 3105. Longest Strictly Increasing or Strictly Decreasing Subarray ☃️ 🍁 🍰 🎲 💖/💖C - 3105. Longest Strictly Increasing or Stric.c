//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3105

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <stdio.h>

// Function to find the longest monotonic subarray
int longestMonotonicSubarray(int nums[], int length) {
      // Variables to track increasing and decreasing subsequences
      int inc = 1, dec = 1, maxLength = 1;

      // Iterate to find the longest decreasing subarray
      for (int i = 1; i < length; i++) {
            if (nums[i] < nums[i - 1]) {
                  dec++; // Increase dec count
            } else {
                  dec = 1; // Reset dec count
            }
            if (dec > maxLength) maxLength = dec;
      }

      // Iterate to find the longest increasing subarray
      for (int i = 1; i < length; i++) {
            if (nums[i] > nums[i - 1]) {
                  inc++; // Increase inc count
            } else {
                  inc = 1; // Reset inc count
            }
            if (inc > maxLength) maxLength = inc;
      }

      // Return the maximum length found
      return maxLength;
}
