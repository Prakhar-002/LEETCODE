//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 877

// ? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(nums)

// ? 🧺 Space complexity ➺ O(n ^ 2)

#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

class Solution {
public:
      vector<int> piles;
      int n;
      vector<vector<int>> dp;

      int solve(int i, int j) {
            // No piles left — score nothing
            if (i > j)
                  return 0;

            // Return cached result if already computed
            if (dp[i][j] != -1)
                  return dp[i][j];

            // Take from left — opponent then picks optimally from remaining
            int takeI = piles[i] + min(
                  solve(i + 2, j),
                  solve(i + 1, j - 1)
            );

            // Take from right — opponent then picks optimally from remaining
            int takeJ = piles[j] + min(
                  solve(i, j - 2),
                  solve(i + 1, j - 1)
            );

            // Current player picks whichever gives the higher personal score
            return dp[i][j] = max(takeI, takeJ);
      }

      bool stoneGame(vector<int>& piles) {
            this->piles = piles;
            this->n     = piles.size();

            // Initialize dp table with -1 (unvisited sentinel)
            dp = vector<vector<int>>(n, vector<int>(n, -1));

            int total = accumulate(piles.begin(), piles.end(), 0);

            int alice = solve(0, n - 1);
            int bob   = total - alice;

            // Alice wins if her score is at least equal to Bob's
            return alice >= bob;
      }
};


//!---------------------------------------------------------------------------

#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

class Solution {
public:
      bool stoneGame(vector<int>& piles) {
            return true;
      }
};