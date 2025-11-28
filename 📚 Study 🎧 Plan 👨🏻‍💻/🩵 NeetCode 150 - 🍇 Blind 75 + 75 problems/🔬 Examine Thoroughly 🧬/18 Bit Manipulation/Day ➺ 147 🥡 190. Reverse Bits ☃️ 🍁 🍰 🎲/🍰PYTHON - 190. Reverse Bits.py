#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 190

#? ⌚ Time complexity ➺ O(1) 

#? 🧺 Space complexity ➺ O(1) 

class Solution:
      def reverseBits(self, n: int) -> int:
            # Initialize result to store reversed 32-bit pattern
            res = 0

            # Process all 32 bits from LSB to MSB
            for i in range(32):
                  # Extract i-th bit from input using right shift and mask
                  # n >> i moves bit to LSB position, & 1 extracts it (0 or 1)
                  bit = (n >> i) & 1
                  
                  # Place extracted bit at mirrored position (31-i) in result
                  # bit << (31-i) shifts it to correct position from MSB
                  # | operation sets this bit without affecting others
                  res = res | (bit << (31 - i))

            # Return the fully reversed 32-bit integer
            return res
