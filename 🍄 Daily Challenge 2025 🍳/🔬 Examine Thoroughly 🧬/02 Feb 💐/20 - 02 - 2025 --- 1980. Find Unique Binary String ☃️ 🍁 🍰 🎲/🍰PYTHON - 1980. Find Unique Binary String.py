#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1980

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

from typing import List

class Solution:
      def findDifferentBinaryString(self, nums: List[str]) -> str:
            # Initialize an empty list to store the binary string
            binaryStr = []

            # Iterate through each string in the input list
            for i in range(len(nums)):
                  # Get the i-th character from the i-th string (diagonal element)
                  cur = nums[i][i]

                  # Flip the bit: '0' becomes '1', and '1' becomes '0'
                  binaryStr.append("1" if cur == "0" else "0")

            # Convert list to string and return the result
            return "".join(binaryStr)
