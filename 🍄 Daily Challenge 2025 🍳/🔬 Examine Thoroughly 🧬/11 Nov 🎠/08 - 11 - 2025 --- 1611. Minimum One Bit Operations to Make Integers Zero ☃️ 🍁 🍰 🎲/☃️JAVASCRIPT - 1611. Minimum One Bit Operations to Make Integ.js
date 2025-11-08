//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1611

//? ⌚ Time complexity ➺ O(log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

// Recursive method for minimum one-bit operations
var minimumOneBitOperations = function (n) {
      if (n === 0) {
            return 0;
      }
      // Highest set bit index (0-based)
      const k = Math.floor(Math.log2(n));
      const allOnes = (1 << (k + 1)) - 1;
      // Recursive call on n XOR highest bit
      return allOnes - minimumOneBitOperations((1 << k) ^ n);
}
