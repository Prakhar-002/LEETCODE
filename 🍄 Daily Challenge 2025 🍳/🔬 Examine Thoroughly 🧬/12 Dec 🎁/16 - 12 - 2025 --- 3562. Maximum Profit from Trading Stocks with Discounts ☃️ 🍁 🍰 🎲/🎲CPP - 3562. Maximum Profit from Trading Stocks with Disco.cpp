//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3562

//? ⌚ Time complexity ➺ O(n * budget ^ 2) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n * budget)

class Solution {
public:
      int maxProfit(int n, vector<int>& present, vector<int>& future,
                        vector<vector<int>>& hierarchy, int budget) {
            /**
             * Maximum stock profit with boss discount policy.
             * Tree DP + Knapsack: O(n·budget²) solution.
             */
            vector<vector<int>> g(n);  // Adjacency list: boss → employees

            // Build tree (0-based indexing, root=0)
            for (auto& e : hierarchy) {
                  g[e[0] - 1].push_back(e[1] - 1);  // Directed: boss → employee
            }

            auto dfs = [&](auto&& self, int u) -> tuple<vector<int>, vector<int>, int> {
                  /**
                   * Tree DP for subtree u.
                   * Returns: (dp0, dp1, subtree_cost_capacity)
                   * dp0[b]: max profit if PARENT does NOT buy u (full price)
                   * dp1[b]: max profit if PARENT DOES buy u (half price)
                   */
                  int cost = present[u];     // Full purchase cost
                  int dCost = present[u] / 2;  // Discounted cost (floor division)

                  // dp0/1: max profit for each budget with parent buy/no-buy
                  auto dp0 = vector<int>(budget + 1, 0);
                  auto dp1 = vector<int>(budget + 1, 0);

                  // subProfit0/1: combined children profits
                  // 0: children get no discount, 1: children get discount
                  auto subProfit0 = vector<int>(budget + 1, 0);
                  auto subProfit1 = vector<int>(budget + 1, 0);

                  int uSize = cost;  // Total cost capacity for subtree

                  // Process children bottom-up
                  for (auto v : g[u]) {
                        auto [child_dp0, child_dp1, vSize] = self(self, v);
                        uSize += vSize;  // Accumulate subtree size
                        
                        // Knapsack merge: combine child with current subProfit
                        for (int i = budget; i >= 0; i--) {
                              for (int sub = 0; sub <= min(vSize, i); sub++) {
                                    // No discount for child subtree
                                    subProfit0[i] = max(subProfit0[i],
                                                      subProfit0[i - sub] + child_dp0[sub]);
                                    // Discount available for child subtree
                                    subProfit1[i] = max(subProfit1[i],
                                                      subProfit1[i - sub] + child_dp1[sub]);
                              }
                        }
                  }

                  // Consider buying u's stock or not
                  for (int i = 0; i <= budget; i++) {
                        // Case 1: Parent does NOT buy → u pays FULL price
                        dp0[i] = subProfit0[i];  // Children get no discount
                        if (i >= cost) {
                              // u buys at full price + profit
                              dp0[i] = max(dp0[i],
                                          subProfit1[i - cost] + future[u] - cost);
                        }
                        
                        // Case 2: Parent DOES buy → u pays HALF price  
                        dp1[i] = subProfit0[i];  // Children get no discount (base)
                        if (i >= dCost) {
                              // u buys at discount + profit
                              dp1[i] = max(dp1[i],
                                          subProfit1[i - dCost] + future[u] - dCost);
                        }
                  }

                  return {dp0, dp1, uSize};
            };

            // CEO (root=0) has no parent → use dp0[budget]
            return get<0>(dfs(dfs, 0))[budget];
      }
};
