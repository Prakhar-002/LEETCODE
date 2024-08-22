//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1009

//? ⌚ Time complexity ➺ O(log n)

//? 🧺 Space complexity ➺ O(1)

#include <stdio.h>

int bitwiseComplement(int num) {
      // This mask will be used to create a bit pattern 
      // that has the same number of bits as `num` but with all bits set to 1
      int mask = 1;

      // Runs as long as the current mask is less than `num`
      while (mask < num) {
            // Grow the mask until it has the same number of bits as `num`
            // `1` (binary `001`) initially
            //             -> left shift + addition becomes 
            // `3` (binary `011`)
            //             -> next iteration, it will become
            // `7` (binary `111`)
            mask = (mask << 1) + 1;
      }

      // `N = 5` -> `101` ; mask = `7` -> `111`
      // `mask ^ N`: `111` XOR `101` → `010` (binary), which is `2` in decimal
      return mask ^ num;
}