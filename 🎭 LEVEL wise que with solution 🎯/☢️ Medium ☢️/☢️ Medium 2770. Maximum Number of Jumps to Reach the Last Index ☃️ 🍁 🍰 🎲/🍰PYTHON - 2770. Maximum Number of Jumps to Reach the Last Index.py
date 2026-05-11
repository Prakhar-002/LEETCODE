#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2770

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

from typing import List
from functools import cache 
from math import inf

class Solution:
      def maximumJumps(self, nums: List[int], target: int) -> int:

            @cache
            def dfs(i: int) -> int:
                  # Reached the last index — no more jumps needed
                  if i == len(nums) - 1:
                        return 0

                  res = -inf

                  # Try every index ahead as a potential next jump
                  for j in range(i + 1, len(nums)):
                        # Only jump if difference is within target
                        if abs(nums[i] - nums[j]) <= target:
                              res = max(res, dfs(j) + 1)

                  return res

            ans = dfs(0)
            # Negative result means no valid path to last index
            return -1 if ans < 0 else ans