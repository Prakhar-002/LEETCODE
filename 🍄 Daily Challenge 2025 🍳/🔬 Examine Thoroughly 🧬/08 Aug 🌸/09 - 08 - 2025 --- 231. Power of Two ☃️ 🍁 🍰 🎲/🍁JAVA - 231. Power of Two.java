//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 231

//? ⌚ Time complexity ➺ O(1)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public boolean isPowerOfTwo(int n) {
            // Step 1: Check if n is positive
            // Step 2: Use bitwise trick: a power of two has exactly one '1' in its binary form
            // For example: 8 -> 1000, 8 - 1 -> 0111, AND gives 0
            return n > 0 && (n & (n - 1)) == 0;
      }
}

// !---------------------------------------------------------------------------------------

// ? ⌚ Time complexity ➺ O(log n)

// ? 🧺 Space complexity ➺ O(1)

class Solution {
      public boolean isPowerOfTwo(int n) {
            // Base case: 1 is 2^0, so return true
            if (n == 1) {
                  return true;
            }

            // If n is less than or equal to 0, or not divisible by 2, it's not a power of two
            if (n <= 0 || n % 2 != 0) {
                  return false;
            }

            // Recursive case:
            // Keep dividing by 2 and check if it eventually becomes 1
            return isPowerOfTwo(n / 2);
      }
}
