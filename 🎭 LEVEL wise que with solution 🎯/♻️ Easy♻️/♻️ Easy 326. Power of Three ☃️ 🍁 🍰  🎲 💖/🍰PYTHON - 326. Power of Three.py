#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 326

#? ⌚ Time complexity ➺ O(1)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def isPowerOfThree(self, n: int) -> bool:
            # maximum value of an integer that is a power of 3 
            # within the 32-bit integer range is 3^19 = 1162261467, 
            # any number n that divides 1162261467 evenly must be a power of 3.
            return n > 0 and 1162261467 % n == 0