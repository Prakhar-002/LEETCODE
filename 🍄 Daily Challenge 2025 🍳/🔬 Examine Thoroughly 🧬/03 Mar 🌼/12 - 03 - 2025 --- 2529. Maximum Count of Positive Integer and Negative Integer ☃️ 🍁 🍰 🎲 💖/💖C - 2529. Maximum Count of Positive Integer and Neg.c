//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2529

//? ⌚ Time complexity ➺ O(log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <stdio.h>

// Function to count negative numbers using binary search
int countNegatives(int* nums, int numsSize) {
      int left = 0, right = numsSize - 1; // Define search boundaries

      while (left <= right) {
            int mid = (left + right) / 2; // Find middle index

            if (nums[mid] < 0) {
                  left = mid + 1; // Move right to find first non-negative number
            } else {
                  right = mid - 1; // Search in the left half
            }
      }

      return left; // Index of first non-negative number = count of negatives
}

// Function to count positive numbers using binary search
int countPositives(int* nums, int numsSize) {
      int left = 0, right = numsSize - 1; // Define search boundaries

      while (left <= right) {
            int mid = (left + right) / 2; // Find middle index

            if (nums[mid] <= 0) {
                  left = mid + 1; // Move right to find first positive number
            } else {
                  right = mid - 1; // Search in the left half
            }
      }

      return numsSize - left; // Count of positive numbers
}

// Function to return the maximum count of either negative or positive numbers
int maximumCount(int* nums, int numsSize) {
      int negCount = countNegatives(nums, numsSize); // Count negative numbers
      int posCount = countPositives(nums, numsSize); // Count positive numbers

      return (negCount > posCount) ? negCount : posCount; // Return the larger count
}
