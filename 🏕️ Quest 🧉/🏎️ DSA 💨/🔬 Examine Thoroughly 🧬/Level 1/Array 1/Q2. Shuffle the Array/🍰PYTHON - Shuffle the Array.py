#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest DSA L1 Q2

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

from typing import List

class Solution:
      def shuffle(self, nums: List[int], n: int) -> List[int]:
            # Initialize pointers for left and right halves
            l, r = 0, len(nums) // 2

            # Result list to store shuffled elements
            res = []

            # Interleave elements from left and right halves
            while r < len(nums):
                  res.append(nums[l])
                  res.append(nums[r])
                  l += 1
                  r += 1

            return res
