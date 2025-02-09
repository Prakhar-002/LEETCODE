#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2364

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

from collections import defaultdict
from typing import List

class Solution:
      def countBadPairs(self, nums: List[int]) -> int:
            # Initialize variables for total pairs and good pairs
            goodPair = 0
            totalPair = 0

            # Dictionary to keep track of occurrences of (nums[i] - i)
            pair_count = defaultdict(int)

            # Iterate through the array
            for i in range(len(nums)):
                  # Add index to total pairs count
                  totalPair += i 

                  # Count valid pairs using the dictionary
                  goodPair += pair_count[nums[i] - i]

                  # Update the dictionary with current (nums[i] - i) value
                  pair_count[nums[i] - i] += 1

            # Return the result
            return totalPair - goodPair
