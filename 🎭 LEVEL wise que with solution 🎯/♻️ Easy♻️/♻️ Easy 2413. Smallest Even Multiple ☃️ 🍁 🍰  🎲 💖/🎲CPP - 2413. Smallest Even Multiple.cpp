//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2413

// ? ⌚ Time complexity ➺ O(1)

// ? 🧺 Space complexity ➺ O(1)

class Solution {
      public:
            int smallestEvenMultiple(int n) {
                  // Check if `n` is already even (divisible by 2)
                        // If even, the smallest even multiple is the number itself
                        // If odd, the smallest even multiple is twice the number
                  return (n % 2 == 0) ? n : n * 2;
            }
};
