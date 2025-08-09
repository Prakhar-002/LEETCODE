//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 231

//? ⌚ Time complexity ➺ O(1)

//? 🧺 Space complexity ➺ O(1)

var isPowerOfTwo = function (n) {
      // Step 1: Ensure n is positive
      // Step 2: Bitwise trick — only powers of two have (n & (n - 1)) == 0
      return n > 0 && (n & (n - 1)) === 0;
};

//!---------------------------------------------------------------------------------------

//? ⌚ Time complexity ➺ O(log n)

//? 🧺 Space complexity ➺ O(1)

var isPowerOfTwo = function(n) {
      // Base case: 1 is 2^0, so return true
      if (n === 1) {
            return true;
      }

      // If n is less than or equal to 0, or not divisible by 2, it's not a power of two
      if (n <= 0 || n % 2 !== 0) {
            return false;
      }

      // Recursive case:
      // Keep dividing by 2 and check again
      return isPowerOfTwo(Math.floor(n / 2));
};
