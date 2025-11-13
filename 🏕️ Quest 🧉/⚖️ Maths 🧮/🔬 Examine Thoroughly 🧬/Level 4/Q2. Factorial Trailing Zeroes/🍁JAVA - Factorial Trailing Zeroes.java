//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest Maths L4 Q2

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int trailingZeroes(int n) {
            int zeroes = 0;    // Initialize count of trailing zeros
            int z = 5;         // Start with the smallest power of 5

            // Loop until n divided by current power of 5 is zero
            while (n / z > 0) {
                  zeroes += n / z;   // Add how many multiples of current power of 5
                  z *= 5;            // Increase to next power of 5 (5, 25, 125, ...)
            }

            return zeroes;  // Total count of trailing zeros in n!
      }
}
