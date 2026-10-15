#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2713

#? ⌚ Time complexity ➺ O(n^2) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def sumCounts(self, nums: list[int]) -> int:
            n = len(nums)
            res = 0

            # Iterate through all possible starting indices i
            for i in range(n):
                  seen = set()
                  # Expand subarray from i to j
                  for j in range(i, n):
                        # Add current element to the set of distinct elements
                        seen.add(nums[j])
                        # Add the square of distinct elements count to the result
                        res += len(seen) ** 2

            return res