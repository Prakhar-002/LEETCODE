#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1872

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

from functools import cache

class Solution:
      def stoneGameVIII(self, stones: list[int]) -> int:
            n = len(stones)

            # Compute prefix sums in-place: stones[i] becomes the sum of stones from 0 to i
            for i in range(1, n):
                  stones[i] += stones[i - 1]

            @cache
            def solve(i: int) -> int:
                  # Base case: only the final prefix sum choice remains
                  if i == n - 1:
                        return stones[i]

                  # Option 1: Take the prefix ending at index i
                  take = stones[i] - solve(i + 1)

                  # Option 2: Skip this prefix and move to the next valid option
                  skip = solve(i + 1)

                  return max(take, skip)

            # The game requires taking at least two stones in the first move, so start at index 1
            return solve(1)