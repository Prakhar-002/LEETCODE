//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest Maths L6 Q1

//? ⌚ Time complexity ➺ O(k) 👉🏻  k = 32

//? 🧺 Space complexity ➺ O(1)

var hammingWeight = function (n) {
      // Counter to store the number of 1 bits
      let oneBit = 0;

      // Loop until all bits are processed
      while (n > 0) {
            // Check if the least significant bit is 1
            if ((n & 1) === 1) {
                  oneBit++; // Increment count if bit is 1
            }

            // Right shift n by 1 to check the next bit
            n = n >>> 1; // Unsigned shift to handle negative numbers correctly
      }

      // Return the total count of 1 bits
      return oneBit;
};