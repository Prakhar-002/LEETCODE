//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2873

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <stdio.h>

long long maximumTripletValue(int *nums, int numsSize) {
      long long maxTripletValue = 0; // Stores the maximum triplet value
      long long maxSeen = 0;         // Tracks the maximum value encountered
      long long maxDifference = 0;   // Stores the maximum (maxSeen - nums[k]) value

      for (int k = 0; k < numsSize; k++) {
            // Compute the maximum possible value of (nums[i] - nums[j]) * nums[k]
            if (maxDifference * nums[k] > maxTripletValue) {
                  maxTripletValue = maxDifference * nums[k];
            }

            // Update maxDifference to track the highest (maxSeen - nums[k]) encountered
            if (maxSeen - nums[k] > maxDifference) {
                  maxDifference = maxSeen - nums[k];
            }

            // Update maxSeen to track the highest value seen so far
            if (nums[k] > maxSeen) {
                  maxSeen = nums[k];
            }
      }

      return maxTripletValue; // Return the maximum triplet value found
}


//!---------------------------------------------------------------------- 

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

//* Greedy + Prefix Suffix Array  

#include <stdio.h>

long long maximumTripletValue(int* nums, int numsSize) {
      long long maxTripletValue = 0; // Variable to store the maximum triplet value

      int leftMax[numsSize]; // Array to store max value to the left of each index
      int rightMax[numsSize]; // Array to store max value to the right of each index

      // Initialize arrays with 0
      for (int i = 0; i < numsSize; i++) {
            leftMax[i] = 0;
            rightMax[i] = 0;
      }

      // Compute leftMax and rightMax arrays
      for (int i = 1; i < numsSize; i++) {
            leftMax[i] = (leftMax[i - 1] > nums[i - 1]) ? leftMax[i - 1] : nums[i - 1]; // Max value from index 0 to i-1
            rightMax[numsSize - 1 - i] = (rightMax[numsSize - i] > nums[numsSize - i]) ? rightMax[numsSize - i] : nums[numsSize - i]; // Max value from i+1 to end
      }

      // Iterate over each possible middle element of the triplet
      for (int j = 1; j < numsSize - 1; j++) {
            long long value = (long long)(leftMax[j] - nums[j]) * rightMax[j];
            if (value > maxTripletValue) {
                  maxTripletValue = value;
            }
      }

      return maxTripletValue; // Return the maximum triplet value
}

