#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 486

#? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n ^ 2)

from typing import List 

class Solution:
      def predictTheWinner(self, nums: List[int]) -> bool:
            memo = {}

            def solve(i, j):
                  # No elements left — score nothing
                  if i > j:
                        return 0

                  # One element left — must take it
                  if i == j:
                        return nums[i]

                  # Return cached result if already computed
                  if (i, j) in memo:
                        return memo[(i, j)]

                  # Take from left — opponent then picks optimally from remaining
                  take_i = nums[i] + min(solve(i + 2, j),solve(i + 1, j - 1))

                  # Take from right — opponent then picks optimally from remaining
                  take_j = nums[j] + min(solve(i, j - 2),solve(i + 1, j - 1))

                  # Current player picks whichever gives the higher personal score
                  memo[(i, j)] = max(take_i, take_j)
                  return memo[(i, j)]

            p1_score = solve(0, len(nums) - 1)
            p2_score = sum(nums) - p1_score

            # Player 1 wins if their score is at least equal to player 2's
            return p1_score >= p2_score 