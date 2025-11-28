//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 202

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var isHappy = function (n) {
      // Helper function: sum of squares of digits
      function sumOfSqr(num) {
            let total = 0;
            while (num > 0) {
                  let digit = num % 10;
                  total += digit * digit;  // Square each digit
                  num = Math.floor(num / 10);  // Remove last digit
            }
            return total;
      }

      const visit = new Set();  // Track visited numbers to detect cycles

      // Continue until we reach 1 (happy) or cycle detected (unhappy)
      while (n !== 1 && !visit.has(n)) {
            visit.add(n);                    // Mark current number as visited
            n = sumOfSqr(n);                 // Replace with sum of squares
      }

      // Return true only if we reached 1
      return n === 1;
};
