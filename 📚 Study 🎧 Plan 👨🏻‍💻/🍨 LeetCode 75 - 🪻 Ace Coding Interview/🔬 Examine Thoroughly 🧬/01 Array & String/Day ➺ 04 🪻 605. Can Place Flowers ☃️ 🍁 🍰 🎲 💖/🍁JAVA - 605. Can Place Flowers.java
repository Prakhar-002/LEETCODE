//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 605

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(flowerbed)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public boolean canPlaceFlowers(int[] flowerbed, int n) {
            // empty set to `0` if first slot has flower(1) else 1
            int empty = flowerbed[0] == 1 ? 0 : 1;

            // iterates over each slot in the flowerbed 
            for (int flower : flowerbed) {
                  // If the current slot is taken by a flower
                  if (flower == 1) {
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
}

//!----------------------------------------------------------------------

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(flowerbed)

//? 🧺 Space complexity ➺ O(n)

class Solution {
      public boolean canPlaceFlowers(int[] flowerbed, int n) {
            // adds `0` at the beginning and end of the flowerbed to handle edge cases smoothly
            int[] extendedFlowerbed = new int[flowerbed.length + 2];

            // `flowerbed`: The source array from which elements are copied.
            // `0`: The starting position in the source array (i.e., from the first element).
            // `extendedFlowerbed`: The destination array where elements are copied to.
            // `1`: The starting position in the destination array where the copied elements will be placed.
            // `flowerbed.length`: The number of elements to be copied from the source array.
            System.arraycopy(flowerbed, 0, extendedFlowerbed, 1, flowerbed.length);

            // `left` and `mid` are indices initialized to 0 and 1 respectively
            // help navigate through the flowerbed array
            int left = 0, mid = 1;

            // `newFlowers`: A counter to track how many new flowers can be planted
            int newFlowers = 0;

            // iterates over the indices starting from 2 to the end of the new flowerbed
            for (int right = 2; right < extendedFlowerbed.length; right++) {
                  // For each triplet of positions (`left`, `mid`, `right`), it checks if all
                  // three are `0`
                  // If true, it means a flower can be planted at index `mid`
                  if (extendedFlowerbed[left] == 0 && extendedFlowerbed[mid] == 0 && extendedFlowerbed[right] == 0) {
                        // The counter `newFlowers` is incremented
                        newFlowers++;
                        // a flower is placed by setting `extendedFlowerbed[mid]` to `1`
                        extendedFlowerbed[mid] = 1;
                  }

                  // After checking a triplet, `left` and `mid` are incremented by 1
                  // to move to the next set of indices
                  left++;
                  mid++;
            }

            // Returns `true` if you can plant `n` or more flowers; otherwise, `false`
            return newFlowers >= n;
      }
}
