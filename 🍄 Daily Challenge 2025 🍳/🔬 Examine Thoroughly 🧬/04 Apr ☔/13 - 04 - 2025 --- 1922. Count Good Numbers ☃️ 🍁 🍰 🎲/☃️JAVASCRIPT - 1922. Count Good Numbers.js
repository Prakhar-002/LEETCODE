//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1922

//? ⌚ Time complexity ➺ O(log n) 

//? 🧺 Space complexity ➺ O(1)

var countGoodNumbers = function (n) {
      const mod = 1000000007n;  // Define the modulo value using BigInt to handle large numbers

      // Helper function to perform fast exponentiation: calculates (x^y) % mod
      function quickMul(base, exp) {
            let result = 1n;  // Initialize the result variable to 1
            let multiplier = base;   // Set the initial multiplier to x

            // While exponent exp is greater than 0
            while (exp > 0) {
                  if (exp % 2n === 1n) {  // If the exponent is odd
                        result = (result * multiplier) % mod;  // Multiply result with the current multiplier and take modulo
                  }

                  multiplier = (multiplier * multiplier) % mod;  // Square the multiplier and take modulo
                  exp = exp / 2n;  // Divide the exponent by 2
            }

            return result;  // Return the final result after exponentiation and modulo
      }

      // Use quickMul to calculate (5^(n+1)/2 * 4^(n/2)) % mod and return as a Number
      return Number(
            (quickMul(5n, BigInt(n + 1) / 2n) * quickMul(4n, BigInt(n) / 2n)) % mod,
      );
};
