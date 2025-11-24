#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1018

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1) 

class Solution:
      def prefixesDivBy5(self, nums: List[int]) -> List[bool]:
            # Initialize result list to hold True/False for each prefix
            res = []
            # Initialize prefix sum as integer value
            prefix = 0

            # For each bit in the nums list
            for n in nums:
                  # Update prefix by shifting left (multiply by 2) and adding current bit
                  # Then take modulo 5 to keep the prefix within the range of 0-4 (since divisibility by 5 only depends on last digit)
                  prefix = ((prefix << 1) + n) % 5
                  # Append True if current prefix is divisible by 5, else False
                  res.append(prefix == 0)

            # Return the list of boolean results
            return res
