//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1140

//? ⌚ Time complexity ➺ O(n ^ 3) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n ^ 2)

#include <vector>
#include <algorithm>
#include <climits>

class Solution {
private:
      vector<vector<int>> memo;
      vector<int> suffixSum;

      int dfs(int i, int M, int n) {
            // Base case: can take all remaining piles in a single turn
            if (i + 2 * M >= n) {
                  return suffixSum[i];
            }

            // Return cached result if already evaluated
            if (memo[i][M] != -1) {
                  return memo[i][M];
            }

            int minOpponent = INT_MAX;

            // Try taking X piles where 1 <= X <= 2 * M
            for (int X = 1; X <= 2 * M; ++X) {
                  minOpponent = min(minOpponent, dfs(i + X, max(M, X), n));
            }

            // Maximize current player's score using Minimax DP formula
            return memo[i][M] = suffixSum[i] - minOpponent;
      }

public:
      int stoneGameII(vector<int>& piles) {
            int n = piles.size();
            suffixSum.resize(n);

            // Build suffix sum array: total stones remaining from index i
            suffixSum[n - 1] = piles[n - 1];
            for (int i = n - 2; i >= 0; --i) {
                  suffixSum[i] = piles[i] + suffixSum[i + 1];
            }

            // Initialize memoization table with -1
            memo.assign(n, vector<int>(n + 1, -1));

            return dfs(0, 1, n);
      }
};