//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 605

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(flowerbed)

//? 🧺 Space complexity ➺ O(1)

var canPlaceFlowers = function (flowerbed, n) {
      // Start with `1` to account for the boundary condition at the start of the array.
      let empty = 1; 

      // Iterate over each slot in the flowerbed
      for (let flower of flowerbed) {
            if (flower === 1) {
                  // Adjust the count of `n` by decreasing it based on empty slots
                  n -= Math.floor((empty - 1) / 2);
                  // Reset `empty` to 0 since the current slot is occupied by a flower
                  empty = 0;
            } else {
                  // Increment `empty` if the current slot is empty
                  empty += 1;
            }
      }

      // Handle any remaining empty slots at the end of the flowerbed
      n -= Math.floor(empty / 2);

      // Return true if we can place all the flowers, false otherwise
      return n <= 0;
};

//!----------------------------------------------------------------------

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(flowerbed)

//? 🧺 Space complexity ➺ O(n)

function canPlaceFlowers(flowerbed, n) {
      // adds `0` at the beginning and end of the flowerbed to handle edge cases more smoothly 
      flowerbed = [0, ...flowerbed, 0];

      // `left` and `mid` are indices initialized to 0 and 1 respectively
      // help navigate through the flowerbed array
      let left = 0, mid = 1;

      // `newFlowers`: A counter to track how many new flowers can be planted
      let newFlowers = 0;

      //  iterates over the indices starting from 2 to the end of the new flowerbed
      for (let right = 2; right < flowerbed.length; right++) {
            //  For each triplet of positions (`left`, `mid`, `right`), it checks if all three are `0`
            // If true, it means a flower can be planted at index `mid`
            if (!flowerbed[left] && !flowerbed[mid] && !flowerbed[right]) {
                  // The counter `newFlowers` is incremented
                  newFlowers++;
                  // a flower is placed by setting `flowerbed[mid]` to `1`
                  flowerbed[mid] = 1;
            }

            // After checking a triplet, `left` and `mid` are incremented by 1 
            // to move to the next set of indices
            left++;
            mid++;
      }

      // Returns `true` if you can plant `n` or more flowers; otherwise, `false`
      return newFlowers >= n;
}