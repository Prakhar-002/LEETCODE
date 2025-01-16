//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2425

//? ⌚ Time complexity ➺ O(n + m) 👉🏻  n = len(nums1)

//? 🧺 Space complexity ➺ O(1)    👉🏻  m = len(nums2)  

#include <stdio.h>

// Helper function to compute XOR of all elements in the array
int xorArray(const int* nums, int size) {
      int x = 0; // Initialize XOR accumulator to 0
      for (int i = 0; i < size; i++) {
            x ^= nums[i]; // XOR each number with the accumulator
      }
      return x; // Return the final XOR result
}

int xorAllNums(const int* nums1, int len1, const int* nums2, int len2) {
      // Case 1: If both lengths are even, XOR of all pairs is 0
      if (len1 % 2 == 0 && len2 % 2 == 0) {
            return 0;
      }

      // Case 2: If nums1 length is even, XOR of all pairs is nums1's XOR
      if (len1 % 2 == 0) {
            return xorArray(nums1, len1);
      }

      // Case 3: If nums2 length is even, XOR of all pairs is nums2's XOR
      if (len2 % 2 == 0) {
            return xorArray(nums2, len2);
      }

      // Case 4: If both lengths are odd, XOR of all pairs is XOR of both arrays
      return xorArray(nums1, len1) ^ xorArray(nums2, len2);
}
