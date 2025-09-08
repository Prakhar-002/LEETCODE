#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1304

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

# https://github.com/Prakhar-002/LEETCODE

# ⌚ Time complexity -> O(n) ->  n = len(nums)

#  Space complexity -> O(1)

class Solution:
      def sumZero(self, n: int) -> List[int]:
            arr = []

            for val in range(1, (n // 2) + 1):
                  arr.append(-val)
                  arr.append(val)

            if n % 2 == 1:
                  arr.append(0)

            return arr