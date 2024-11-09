//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2275

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var largestCombination = function (candidates) {
      // Initialize an array `countBit` of size 32 to keep track of the count of '1' bits at each bit position
      // We assume a 32-bit integer representation for all candidates
      const countBit = new Array(32).fill(0);

      // Iterate through each candidate in the list of candidates
      for (let candidate of candidates) {
            let i = 0;  // Bit position index, starting from the least significant bit

            // While there are still bits left in the candidate
            while (candidate) {
                  // Use bitwise AND to check if the current bit (least significant) is 1
                  // If it is, increment the count for this bit position in `countBit`
                  countBit[i] += candidate & 1;

                  // Move to the next bit position
                  i++;

                  // Right shift `candidate` by 1 to process the next bit
                  candidate = candidate >> 1;
            }
      }

      // Return the maximum value in `countBit`, representing the highest count of '1's in any bit position
      return Math.max(...countBit);
};

