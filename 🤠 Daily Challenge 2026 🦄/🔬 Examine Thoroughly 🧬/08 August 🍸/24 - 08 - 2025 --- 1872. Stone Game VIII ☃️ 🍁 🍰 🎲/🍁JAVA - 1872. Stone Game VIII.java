// ! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1872

// ? ⌚ Time complexity ➺ O(n) 👉🏻 n = len(nums)

// ? 🧺 Space complexity ➺ O(n)

import java.util.Arrays;

class Solution {
      private int[] prefixSum;
      private Integer[] memo;

      public int stoneGameVIII(int[] stones) {
            int n = stones.length;

            // Compute prefix sums: prefixSum[i] = total stones from index 0 to i
            prefixSum = new int[n];
            prefixSum[0] = stones[0];
            for (int i = 1; i < n; i++) {
                  prefixSum[i] = prefixSum[i - 1] + stones[i];
            }

            // Memoization array initialized to null
            memo = new Integer[n];

            // Start search from index 1 (since first move must take at least 2 stones)
            return solve(1, n);
      }

      private int solve(int i, int n) {
            // Base case: only the last prefix sum remains
            if (i == n - 1) {
                  return prefixSum[i];
            }

            // Return cached result if already calculated
            if (memo[i] != null) {
                  return memo[i];
            }

            // Option 1: Take prefix at i
            int take = prefixSum[i] - solve(i + 1, n);

            // Option 2: Skip taking prefix at i
            int skip = solve(i + 1, n);

            // Store and return the optimal score difference
            memo[i] = Math.max(take, skip);
            return memo[i];
      }
}