//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 231

//? ⌚ Time complexity ➺ O(1)

//? 🧺 Space complexity ➺ O(1)

class Solution {
public:
      bool isPowerOfTwo(int n) {
            // Step 1: n must be positive
            // Step 2: Bitwise trick (n & (n - 1)) == 0 only for powers of two
            return n > 0 && (n & (n - 1)) == 0;
      }
};

//!---------------------------------------------------------------------------------------

//? ⌚ Time complexity ➺ O(log n)

//? 🧺 Space complexity ➺ O(1)

class Solution {
public:
      bool isPowerOfTwo(int n) {
            // Base case: 1 is 2^0, so return true
            if (n == 1) {
                  return true;
            }

            // If n is less than or equal to 0, or not divisible by 2, it's not a power of two
            if (n <= 0 || n % 2 != 0) {
                  return false;
            }

            // Recursive case:
            // Keep dividing by 2 and check again
            return isPowerOfTwo(n / 2);
      }
};
