//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 11

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(height)

//? 🧺 Space complexity ➺ O(1)

#include <stdio.h>
#include <stdlib.h>

int maxArea(int* height, int heightSize) {
      // Initialize two pointers: one at the beginning and one at the end of the array
      int left = 0;
      int right = heightSize - 1;

      // Variable to store the maximum water area found
      int maxWater = 0;

      // Iterate until the two pointers meet
      while (left <= right) {
            // Calculate the current water area
            int currentArea = (right - left) * (height[left] < height[right] ? height[left] : height[right]);

            // Update the maximum if this area is larger
            if (currentArea > maxWater) {
                  maxWater = currentArea;
            }

            // Move the pointer corresponding to the smaller height inward
            if (height[left] < height[right]) {
                  left++;
            } else {
                  right--;
            }
      }

      // Return the maximum water area found
      return maxWater;
}
