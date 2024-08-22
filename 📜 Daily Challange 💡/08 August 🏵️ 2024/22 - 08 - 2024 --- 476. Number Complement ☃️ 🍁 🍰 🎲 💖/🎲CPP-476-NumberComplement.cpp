//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 476

//? ⌚ Time complexity ➺ O(log n)

//? 🧺 Space complexity ➺ O(1)

#include <cmath>
using namespace std;

class Solution {
public:
      int findComplement(int n) {
            // Calculate the number of bits in n, adding one
            // For example, if n = 5 (binary 101), log2(n) is approximately 2.32,
            // which rounds down to 2; adding 1 gives a total of 3 bits
            unsigned int numBits = 1 << (int)(log2(n));

            // Create a mask with all 1's of the same length as n
            // (1 << num_bits) shifts the number 1 to the left by num_bits positions
            // Subtracting 1 from this value flips all those zeros to 1s
            unsigned int mask = (numBits * 2) - 1;

            // XOR n with the mask to flip all bits
            return n ^ mask;
      }
};
