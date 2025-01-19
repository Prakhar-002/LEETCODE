//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 42

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(Height)

//? 🧺 Space complexity ➺ O(n)

#include <stdio.h>
#include <stdlib.h>

int trap(int* height, int heightSize) {
      int* right = (int*)malloc(heightSize * sizeof(int));
      int* left = (int*)malloc(heightSize * sizeof(int));

      // Array to store the maximum height to the right of each element
      right[0] = height[0];

      // Populate the right max array
      for (int i = 1; i < heightSize; i++) {
            right[i] = (right[i - 1] > height[i]) ? right[i - 1] : height[i];
      }

      // Array to store the maximum height to the left of each element
      left[heightSize - 1] = height[heightSize - 1];

      // Populate the left max array
      for (int i = heightSize - 2; i >= 0; i--) {
            left[i] = (left[i + 1] > height[i]) ? left[i + 1] : height[i];
      }

      // Calculate the total volume of water trapped
      int volume = 0;
      
      for (int i = 0; i < heightSize; i++) {
            // Water trapped at each index is determined by the minimum
            // of left and right max heights minus the height at the index
            int min_height = (left[i] < right[i]) ? left[i] : right[i];
            volume += (min_height - height[i]);
      }

      free(right);
      free(left);
      return volume; // Return the total water trapped
}
