//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1431

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(candies)

//? 🧺 Space complexity ➺ O(n)

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
      // Allocate memory for the result array where the outcome for each kid will be stored
      bool* result = (bool*)malloc(candiesSize * sizeof(bool));
      *returnSize = candiesSize;

      // Calculate the maximum number of candies any single kid currently has
      int maxCandy = candies[0];
      // Iterate over each count in the candies array
      for (int i = 1; i < candiesSize; i++) {
            // Take the max our of every kid's candy
            if (candies[i] > maxCandy) {
                  maxCandy = candies[i];
            }
      }

      // Iterate over each count in the candies array
      for (int i = 0; i < candiesSize; i++) {
            // If a child has highest candy in hand after taking extra candies
            if (candies[i] + extraCandies >= maxCandy) {
                  // Set true for that child
                  result[i] = true;
            } else {
                  // Else set false for that child
                  result[i] = false;
            }
      }

      // Return result indicating whether each kid can or cannot have the most candies
      return result;
}

