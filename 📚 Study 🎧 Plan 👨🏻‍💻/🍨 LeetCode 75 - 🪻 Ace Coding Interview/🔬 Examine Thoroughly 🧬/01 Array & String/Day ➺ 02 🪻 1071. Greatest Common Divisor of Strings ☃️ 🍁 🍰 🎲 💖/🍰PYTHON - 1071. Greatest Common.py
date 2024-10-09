#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1071

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = min(len(str1), len(str2))

#? 🧺 Space complexity ➺ O(1)

import math

class Solution:
      def gcdOfStrings(self, str1: str, str2: str) -> str:
            # Check if concatenated strings are equal or not, if not return ""
            # else then return the substring from 0 to gcd of len(str1), len(str2)
            return "" if str1 + str2 != str2 + str1 else str1[: math.gcd(len(str1), len(str2))]
