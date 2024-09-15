//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 342

//? ⌚ Time complexity ➺ O(1) 

//? 🧺 Space complexity ➺ O(1)

var isPowerOfFour = function (n) {
      // n > 0: Ensures the number is positive.
      // (n & (n - 1)) === 0: Checks if n is a power of 2 by ensuring only one bit is set
      // (n & 0x55555555) !== 0: Ensures that the set bit is in an even position (for powers of 4)
      return n > 0 && (n & (n - 1)) === 0 && (n & 0x55555555) !== 0;
};