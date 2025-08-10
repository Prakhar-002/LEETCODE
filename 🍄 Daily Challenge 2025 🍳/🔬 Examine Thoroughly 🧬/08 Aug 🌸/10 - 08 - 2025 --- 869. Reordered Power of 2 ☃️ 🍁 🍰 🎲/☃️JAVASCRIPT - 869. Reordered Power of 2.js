//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 869

//? ⌚ Time complexity ➺ O(d log d) 👉🏻  d = Digits in n

//? 🧺 Space complexity ➺ O(d)

// Checks if n's digits can be rearranged into a power of 2
var reorderedPowerOf2 = function (n) {
      // Helper: Get sorted digit string of a number
      function countDigits(x) {
            return String(x).split('').sort().join('');
      }

      // Canonical sorted digits string of input n
      let target = countDigits(n);

      // Test all powers of 2 up to 2^30
      for (let i = 0; i < 31; i++) {
            // Compute power of 2, sort its digits
            let powerDigits = countDigits(1 << i);
            // Check for digit match
            if (powerDigits === target) {
                  return true;
            }
      }
      // No match found
      return false;
}