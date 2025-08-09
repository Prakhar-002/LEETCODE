//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 477

//? ⌚ Time complexity ➺ O(32 * n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var totalHammingDistance = function (nums) {
      let n = nums.length;  // Number of elements in the array
      let total = 0;        // Store total Hamming distance

      // Iterate through all 32 bit positions
      for (let bit = 0; bit < 32; bit++) {
            let countOnes = 0; // Count numbers having 1 at this bit position

            // Count the number of 1 bits at current position
            for (let num of nums) {
                  countOnes += (num >> bit) & 1;
            }

            // Numbers having 0 at current bit position
            let countZeros = n - countOnes;

            // Each 1 can form a distance of 1 with each 0
            total += countOnes * countZeros;
      }

      // Return the final total Hamming distance
      return total;
};
