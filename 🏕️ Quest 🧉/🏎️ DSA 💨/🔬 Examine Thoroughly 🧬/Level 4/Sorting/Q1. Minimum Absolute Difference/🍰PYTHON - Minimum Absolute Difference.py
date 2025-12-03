#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest DSA L4.1 Q1

#? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

# https://github.com/Prakhar-002/LEETCODE

# ⌚ Time complexity -> O(n log n) ->  n = len(nums)

#  Space complexity -> O(1)

class Solution:
      def minimumAbsDifference(self, arr: List[int]) -> List[List[int]]:
            minDif = float("inf")
            arr.sort()

            for i in range(1, len(arr)):
                  minDif = min(minDif, arr[i] - arr[i - 1])

            res = []

            for i in range(1, len(arr)):
                  if arr[i] - arr[i - 1] == minDif:
                        res.append([arr[i - 1], arr[i]])

            return res