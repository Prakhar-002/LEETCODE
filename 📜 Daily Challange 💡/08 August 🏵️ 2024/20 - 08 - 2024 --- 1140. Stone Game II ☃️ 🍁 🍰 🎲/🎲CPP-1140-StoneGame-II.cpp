//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1640

//? ⌚ Time complexity ➺ O(n ^ 3) 👉🏻  n = len(piles)

//? 🧺 Space complexity ➺ O(n ^ n)

#include <vector>
#include <unordered_map>
#include <string>
#include <algorithm>
#include <climits>
using namespace std;

class Solution {
private:
      unordered_map<string, int> dp;

public:
      int stoneGameII(vector<int>& piles) {
            dp.clear();
            return getStone(true, 0, 1, piles);
      }

private:
      int getStone(bool alice, int idx, int M, const vector<int>& piles) {
            // Base case: if we've reached the end of the piles, no more stones can be taken
            if (idx == piles.size()) {
                  return 0;
            }

            // Check if the result for this state is already computed
            string key = to_string(alice) + "," + to_string(idx) + "," + to_string(M);
            if (dp.find(key) != dp.end()) {
                  return dp[key];
            }

            // Initialize the result based on who's turn it is
            int aliceStone = alice ? 0 : INT_MAX;

            int totalStone = 0; // Total number of stones taken in this turn

            // Consider taking x piles where x ranges from 1 to 2 * M
            for (int x = 1; x <= 2 * M && idx + x <= piles.size(); x++) {
                  // Add stones from the current pile to totalStone
                  totalStone += piles[idx + x - 1];

                  // Recursively calculate the score for the next state
                  if (alice) {
                        aliceStone = max(aliceStone, totalStone + getStone(!alice, idx + x, max(M, x), piles));
                  } else {
                        aliceStone = min(aliceStone, getStone(!alice, idx + x, max(M, x), piles));
                  }
            }

            // Store the result in the memoization map
            dp[key] = aliceStone;

            return aliceStone;
      }
};

//*------------------------------------------------------------

class Solution {
public:
      // dp is a 3D array used for memoization to store results of subproblems
      vector<vector<vector<int>>> dp;

      // Helper function to calculate the maximum score Alice can achieve
      int score(bool alice, int idx, int M, vector<int>& piles) {
            // Base case: if we've reached the end of the piles, no more stones can be taken
            if (idx >= piles.size()) {
                  return 0;
            }

            // Check if the result for this state is already computed
            if (dp[alice][idx][M] != -1) {
                  return dp[alice][idx][M];
            }

            // Initialize the result based on whose turn it is
            int res = alice ? 0 : INT_MAX;
            int total = 0; // Total number of stones taken in this turn

            // Consider taking x piles where x ranges from 1 to 2 * M
            for (int x = 1; x <= 2 * M; ++x) {
                  if (idx + x > piles.size()) { // If taking x piles exceeds available piles, stop
                        break;
                  }

                  total += piles[idx + x - 1]; // Add stones from the current pile to total

                  // Recursively calculate the score for the next state
                  if (alice) {
                        res = max(res, total + score(!alice, idx + x, max(M, x), piles));
                  } else {
                        res = min(res, score(!alice, idx + x, max(M, x), piles));
                  }
            }

            // Store the result in the memoization array
            dp[alice][idx][M] = res;
            return res;
      }

      int stoneGameII(vector<int>& piles) {
            int n = piles.size();
            // Initialize the memoization array with -1
            dp = vector<vector<vector<int>>>(2, vector<vector<int>>(n, vector<int>(n + 1, -1)));

            // Start the game with Alice's turn, starting at index 0, with M initially set to 1
            return score(true, 0, 1, piles);
      }
};