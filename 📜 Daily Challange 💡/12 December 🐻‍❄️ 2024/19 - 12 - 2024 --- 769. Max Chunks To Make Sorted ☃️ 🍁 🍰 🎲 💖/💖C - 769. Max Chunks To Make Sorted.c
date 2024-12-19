//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 769

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(arr)

//? 🧺 Space complexity ➺ O(1)

#include <stdio.h>
#include <stdlib.h>

int maxChunksToSorted(int* arr, int arrSize) {
      int chunks = 0, maxElement = 0;

      // Iterate over the array
      for (int i = 0; i < arrSize; i++) {
            // Update maxElement
            if (arr[i] > maxElement) {
                  maxElement = arr[i];
            }

            if (maxElement == i) {
                  // All values in range [0, i] belong to the prefix arr[0:i]; a new chunk can be formed
                  chunks++;
            }
      }

      return chunks;
}
