//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest Maths L4 Q2

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
public:
      int trailingZeroes(int n) {
            int zeroes = 0;    // Count trailing zeros
            long long z = 5;   // Use long long to prevent overflow on big powers

            // Count multiples of powers of 5
            while (n / z > 0) {
                  zeroes += n / z;   // Add count of multiples of current power of 5
                  z *= 5;            // Move to next power of 5
            }

            return zeroes;  // Return total trailing zeroes
      }
};
