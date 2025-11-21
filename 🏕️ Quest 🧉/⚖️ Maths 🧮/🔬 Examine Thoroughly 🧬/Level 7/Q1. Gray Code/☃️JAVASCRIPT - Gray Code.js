//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest Maths L7 Q1

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

function grayCode(n) {
      let result = [];
      let totalNumbers = 1 << n;  // Calculate total count, 2^n

      // Generate Gray code for each value from 0 to 2^n - 1
      for (let i = 0; i < totalNumbers; i++) {
            // Gray code: XOR number with its right-shifted self
            result.push(i ^ (i >> 1));
      }

      return result;  // List of n-bit Gray code numbers
}
