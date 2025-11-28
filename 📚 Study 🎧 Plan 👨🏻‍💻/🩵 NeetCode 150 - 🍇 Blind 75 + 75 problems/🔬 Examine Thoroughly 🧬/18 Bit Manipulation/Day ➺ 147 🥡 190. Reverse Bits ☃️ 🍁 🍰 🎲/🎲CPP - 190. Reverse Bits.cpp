//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 190

//? ⌚ Time complexity ➺ O(1)

//? 🧺 Space complexity ➺ O(1)

class Solution {
public:
      int reverseBits(int n) {
            int res = 0; // Initialize reversed result

            // Iterate through all 32 bits
            for (int i = 0; i < 32; i++) {
                  // Get i-th bit from right: shift right, AND with 1
                  int bit = (n >> i) & 1;
                  
                  // Set bit at mirrored position (31-i) from left
                  res |= (bit << (31 - i));
            }

            return res;
      }
};
