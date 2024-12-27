//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1014

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(values)

//? 🧺 Space complexity ➺ O(1)

#include <stdio.h>
#include <stdlib.h>

int maxScoreSightseeingPair(int* values, int valuesSize) {
      int res = 0; // Stores the maximum score found so far
      int cur_max = values[0]; // Tracks the current maximum value of values[i] + i

      // Iterate through the array starting from the second element
      for (int i = 1; i < valuesSize; i++) {
            // Decrement cur_max by 1 as we move to the next index
            cur_max--;

            // Update the result with the maximum score found so far
            res = cur_max + values[i] > res ? cur_max + values[i] : res;

            // Update cur_max to the maximum value of cur_max or values[i] + i
            cur_max = cur_max > values[i] ? cur_max : values[i];
      }

      // Return the maximum score
      return res;
}
