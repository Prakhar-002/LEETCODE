#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3573

#? ⌚ Time complexity ➺ O(nk) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(k)

class Solution:
      def maximumProfit(self, prices: List[int], k: int) -> int:
            """
            Maximum profit with at most k transactions.
            Classic stock trading DP: optimized space version.
            """
            n = len(prices)

            # dp[j][state]: max profit using first j transactions
            # state 0: no transaction open
            # state 1: holding stock (bought)
            # state 2: sold stock (profit taken)
            dp = [[0] * 3 for _ in range(k + 1)]

            # Initialize day 0: buy/sell first price
            for j in range(1, k + 1):
                  dp[j][1] = -prices[0]    # Buy first stock
                  dp[j][2] = prices[0]     # Sell immediately (profit 0 effectively)

            # Fill DP table: day by day
            for i in range(1, n):
                  for j in range(k, 0, -1):  # Reverse to avoid using same j
                        # State 0: no open transaction
                        # Can stay idle, or sell (1→0), or buy back (2→0)
                        dp[j][0] = max(
                              dp[j][0],                        # Stay idle
                              dp[j][1] + prices[i],            # Sell held stock
                              dp[j][2] - prices[i]             # Buy back after sell
                        )

                        # State 1: holding stock
                        # Stay holding, or start new transaction from idle
                        dp[j][1] = max(
                              dp[j][1],                        # Keep holding
                              dp[j - 1][0] - prices[i]         # Buy using prev profit
                        )

                        # State 2: just sold (profit taken)
                        # Stay sold, or buy again from prev idle
                        dp[j][2] = max(
                              dp[j][2],                        # Keep profit
                              dp[j - 1][0] + prices[i]         # Sell from prev idle
                        )

            # Answer: max profit with no open transaction
            return dp[k][0]
