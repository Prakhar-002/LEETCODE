//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3562

//? ⌚ Time complexity ➺ O(n * budget ^ 2) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n * budget)

var maxProfit = function (n, present, future, hierarchy, budget) {
      /**
       * Maximum stock profit with boss→employee discount policy.
       * Tree DP + Knapsack: O(n·budget²) solution for n,budget≤160.
       */
      const g = Array.from({ length: n }, () => []);

      // Build tree: boss → employees (0-based indexing)
      for (const e of hierarchy) {
            g[e[0] - 1].push(e[1] - 1);  // Directed: boss → employee
      }

      const dfs = (u) => {
            /**
             * Tree DP for subtree rooted at employee u.
             * Returns: [dp0, dp1, subtree_cost_capacity]
             * dp0[b]: max profit if PARENT does NOT buy u (full price)
             * dp1[b]: max profit if PARENT DOES buy u (half price)
             */
            const cost = present[u];     // Full purchase cost
            const dCost = Math.floor(present[u] / 2);  // Discounted cost

            // dp0: parent does NOT buy u → u pays full price
            const dp0 = new Array(budget + 1).fill(0);
            // dp1: parent DOES buy u → u pays half price
            const dp1 = new Array(budget + 1).fill(0);

            // subProfit0: children get NO discount from u buying
            const subProfit0 = new Array(budget + 1).fill(0);
            // subProfit1: children get DISCOUNT from u buying
            const subProfit1 = new Array(budget + 1).fill(0);

            let uSize = cost;  // Total cost capacity needed

            // Process children bottom-up (post-order DFS)
            for (const v of g[u]) {
                  const [child_dp0, child_dp1, vSize] = dfs(v);
                  uSize += vSize;  // Accumulate subtree cost capacity

                  // Knapsack merge: combine child profits
                  for (let i = budget; i >= 0; i--) {
                        for (let sub = 0; sub <= Math.min(vSize, i); sub++) {
                              // Child gets no discount from u
                              subProfit0[i] = Math.max(
                                    subProfit0[i],
                                    subProfit0[i - sub] + child_dp0[sub]
                              );
                              // Child gets discount from u
                              subProfit1[i] = Math.max(
                                    subProfit1[i],
                                    subProfit1[i - sub] + child_dp1[sub]
                              );
                        }
                  }
            }

            // Consider whether u buys stock (2 parent scenarios)
            for (let i = 0; i <= budget; i++) {
                  // Case 1: Parent does NOT buy → u pays FULL price
                  dp0[i] = subProfit0[i];  // Base: children no discount
                  if (i >= cost) {
                        // u buys full price + profit, children get discount
                        dp0[i] = Math.max(
                              dp0[i],
                              subProfit1[i - cost] + future[u] - cost
                        );
                  }

                  // Case 2: Parent DOES buy → u pays HALF price
                  dp1[i] = subProfit0[i];  // Base: children no discount
                  if (i >= dCost) {
                        // u buys discount price + profit, children get discount
                        dp1[i] = Math.max(
                              dp1[i],
                              subProfit1[i - dCost] + future[u] - dCost
                        );
                  }
            }

            return [dp0, dp1, uSize];
      };

      // CEO (u=0) has no parent → use dp0[budget]
      return dfs(0)[0][budget];
};
