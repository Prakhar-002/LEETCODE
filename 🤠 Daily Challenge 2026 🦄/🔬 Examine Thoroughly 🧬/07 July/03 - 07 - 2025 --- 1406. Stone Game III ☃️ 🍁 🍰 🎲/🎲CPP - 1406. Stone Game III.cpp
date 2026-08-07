//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1406

//? ⌚ Time complexity ➺ O(n ^ 3) 👉🏻  n = len(stoneValue)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
      vector<int> stoneValue;
      int         n;
      vector<int> dp;

      int solve(int i) {
            // No stones left — no score difference
            if (i >= n)
                  return 0;

            // Return cached result if already computed
            if (dp[i] != -1)
                  return dp[i];

            // Take 1 stone — opponent plays optimally from i+1
            int res = stoneValue[i] - solve(i + 1);

            // Take 2 stones — opponent plays optimally from i+2
            if (i + 1 < n)
                  res = max(res, stoneValue[i] + stoneValue[i + 1] - solve(i + 2));

            // Take 3 stones — opponent plays optimally from i+3
            if (i + 2 < n)
                  res = max(res, stoneValue[i] + stoneValue[i + 1] + stoneValue[i + 2] - solve(i + 3));

            return dp[i] = res;
      }

      string stoneGameIII(vector<int>& stoneValue) {
            this->stoneValue = stoneValue;
            this->n          = stoneValue.size();

            // Initialize dp with -1 (unvisited sentinel)
            dp = vector<int>(n + 1, -1);

            int diff = solve(0);

            // diff > 0 means Alice gains more than Bob overall
            if (diff < 0) return "Bob";
            if (diff > 0) return "Alice";
            return "Tie";
      }
};