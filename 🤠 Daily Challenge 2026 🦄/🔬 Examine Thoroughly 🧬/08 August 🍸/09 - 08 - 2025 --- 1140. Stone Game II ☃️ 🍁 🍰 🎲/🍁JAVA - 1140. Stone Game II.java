// ! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1140

// ? ⌚ Time complexity ➺ O(n ^ 3) 👉🏻 n = len(nums)

// ? 🧺 Space complexity ➺ O(n ^ 2)

import java.util.Arrays;

class Solution {
      private int[][] memo;
      private int[] suffixSum;

      public int stoneGameII(int[] piles) {
            int n = piles.length;

            // Build suffix sum array: suffixSum[i] = total stones from index i to end
            suffixSum = new int[n];
            suffixSum[n - 1] = piles[n - 1];
            for (int i = n - 2; i >= 0; i--) {
                  suffixSum[i] = piles[i] + suffixSum[i + 1];
            }

            // Memoization table initialized with -1 (unvisited states)
            memo = new int[n][n + 1];
            for (int[] row : memo) {
                  Arrays.fill(row, -1);
            }

            return dfs(0, 1, n);
      }

      private int dfs(int i, int M, int n) {
            // Base case: if remaining piles can all be taken in one move
            if (i + 2 * M >= n) {
                  return suffixSum[i];
            }

            // Return memoized result if calculated
            if (memo[i][M] != -1) {
                  return memo[i][M];
            }

            int minOpponent = Integer.MAX_VALUE;

            // Try taking X piles where 1 <= X <= 2 * M
            for (int X = 1; X <= 2 * M; X++) {
                  minOpponent = Math.min(minOpponent, dfs(i + X, Math.max(M, X), n));
            }

            // Current player's score = total remaining stones - opponent's best outcome
            memo[i][M] = suffixSum[i] - minOpponent;
            return memo[i][M];
      }
}