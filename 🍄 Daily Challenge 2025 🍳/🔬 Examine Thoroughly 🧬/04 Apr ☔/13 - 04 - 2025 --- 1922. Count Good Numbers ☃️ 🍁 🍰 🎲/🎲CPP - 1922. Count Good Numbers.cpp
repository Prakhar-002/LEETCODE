//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1922

//? ⌚ Time complexity ➺ O(log n)

//? 🧺 Space complexity ➺ O(1)

class Solution {
public:
      // Define the modulo constant to handle large number results
      const long long MOD = 1e9 + 7;

      // Helper function to compute (base^exp) % MOD using binary exponentiation
      long long powerMod(long long base, long long exp) {
            long long result = 1;            // Initialize result
            long long multiplier = base;     // Set multiplier to base

            // Loop until exponent becomes 0
            while (exp > 0) {
                  if (exp % 2 == 1) {        // If exponent is odd
                        result = result * multiplier % MOD;  // Multiply current result
                  }
                  multiplier = multiplier * multiplier % MOD; // Square the multiplier
                  exp /= 2;                  // Divide exponent by 2
            }

            return result;                   // Return the computed power modulo MOD
      }

      int countGoodNumbers(long long n) {
            long long evenCount = (n + 1) / 2;   // Number of digits at even indices
            long long oddCount = n / 2;          // Number of digits at odd indices

            // Even positions → 5 choices: [0, 2, 4, 6, 8]
            // Odd positions  → 4 choices: [2, 3, 5, 7]

            // Calculate the result using powerMod function
            long long result = powerMod(5, evenCount) * powerMod(4, oddCount) % MOD;

            return (int)result;                 // Return result as int (safe due to MOD)
      }
};
