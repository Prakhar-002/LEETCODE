
//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest Maths L6 Q1

//? ⌚ Time complexity ➺ O(k) 👉🏻  k = 32

//? 🧺 Space complexity ➺ O(1)

class Solution {
public:
      int hammingWeight(uint32_t n) {
            // Counter for the number of 1 bits
            int oneBit = 0;

            // Loop until all bits are processed
            while (n > 0) {
                  // Check if the least significant bit is 1
                  if (n & 1) {
                        oneBit++; // Increment count if bit is 1 
                  }

                  // Right shift n by 1 to check the next bit
                  n >>= 1;
            }

            // Return the total count of 1 bits
            return oneBit;
      }
};
