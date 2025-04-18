#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1313

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

from typing import List

class Solution:
      def decompressRLElist(self, nums: List[int]) -> List[int]:
            res = []  # Initialize an empty list to store the decompressed result

            # Iterate over the list in steps of 2 since each pair is [freq, val]
            for i in range(0, len(nums), 2):
                  freq = nums[i]        # Get the frequency (number of times to repeat)
                  val = nums[i + 1]     # Get the value to be repeated

                  # Extend the result list by repeating 'val' 'freq' times
                  res.extend([val] * freq)

            # Return the final decompressed list
            return res
