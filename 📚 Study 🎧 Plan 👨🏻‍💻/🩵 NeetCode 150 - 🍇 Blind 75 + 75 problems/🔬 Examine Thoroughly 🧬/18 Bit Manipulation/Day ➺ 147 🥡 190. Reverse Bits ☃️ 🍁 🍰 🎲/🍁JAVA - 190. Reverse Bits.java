//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 190

//? ⌚ Time complexity ➺ O(1) 

//? 🧺 Space complexity ➺ O(1)

public class Solution {
      // Reverse bits of 32-bit integer n
      public int reverseBits(int n) {
            int res = 0; // Result accumulator

            // Process 32 bits from right to left
            for (int i = 0; i < 32; i++) {
                  // Extract i-th bit: right shift then mask with 1
                  int bit = (n >> i) & 1;

                  // Place bit at position (31-i) from left using left shift
                  res |= (bit << (31 - i));
            }
            return res;
      }
}
