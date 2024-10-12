//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 605

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(flowerbed)

//? 🧺 Space complexity ➺ O(1)

#include <stdbool.h>
#include <stdlib.h>

bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n) {
      // empty set to `0` if first slot has flower(1) else 1
      int empty = flowerbed[0] ? 0 : 1;

      // iterates over each slot in the flowerbed 
      for (int i = 0; i < flowerbedSize; i++) {
            // If the current slot is taken by a flower
            if (flowerbed[i]) {
                  // adjusts the count of `n` by decreasing it
                  // dec by new flowers can be planted in the sequence 
                  // of empty slots according to the planting rule
                  n -= (empty - 1) / 2; // if (empty = 7) => (n -= 3)
                  // resets `empty` to `0` because the sequence of empty slots has ended
                  empty = 0;
            }
            // if encountering an empty slot 
            else {
                  // increments the `empty` variable by `1`
                  empty++;
            }
      }

      // if we still have empty slots we dec the n by placing flower there
      n -= empty / 2;
      // return if n is 0 or -ve
      return n <= 0;
}

//!----------------------------------------------------------------------

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(flowerbed)

//? 🧺 Space complexity ➺ O(n)

#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n) {
      // adds `0` at the beginning and end of the flowerbed to handle edge cases more smoothly 
      int newSize = flowerbedSize + 2;
      int* newFlowerbed = (int*)malloc(newSize * sizeof(int));

      // initialize first elem to 0
      newFlowerbed[0] = 0;
      // copy the memory of prev array `flowerbed`
      memcpy(newFlowerbed + 1, flowerbed, flowerbedSize * sizeof(int));
      // initialize last elem to 0
      newFlowerbed[newSize - 1] = 0;

      // `left` and `mid` are indices initialized to 0 and 1 respectively
      // help navigate through the flowerbed list
      int left = 0, mid = 1;

      // `newFlowers`: A counter to track how many new flowers can be planted
      int newFlowers = 0;

      //  iterates over the indices starting from 2 to the end of the new flowerbed
      for (int right = 2; right < newSize; right++) {
            //  For each triplet of positions (`left`, `mid`, `right`), it checks if all three are `0`
            // If true, it means a flower can be planted at index `mid`
            if (!newFlowerbed[left] && !newFlowerbed[mid] && !newFlowerbed[right]) {
                  // The counter `newFlowers` is incremented
                  newFlowers++;
                  // a flower is placed by setting `newFlowerbed[mid]` to `1`
                  newFlowerbed[mid] = 1;
            }

            // After checking a triplet, `left` and `mid` are incremented by 1 
            // to move to the next set of indices
            left++;
            mid++;
      }

      free(newFlowerbed);
      // Returns `true` if you can plant `n` or more flowers; otherwise, `false`
      return newFlowers >= n;
}

