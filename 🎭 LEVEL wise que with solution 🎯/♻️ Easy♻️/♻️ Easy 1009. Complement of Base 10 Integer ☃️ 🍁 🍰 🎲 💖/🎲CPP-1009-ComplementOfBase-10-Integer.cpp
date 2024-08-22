//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1009

//? ⌚ Time complexity ➺ O(log n)

//? 🧺 Space complexity ➺ O(1)

#include <cstdint>

class Solution {
public:
      int bitwiseComplement(int n) {
            // This mask will be used to create a bit pattern 
            // that has the same number of bits as `n` but with all bits set to 1
            uint32_t mask = 1;

            // Runs as long as the current mask is less than `n`
            while (mask < static_cast<uint32_t>(n)) {
                  // Grow the mask until it has the same number of bits as `n`
                  // `1` (binary `001`) initially
                  //             -> left shift + addition becomes 
                  // `3` (binary `011`)
                  //             -> next iteration, it will become
                  // `7` (binary `111`)
                  mask = (mask << 1) + 1;
            }

            // `N = 5` -> `101` ; mask = `7` -> `111`
            // `mask ^ N`: `111` XOR `101` → `010` (binary), which is `2` in decimal
            return static_cast<int>(mask ^ n);
      }
};