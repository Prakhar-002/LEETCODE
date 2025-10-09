#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3494

#? ⌚ Time complexity ➺ O(n * m) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

from typing import List

class Solution:
      def minTime(self, skill: List[int], mana: List[int]) -> int:
            n, m = len(skill), len(mana)

            # 'done' array of length n+1 to store intermediate maximum times,
            # done[i] represents the best result considering first i skills processed so far.
            done = [0] * (n + 1)

            # Iterate over each mana element (outer loop)
            for j in range(m):
                  # Forward pass: update done for skills from left to right
                  # For i-th skill, time is max time between not using i-th skill or previous,
                  # plus current skill's cost weighted by current mana[j].
                  for i in range(n):
                        done[i + 1] = max(done[i], done[i + 1]) + skill[i] * mana[j]

                  # Backward pass: update done from right to left to adjust results
                  # Subtract current skill's contribution to avoid over-counting in next iteration.
                  for i in range(n - 1, 0, -1):
                        done[i] = done[i + 1] - skill[i] * mana[j]

            # Return the result for all n skills processed
            return done[n]
