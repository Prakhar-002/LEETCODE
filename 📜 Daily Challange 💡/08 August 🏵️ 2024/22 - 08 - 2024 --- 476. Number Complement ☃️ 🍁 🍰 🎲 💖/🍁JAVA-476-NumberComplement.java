//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 476

//? ⌚ Time complexity ➺ O(log n)

//? 🧺 Space complexity ➺ O(1)

import java.lang.Math;

class Solution {
      public int findComplement(int n) {
            // Calculate the number of bits in n, `adding one reason`
            // `n = 5` (binary `101`), `Math.log(n) / Math.log(2)` is approximately 2.32,
            // which rounds down to 2; adding 1 gives a total of 3 bits
            int numBits = (int) (Math.log(n) / Math.log(2)) + 1;

            // Create a mask with all 1's of the same length as n
            // `(1 << numBits)` shifts the number `1` to the left by `numBits` positions
            // Subtracting 1 from this value flips all those zeros to `1`s
            int mask = (1 << numBits) - 1;

            // XOR n with the mask to flip all bits
            return n ^ mask;
      }
}