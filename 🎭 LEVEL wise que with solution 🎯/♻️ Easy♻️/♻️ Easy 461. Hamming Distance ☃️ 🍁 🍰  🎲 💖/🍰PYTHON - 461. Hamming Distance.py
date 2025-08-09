#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 461

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = 32

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def hammingDistance(self, x: int, y: int) -> int:
            # XOR the two numbers to get bits that differ
            # In XOR, 1 means the bits are different, 0 means they are the same
            d = x ^ y

            # Counter to track the number of differing bits
            count = 0

            # Brian Kernighan's algorithm:
            # Repeatedly flip the least significant 1-bit to 0
            # and count how many times we do this until d becomes 0
            while d != 0:
                  # Remove the lowest set bit (1) from d
                  d &= d - 1

                  # Increment the count for each removed 1-bit
                  count += 1

            # Return the total number of differing bits
            return count
