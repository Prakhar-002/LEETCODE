#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2787

#? ⌚ Time complexity ➺ O(n * n ^ (1 / x)) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def numberOfWays(self, n: int, x: int) -> int:
            MOD = 10**9 + 7  # Large prime modulus for final answer

            # dp[s] will store the number of ways to make sum 's'
            # using powers of numbers considered so far
            dp = [0] * (n + 1)
            dp[0] = 1  # Base case: there's 1 way to make sum 0 (pick nothing)

            # Loop through possible base values to raise to power x
            for i in range(1, n + 1):
                  val = i ** x  # Current number raised to power x

                  # If power exceeds n, no need to proceed further
                  if val > n:
                        break

                  # Traverse backwards so each power is used at most once
                  for j in range(n, val - 1, -1):
                        dp[j] = (dp[j] + dp[j - val]) % MOD

            # The result: number of ways to sum to n with unique powers
            return dp[n]
