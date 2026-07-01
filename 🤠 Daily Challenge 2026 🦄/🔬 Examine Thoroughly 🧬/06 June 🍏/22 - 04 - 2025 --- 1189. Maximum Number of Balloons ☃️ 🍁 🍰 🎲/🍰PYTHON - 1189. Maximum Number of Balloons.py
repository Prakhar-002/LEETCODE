#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1189

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

# https://github.com/Prakhar-002/LEETCODE

# ⌚ Time complexity -> O(n) ->  n = len(nums)

#  Space complexity -> O(1)

from typing import Counter

class Solution:
      def maxNumberOfBalloons(self, text: str) -> int:
            textCount = Counter(text)

            res = 0

            ballon = {
                  'b' : 1,
                  'a' : 1,
                  'l' : 2,
                  'o' : 2,
                  'n' : 1
            }

            for ch in "balon":
                  res = min(res, textCount[ch] // ballon[ch])

            return 0

