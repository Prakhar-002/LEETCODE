#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER ----

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

# https://github.com/Prakhar-002/LEETCODE

# ⌚ Time complexity -> O(n) ->  n = len(nums)

#  Space complexity -> O(1)

from collections import defaultdict
from typing import Counter


class Solution:
      def wordPattern(self, pattern: str, s: str) -> bool:
            words = s.split(' ')

            sMap = defaultdict(int)

            patMap = Counter(pattern)

            for word in words:
                  sMap[word] += 1

            return True if len(patMap.keys()) == len(sMap.keys()) and len(pattern) == len(words) else False