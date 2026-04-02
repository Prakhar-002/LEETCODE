//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3418

// ? ⌚ Time complexity ➺ O(n * m * 3)

// ? 🧺 Space complexity ➺ O(n * m * 3)

#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

class Solution {
public:
      int m, n;
      vector<vector<vector<int>>> dp;

      int solve(vector<vector<int>>& coins, int i, int j, int neu) {
            // Out of bounds → invalid path
            if (i >= m || j >= n)
                  return INT_MIN;

            // Base case: reached bottom-right cell
            if (i == m - 1 && j == n - 1) {
                  // Use a neutralize to skip this negative cell if possible
                  if (coins[i][j] < 0 && neu > 0)
                        return 0;
                  return coins[i][j];
            }

            // Return cached result if already computed
            if (dp[i][j][neu] != INT_MIN)
                  return dp[i][j][neu];

            int best = INT_MIN;

            // ---------- Move DOWN ----------
            int down = solve(coins, i + 1, j, neu);
            if (down != INT_MIN)
                  best = max(best, coins[i][j] + down);

            // ---------- Move RIGHT ----------
            int right = solve(coins, i, j + 1, neu);
            if (right != INT_MIN)
                  best = max(best, coins[i][j] + right);

            // ---------- Neutralize: skip this negative cell ----------
            // Only available when current cell is negative and neu > 0
            if (coins[i][j] < 0 && neu > 0) {
                  int downSkip  = solve(coins, i + 1, j, neu - 1);
                  int rightSkip = solve(coins, i, j + 1, neu - 1);
                  int skipBest  = max(downSkip, rightSkip);
                  if (skipBest != INT_MIN)
                        best = max(best, skipBest);
            }

            return dp[i][j][neu] = best;
      }

      int maximumAmount(vector<vector<int>>& coins) {
            m  = coins.size();
            n  = coins[0].size();
            dp = vector<vector<vector<int>>>(m,
                        vector<vector<int>>(n,
                              vector<int>(3, INT_MIN)));

            return solve(coins, 0, 0, 2);
      }
};