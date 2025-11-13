//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest Maths L4 Q2

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

function trailingZeroes(n) {
      let zeroes = 0;   // Count of trailing zeros
      let z = 5;        // Starting with first power of 5

      // Count all multiples of 5, 25, 125, etc.
      while (Math.floor(n / z) > 0) {
            zeroes += Math.floor(n / z);  // Add multiples of current power
            z *= 5;                      // Next power of 5
      }

      return zeroes;   // Total trailing zeros in factorial of n
}
