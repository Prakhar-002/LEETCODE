#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 136

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

from typing import List 

class Solution:
      def singleNumber(self, nums: List[int]) -> int:
            # Initialize XOR accumulator to 0 (neutral element for XOR)
            # XOR property: any number XOR itself = 0, 0 XOR number = number
            xorNum = 0

            # Iterate through all numbers in the array
            for n in nums:
                  # XOR current accumulator with each number
                  # Every duplicate number cancels out (a ^ a = 0)
                  # Single number remains (0 ^ single = single)
                  xorNum ^= n

            # Return the result - only the single non-duplicate number remains
            return xorNum
