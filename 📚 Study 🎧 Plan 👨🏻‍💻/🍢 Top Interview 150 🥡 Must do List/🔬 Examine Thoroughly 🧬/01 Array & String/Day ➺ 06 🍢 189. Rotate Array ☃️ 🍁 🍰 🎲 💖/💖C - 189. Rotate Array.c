//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 189

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <stdio.h>

void reverseArray(int* arr, int start, int end) {
      // Helper function to reverse a portion of the array
      while (start < end) {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
      }
}

void rotate(int* nums, int numsSize, int k) {
      // Handle cases where k is greater than the array length
      k = k % numsSize;

      // Reverse the first part of the array
      reverseArray(nums, 0, numsSize - k - 1);

      // Reverse the second part of the array
      reverseArray(nums, numsSize - k, numsSize - 1);

      // Reverse the entire array to achieve rotation
      reverseArray(nums, 0, numsSize - 1);
}
