//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest Maths L2 Q1

//? ⌚ Time complexity ➺ O(log n)

//? 🧺 Space complexity ➺ O(1)

function isUgly(n) {
      if (n < 1) {
            return false;  // Ugly numbers must be positive
      }

      // Remove factors of 2
      while (n % 2 === 0) {
            n /= 2;
      }

      // Remove factors of 3
      while (n % 3 === 0) {
            n /= 3;
      }

      // Remove factors of 5
      while (n % 5 === 0) {
            n /= 5;
      }

      // n is ugly only if reduced to 1
      return n === 1;
}
