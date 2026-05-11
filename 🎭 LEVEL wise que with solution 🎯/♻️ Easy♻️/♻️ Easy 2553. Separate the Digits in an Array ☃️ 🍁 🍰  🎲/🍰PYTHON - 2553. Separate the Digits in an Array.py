#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2553

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n) 

from typing import List 

class Solution:
      def separateDigits(self, nums: List[int]) -> List[int]:
            res = []

            for num in nums:
                  # str(num) gives digit characters, map(int, ...) converts each back to int
                  # extend flattens them directly into res instead of appending a list
                  res.extend(map(int, str(num)))

            return res