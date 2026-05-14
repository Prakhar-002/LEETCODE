#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2784

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

from typing import List
from collections import Counter

class Solution:
      def isGood(self, nums: List[int]) -> bool:
            # Counter builds frequency map in one shot
            count_num = Counter(nums)

            max_num = max(nums)

            # Max value must appear exactly twice (as per problem definition)
            if count_num[max_num] != 2:
                  return False

            # Every value from 1 to max_num-1 must appear exactly once
            for i in range(max_num - 1, 0, -1):
                  if count_num[i] != 1:
                        return False

            return True