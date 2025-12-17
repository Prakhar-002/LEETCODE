#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3562

#? ⌚ Time complexity ➺ O(n * budget ^ 2) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n * budget)

class Solution:
      def maxProfit(
            self,
            n: int,
            present: List[int],
            future: List[int],
            hierarchy: List[List[int]],
            budget: int,
      ) -> int:
            """
            Maximum profit from stock purchases with boss discount policy.
            Tree DP + Knapsack: each node has 2 states (parent buys/not).
            """
            # Build tree (0-based indexing, root=0)
            g = [[] for _ in range(n)]
            for e in hierarchy:
                  g[e[0] - 1].append(e[1] - 1)  # boss → employee

            def dfs(u: int) -> tuple:
                  """
                  Tree DP for subtree rooted at u.
                  Returns: (dp0, dp1, subtree_size)
                  dp0[b]: max profit if PARENT does NOT buy u (u pays full)
                  dp1[b]: max profit if PARENT DOES buy u (u pays half)
                  """
                  cost = present[u]     # Full price
                  dCost = present[u] // 2  # Discounted price

                  # dp0/1: max profit for budget b with parent buy/no-buy
                  dp0 = [0] * (budget + 1)
                  dp1 = [0] * (budget + 1)

                  # subProfit0/1: combine children profits
                  # 0: no discount for children, 1: discount available
                  subProfit0 = [0] * (budget + 1)
                  subProfit1 = [0] * (budget + 1)
                  uSize = cost  # Total cost capacity needed

                  # Process all children (bottom-up)
                  for v in g[u]:
                        child_dp0, child_dp1, vSize = dfs(v)  # Recurse
                        uSize += vSize  # Accumulate subtree size
                        
                        # Knapsack merge children into subProfit
                        for i in range(budget, -1, -1):
                              for sub in range(min(vSize, i) + 1):
                                    if i - sub >= 0:
                                          # No discount for child
                                          subProfit0[i] = max(
                                                subProfit0[i],
                                                subProfit0[i - sub] + child_dp0[sub],
                                          )
                                          # Discount available for child
                                          subProfit1[i] = max(
                                                subProfit1[i],
                                                subProfit1[i - sub] + child_dp1[sub],
                                          )

                  # Now consider buying u's stock or not
                  for i in range(budget + 1):
                        # Case 1: Parent does NOT buy u → u pays full price
                        dp0[i] = subProfit0[i]  # Children no discount
                        if i >= cost:
                              # u buys at full price + profit
                              dp0[i] = max(
                                    dp0[i],
                                    subProfit1[i - cost] + future[u] - cost
                              )
                        
                        # Case 2: Parent DOES buy u → u pays half price
                        dp1[i] = subProfit0[i]  # Children no discount
                        if i >= dCost:
                              # u buys at discount + profit
                              dp1[i] = max(
                                    dp1[i],
                                    subProfit1[i - dCost] + future[u] - dCost
                              )

                  return dp0, dp1, uSize

            # Answer: root's dp0[budget] (CEO has no parent)
            return dfs(0)[0][budget]
