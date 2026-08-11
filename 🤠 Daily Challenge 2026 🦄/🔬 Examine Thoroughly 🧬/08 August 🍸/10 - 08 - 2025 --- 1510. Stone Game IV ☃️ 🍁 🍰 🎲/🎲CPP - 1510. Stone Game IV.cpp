//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1510

//? ⌚ Time complexity ➺ O(n sqrt(n)) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <vector>

class Solution {
private:
      // -1 = unvisited, 0 = false (loss), 1 = true (win)
      vector<int> dp;

      bool solve(int rem) {
            // Base case: 0 stones left means current player loses
            if (rem == 0) {
                  return false;
            }

            // Return memoized result if already calculated
            if (dp[rem] != -1) {
                  return dp[rem];
            }

            // Try all valid square moves
            for (int k = 1; k * k <= rem; ++k) {
                  // If opponent loses in the sub-game, current player wins
                  if (!solve(rem - k * k)) {
                        dp[rem] = 1;
                        return true;
                  }
            }

            // No valid move guarantees a victory
            dp[rem] = 0;
            return false;
      }

public:
      bool winnerSquareGame(int n) {
            // Initialize memoization vector with -1
            dp.assign(n + 1, -1);
            return solve(n);
      }
};