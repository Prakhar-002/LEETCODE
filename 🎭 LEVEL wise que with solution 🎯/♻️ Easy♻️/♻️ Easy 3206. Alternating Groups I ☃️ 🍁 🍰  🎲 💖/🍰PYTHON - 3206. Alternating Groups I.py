#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3206

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

# https://github.com/Prakhar-002/LEETCODE

# ⌚ Time complexity -> O(n) ->  n = len(nums)

#  Space complexity -> O(1)

class Solution:
      def numberOfAlternatingGroups(self, colors: List[int]) -> int:
            N = len(colors)
            l = 0
            curDiff = 0
            altGrp = 0

            