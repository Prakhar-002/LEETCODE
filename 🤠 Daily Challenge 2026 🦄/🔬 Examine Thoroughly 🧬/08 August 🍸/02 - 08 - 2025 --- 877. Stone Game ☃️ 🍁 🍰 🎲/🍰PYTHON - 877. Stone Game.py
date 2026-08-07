#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 877

# ? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(nums)

# ? 🧺 Space complexity ➺ O(n ^ 2)

from typing import List 

class Solution:
      def stoneGame(self, piles: List[int]) -> bool:
            memo = {}

            def solve(i, j):
                  # No piles left — score nothing
                  if i > j:
                        return 0

                  # Return cached result if already computed
                  if (i, j) in memo:
                        return memo[(i, j)]

                  # Take from left — opponent then picks optimally from remaining
                  take_i = piles[i] + min(
                        solve(i + 2, j),
                        solve(i + 1, j - 1)
                  )

                  # Take from right — opponent then picks optimally from remaining
                  take_j = piles[j] + min(
                        solve(i, j - 2),
                        solve(i + 1, j - 1)
                  )

                  # Current player picks whichever gives the higher personal score
                  memo[(i, j)] = max(take_i, take_j)
                  return memo[(i, j)]

            alice = solve(0, len(piles) - 1)
            bob   = sum(piles) - alice

            # Alice wins if her score is at least equal to Bob's
            return alice >= bob

#!--------------------------------------------------------------------- 

class Solution:
      def stoneGame(self, piles):
            return True 
