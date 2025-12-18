#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3652

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n) 

class Solution:
      def maxProfit(self, prices: List[int], strategy: List[int], k: int) -> int:
            """
            Maximize profit by changing strategy on exactly k positions.
            strategy[i]=1: buy at prices[i], strategy[i]=0: sell at prices[i].
            Change k positions to flip buy/sell decision.
            """
            n = len(prices)

            # Prefix sums for efficient range calculations
            profitSum = [0] * (n + 1)    # Cumulative profit with current strategy
            priceSum = [0] * (n + 1)     # Cumulative prices

            # Compute prefix sums
            for i in range(n):
                  profitSum[i + 1] = profitSum[i] + prices[i] * strategy[i]
                  priceSum[i + 1] = priceSum[i] + prices[i]

            # Original total profit (no changes)
            res = profitSum[n]

            # Try changing strategy on window of size k
            for i in range(k - 1, n):
                  # leftProfit: profit from 0 to i-k+1 (unchanged)
                  leftProfit = profitSum[i - k + 1]

                  # rightProfit: profit from i+1 to n-1 (unchanged)
                  rightProfit = profitSum[n] - profitSum[i + 1]

                  # changeProfit: profit gain from flipping k positions [i-k+1, i]
                  # Flip strategy: buy→sell (0→1), sell→buy (1→0)
                  # Net effect: +2*price for each flip
                  changeProfit = priceSum[i + 1] - priceSum[i - k // 2 + 1]

                  # Total profit with this change window
                  res = max(res, leftProfit + changeProfit + rightProfit)

            return res
