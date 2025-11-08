//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1611

//? ⌚ Time complexity ➺ O(log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      // Recursive solution to find minimum one-bit operations using Gray code logic
      public int minimumOneBitOperations(int n) {
            // Base case: no operations needed when n is zero
            if (n == 0) {
                  return 0;
            }

            // Find the position of highest set bit (0-based)
            int k = 31 - Integer.numberOfLeadingZeros(n);
            // Compute the geometric sum: all ones up to k bits
            int allOnes = (1 << (k + 1)) - 1;
            // Recursive call on n with the highest bit flipped off using XOR
            return allOnes - minimumOneBitOperations((1 << k) ^ n);
      }
}
