//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 461

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = 32

//? 🧺 Space complexity ➺ O(1)

var hammingDistance = function (x, y) {
      // Step 1: XOR the two numbers
      // All bits that differ will be 1 in the result
      let d = x ^ y;

      // Step 2: Counter for differing bits
      let count = 0;

      // Step 3: Brian Kernighan's algorithm
      // Loop until all set bits are removed
      while (d !== 0) {
            // Remove the lowest set bit (turns the rightmost 1 into 0)
            d &= d - 1;

            // Increment the count for each removed 1-bit
            count++;
      }

      // Step 4: Return the total number of differing bits
      return count;
};
