//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 624

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(arrays)

//? 🧺 Space complexity ➺ O(1)

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// Macro for finding maximum of two numbers
#define MAX(a, b) ((a) > (b) ? (a) : (b))

// Macro for finding minimum of two numbers
#define MIN(a, b) ((a) < (b) ? (a) : (b))

int maxDistance(int** arrays, int arraysSize, int* arraysColSize) {
      // Assign the minimum and maximum values from the first array
      int curMin = arrays[0][0];
      int curMax = arrays[0][arraysColSize[0] - 1];

      // Track of the maximum absolute difference found so far
      int maxDifference = 0;

      // Loop from 2nd array
      for (int i = 1; i < arraysSize; i++) {
            // Extract the current array
            int* arr = arrays[i];
            int arrSize = arraysColSize[i];

            // Take the max of all possibilities
            maxDifference = MAX(
                  maxDifference,
                  MAX(
                        // Diff between the highest value of the current arr - curMin
                        arr[arrSize - 1] - curMin,
                        // Diff between the `curMax` and the lowest value of the current arr
                        curMax - arr[0]
                  )
            );

            // Update the current min and max
            curMin = MIN(curMin, arr[0]);  // `curMin` and the first element
            curMax = MAX(curMax, arr[arrSize - 1]); // Current `curMax` and the last element
      }

      return maxDifference;
}
