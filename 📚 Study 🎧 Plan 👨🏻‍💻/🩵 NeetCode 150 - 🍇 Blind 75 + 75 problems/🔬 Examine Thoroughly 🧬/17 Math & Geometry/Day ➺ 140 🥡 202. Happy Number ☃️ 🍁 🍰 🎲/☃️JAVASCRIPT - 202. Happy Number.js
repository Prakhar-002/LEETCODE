//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 202

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var myPow = function (x, n) {
      // Recursive helper function for exponentiation
      function pow(x, n) {
            // Base case: any number^0 = 1
            if (n === 0) {
                  return 1.0;
            }

            // Base case: 0^n = 0 for n > 0
            if (x === 0) {
                  return 0.0;
            }

            // Recursively compute x^(n/2)
            const res = pow(x, Math.floor(n / 2));

            // Even exponent: (x^(n/2))^2
            // Odd exponent: (x^(n/2))^2 * x
            return n % 2 === 0 ? res * res : res * res * x;
      }

      // Compute absolute power first
      const result = pow(x, Math.abs(n));

      // Handle negative exponents by taking reciprocal
      return n >= 0 ? result : 1 / result;
};
