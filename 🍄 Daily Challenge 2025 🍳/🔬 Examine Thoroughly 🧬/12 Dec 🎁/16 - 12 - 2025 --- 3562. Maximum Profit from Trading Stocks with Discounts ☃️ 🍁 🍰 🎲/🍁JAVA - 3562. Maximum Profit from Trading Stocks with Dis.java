//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3562

//? ⌚ Time complexity ➺ O(n * budget ^ 2) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n * budget)

class Result {
      int[] dp0; // Max profit if PARENT does NOT buy this node (full price)
      int[] dp1; // Max profit if PARENT DOES buy this node (half price)
      int size; // Total cost capacity needed for subtree

      Result(int[] dp0, int[] dp1, int size) {
            this.dp0 = dp0;
            this.dp1 = dp1;
            this.size = size;
      }
}

class Solution {
      public int maxProfit(
                  int n,
                  int[] present,
                  int[] future,
                  int[][] hierarchy,
                  int budget) {
            /**
             * Maximum stock profit with boss→employee discount policy.
             * Tree DP + Knapsack: O(n·budget²) time.
             */
            List<Integer>[] g = new ArrayList[n];
            for (int i = 0; i < n; i++) {
                  g[i] = new ArrayList<>(); // boss → employees adjacency list
            }

            // Build tree (0-based indexing, root=0)
            for (int[] e : hierarchy) {
                  g[e[0] - 1].add(e[1] - 1); // Directed: boss → employee
            }

            // CEO (root=0) has no parent → use dp0[budget]
            return dfs(0, present, future, g, budget).dp0[budget];
      }

      private Result dfs(
                  int u, // Current node
                  int[] present, // Buy prices
                  int[] future, // Sell prices
                  List<Integer>[] g, // Tree adjacency list
                  int budget // Available budget
      ) {
            /**
             * Tree DP: compute max profit for subtree u.
             * Returns Result(dp0, dp1, subtree_cost_size)
             */
            int cost = present[u]; // Full purchase cost
            int dCost = present[u] / 2; // Discounted cost (floor division)

            // dp0: max profit if PARENT does NOT buy u (u pays full)
            int[] dp0 = new int[budget + 1];
            // dp1: max profit if PARENT DOES buy u (u pays half)
            int[] dp1 = new int[budget + 1];

            // subProfit0: children get NO discount from u
            int[] subProfit0 = new int[budget + 1];
            // subProfit1: children get DISCOUNT from u
            int[] subProfit1 = new int[budget + 1];
            int uSize = cost; // Total cost capacity for subtree

            // Process children bottom-up (post-order)
            for (int v : g[u]) {
                  Result childResult = dfs(v, present, future, g, budget);
                  uSize += childResult.size; // Accumulate subtree size

                  // Knapsack merge: combine child with current subProfit
                  for (int i = budget; i >= 0; i--) {
                        for (int sub = 0; sub <= Math.min(childResult.size, i); sub++) {
                              if (i - sub >= 0) {
                                    // Child gets no discount from u
                                    subProfit0[i] = Math.max(
                                                subProfit0[i],
                                                subProfit0[i - sub] + childResult.dp0[sub]);
                                    // Child gets discount from u
                                    subProfit1[i] = Math.max(
                                                subProfit1[i],
                                                subProfit1[i - sub] + childResult.dp1[sub]);
                              }
                        }
                  }
            }

            // Consider buying u's stock (2 cases)
            for (int i = 0; i <= budget; i++) {
                  // Case 1: Parent does NOT buy → u pays FULL price
                  dp0[i] = subProfit0[i]; // Base: children no discount
                  if (i >= cost) {
                        // u buys full + profit, children get discount
                        dp0[i] = Math.max(
                                    dp0[i],
                                    subProfit1[i - cost] + future[u] - cost);
                  }

                  // Case 2: Parent DOES buy → u pays HALF price
                  dp1[i] = subProfit0[i]; // Base: children no discount
                  if (i >= dCost) {
                        // u buys discount + profit, children get discount
                        dp1[i] = Math.max(
                                    dp1[i],
                                    subProfit1[i - dCost] + future[u] - dCost);
                  }
            }

            return new Result(dp0, dp1, uSize);
      }
}
