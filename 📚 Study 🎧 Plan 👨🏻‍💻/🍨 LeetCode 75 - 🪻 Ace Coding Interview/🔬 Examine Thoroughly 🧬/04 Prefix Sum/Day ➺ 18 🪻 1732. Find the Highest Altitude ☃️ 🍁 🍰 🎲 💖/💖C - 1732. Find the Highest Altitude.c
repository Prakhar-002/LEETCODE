//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1732

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(gain)

//? 🧺 Space complexity ➺ O(1)

#include <stdio.h>
#include <limits.h> 

int largestAltitude(int* gain, int gainSize) {
      // Initialize the highest altitude to negative infinity
      int highAltitude = INT_MIN;

      // Initialize the current altitude to 0
      int curSum = 0;

      // Iterate through the gain array to calculate altitudes
      for (int i = 0; i < gainSize; i++) {
            // Add the current gain to the cumulative altitude
            curSum += gain[i];

            // Update the highest altitude encountered so far
            if (curSum > highAltitude) {
                  highAltitude = curSum;
            }
      }

      // If the highest altitude is positive, return it; otherwise, return 0
      return highAltitude > 0 ? highAltitude : 0;
}
