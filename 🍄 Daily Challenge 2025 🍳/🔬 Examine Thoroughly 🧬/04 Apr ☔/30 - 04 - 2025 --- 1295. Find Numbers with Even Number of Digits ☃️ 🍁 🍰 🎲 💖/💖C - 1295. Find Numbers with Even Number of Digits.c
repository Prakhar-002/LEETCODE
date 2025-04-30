//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1295

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <stdio.h>

int findNumbers(int* nums, int numsSize) {
      int res = 0;  // Initialize result counter

      for (int i = 0; i < numsSize; i++) {
            int num = nums[i];  // Get current number

            // Check if number has 2, 4, or 6 digits
            if ((num > 9 && num < 100) || (num > 999 && num < 10000) || num == 100000) {
                  res++;  // Increase count if condition satisfied
            }
      }

      return res;  // Return the final count
}
