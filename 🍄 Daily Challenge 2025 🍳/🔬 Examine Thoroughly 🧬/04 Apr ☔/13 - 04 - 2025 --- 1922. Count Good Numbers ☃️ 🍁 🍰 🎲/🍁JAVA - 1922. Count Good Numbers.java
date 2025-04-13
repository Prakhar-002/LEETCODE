//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1922

//? ⌚ Time complexity ➺ O(log n) 

//? 🧺 Space complexity ➺ O(1)

class Solution {
      // Define the modulo constant to avoid overflow in large number operations
      private static final int MOD = 1_000_000_007;

      // Helper function to compute (base^exp) % MOD using fast modular exponentiation
      private long powerMod(long base, long exp) {
            long result = 1; // Initialize the result
            long multiplier = base; // Multiplier starts as base

            // Repeat until exponent becomes 0
            while (exp > 0) {
                  if (exp % 2 == 1) { // If the exponent is odd
                        result = result * multiplier % MOD; // Multiply with current power
                  }
                  multiplier = multiplier * multiplier % MOD; // Square the base
                  exp /= 2; // Divide exponent by 2 (binary method)
            }

            return result; // Return the final result modulo MOD
      }

      public int countGoodNumbers(long n) {
            // Even index positions (0-based): can have 5 options [0, 2, 4, 6, 8]
            long evenCount = (n + 1) / 2;

            // Odd index positions: can have 4 options [2, 3, 5, 7]
            long oddCount = n / 2;

            // Calculate (5^evenCount * 4^oddCount) % MOD
            long goodNumbers = powerMod(5, evenCount) * powerMod(4, oddCount) % MOD;

            // Return final result as int (safe since MOD < 2^31)
            return (int) goodNumbers;
      }
}
