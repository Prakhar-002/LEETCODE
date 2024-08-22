#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 476

#? ⌚ Time complexity ➺ O(log n)

#? 🧺 Space complexity ➺ O(1)

import math

class Solution: 
      def findComplement(self, n: int) -> int:
            # Calculate the number of bits in n, `adding one reason` 
            # `n = 5` (binary `101`), `math.log2(n)` is approximately 2.32,
            # which rounds down to 2; adding 1 gives a total of 3 bits
            num_bits = int(math.log2(n)) + 1

            # Create a mask with all 1's of the same length as n
            # `(1 << num_bits)` shifts the number `1` to the left by `num_bits` positions
            # Subtracting 1 from this value flips all those zeros to `1`s
            mask = (1 << num_bits) - 1

            # XOR n with the mask to flip all bits
            return n ^ mask
