//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1800

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <stdio.h>

// Function to find the maximum ascending sum
int maxAscendingSum(int nums[], int size) {
      // Initialize maxSum to store the maximum ascending sum
      int maxSum = nums[0];  
      // curSum stores the sum of the current ascending subarray
      int curSum = nums[0];  

      // Iterate through the array from index 1
      for (int i = 1; i < size; i++) {
            // Check if the current element is greater than the previous one (strictly increasing)
            if (nums[i - 1] < nums[i]) {  
                  curSum += nums[i];  // Add the current element to curSum
            } else {
                  if (curSum > maxSum) {  // Update maxSum if curSum is greater
                        maxSum = curSum;
                  }
                  curSum = nums[i];  // Start a new subarray sum with current element
            }
      }

      // Return the maximum found sum
      return curSum > maxSum ? curSum : maxSum;
}