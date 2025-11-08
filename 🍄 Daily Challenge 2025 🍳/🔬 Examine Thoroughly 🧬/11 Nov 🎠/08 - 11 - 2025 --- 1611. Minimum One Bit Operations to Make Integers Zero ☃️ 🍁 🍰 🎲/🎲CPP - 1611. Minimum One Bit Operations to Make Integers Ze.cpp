//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1611

//? ⌚ Time complexity ➺ O(log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
public:
      // Recursive solution for minimum one-bit flips to zero
      int minimumOneBitOperations(int n) {
            if (n == 0) return 0;
            // Highest set bit position
            int k = 31 - __builtin_clz(n);
            int allOnes = (1 << (k + 1)) - 1;
            // Recursive call after removing highest set bit by XOR
            return allOnes - minimumOneBitOperations((1 << k) ^ n);
      }
};
