//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2144

//? ⌚ Time complexity ➺ O(nlogn) 👉🏻  n = len(cost)

//? 🧺 Space complexity ➺ O(1)

import java.util.Arrays;

class Solution {
      public int minimumCost(int[] cost) {
            // Sort descending so most expensive items come first
            Arrays.sort(cost);
            int n   = cost.length;
            int ans = 0;

            for (int i = 0; i < n; i++) {
                  // Every 3rd item (0-indexed from the end) is free — skip it
                  if ((n - 1 - i) % 3 != 2)
                        ans += cost[i];
            }

            return ans;
      }
}