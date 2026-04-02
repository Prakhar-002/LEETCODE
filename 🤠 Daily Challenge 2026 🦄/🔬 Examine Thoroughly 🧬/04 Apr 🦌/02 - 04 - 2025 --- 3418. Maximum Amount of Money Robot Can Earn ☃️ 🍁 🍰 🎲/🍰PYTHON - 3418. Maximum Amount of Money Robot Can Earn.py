#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3418

# ? ⌚ Time complexity ➺ O(n * m * 3)

# ? 🧺 Space complexity ➺ O(n * m * 3)

from typing import List

class Solution:
      def maximumAmount(self, coins: List[List[int]]) -> int:
            m   = len(coins)
            n   = len(coins[0])
            NEG = float('-inf')

            # dp[i][j][neu] = best coins collectible from (i,j) with neu neutralizes left
            dp = [[[NEG] * 3 for _ in range(n)] for _ in range(m)]

            def solve(i: int, j: int, neu: int) -> int:
                  # Out of bounds → invalid path
                  if i >= m or j >= n:
                        return NEG

                  # Base case: reached bottom-right cell
                  if i == m - 1 and j == n - 1:
                        # Use a neutralize to skip this negative cell if possible
                        if coins[i][j] < 0 and neu > 0:
                              return 0
                        return coins[i][j]

                  # Return cached result if already computed
                  if dp[i][j][neu] != NEG:
                        return dp[i][j][neu]

                  best = NEG

                  # ---------- Move DOWN ----------
                  down = solve(i + 1, j, neu)
                  if down != NEG:
                        best = max(best, coins[i][j] + down)

                  # ---------- Move RIGHT ----------
                  right = solve(i, j + 1, neu)
                  if right != NEG:
                        best = max(best, coins[i][j] + right)

                  # ---------- Neutralize: skip this negative cell ----------
                  # Only available when current cell is negative and neu > 0
                  if coins[i][j] < 0 and neu > 0:
                        down_skip  = solve(i + 1, j, neu - 1)
                        right_skip = solve(i, j + 1, neu - 1)

                        skip_best  = max(down_skip, right_skip)

                        if skip_best != NEG:
                              best = max(best, skip_best)

                  dp[i][j][neu] = best
                  return best

            return solve(0, 0, 2)