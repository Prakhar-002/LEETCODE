#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2089

#? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def targetIndices(self, nums: list[int], target: int) -> list[int]:
            res = []

            # Sort the array in non-decreasing order and enumerate indices
            for i, n in enumerate(sorted(nums)):
                  # If the current element equals the target, record its index
                  if n == target:
                        res.append(i)

            return res