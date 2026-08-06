#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1406

#? ⌚ Time complexity ➺ O(n ^ 3) 👉🏻  n = len(stoneValue)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def stoneGameIII(self, stoneValue: List[int]) -> str:
            def solve(i):
                  if (i >= n): return 0

                  if (dp[i] != -1):
                        return dp[i]

                  res = stoneValue[i] - solve(i + 1)

                  if (i + 1 < n):
                        res = max(res, stoneValue[i] + stoneValue[i + 1] - solve(i + 2))

                  if (i + 2 < n):
                        res = max(res, stoneValue[i] + stoneValue[i + 1] + stoneValue[i + 2] - solve(i + 3))

                  dp[i] = res

                  return res

            n = len(stoneValue)
            dp = [-1] * (n + 1)

            diff = solve(0)

            if diff < 0:
                  return "Bob"
            elif diff > 0:
                  return "Alice"

            return "Tie"