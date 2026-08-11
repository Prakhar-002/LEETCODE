#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1140

#? ⌚ Time complexity ➺ O(n ^ 3) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n ^ 2)

from functools import cache 

class Solution:
      def stoneGameII(self, piles: list[int]) -> int:
            n = len(piles)

            # Convert piles into suffix sums: piles[i] stores total stones from index i to the end
            for i in range(n - 2, -1, -1):
                  piles[i] += piles[i + 1]

            @cache
            def dfs(i: int, M: int) -> int:
                  # If current player can take all remaining piles in one turn
                  if i + M * 2 >= n:
                        return piles[i]

                  # Maximum stones = total remaining stones - opponent's optimal choice
                  return piles[i] - min(
                        dfs(i + j, max(M, j))
                        for j in range(1, M * 2 + 1)
                  )

            # Start game from index 0 with M = 1
            return dfs(0, 1)