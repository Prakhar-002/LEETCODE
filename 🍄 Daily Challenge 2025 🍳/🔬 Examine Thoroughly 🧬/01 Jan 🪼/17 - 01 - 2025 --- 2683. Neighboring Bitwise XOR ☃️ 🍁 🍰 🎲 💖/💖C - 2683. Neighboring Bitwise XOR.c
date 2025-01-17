//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2683

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(derived)

//? 🧺 Space complexity ➺ O(1)

#include <stdbool.h>

bool doesValidArrayExist(int* derived, int size) {
      // XOR all elements in the array
      int res = 0;
      for (int i = 0; i < size; i++) {
            res ^= derived[i];
      }

      // A valid array exists if the XOR result is 0
      return res == 0;
}

//!--------------------------------------------------------------------- 

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(derived)

//? 🧺 Space complexity ➺ O(1)

#include <stdbool.h>

bool doesValidArrayExist(int* derived, int size) {
      // Initialize variables to represent the first and last elements of the array.
      int firstElem = 0;
      int lastElem = 0;

      // Iterate through the derived array to compute the value of lastElem
      // based on XOR logic (simulated using ~lastElem for binary flipping).
      for (int i = 0; i < size; i++) {
            if (derived[i] == 1) { // If the current bit is 1, toggle lastElem
                  lastElem = ~lastElem;
            }
      }

      // Check if the first and last elements are equal, indicating validity.
      return firstElem == lastElem;
}
