//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1900

//? ⌚ Time complexity ➺ O(n ^ 4) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(log n)

class Solution {
public:
      pair<int, int> dfs(int left, int right, int total) {
            if (left == right) return {1, 1}; // same player, round 1
            if (left > right) return dfs(right, left, total); // symmetry

            int minRound = INT_MAX, maxRound = INT_MIN;

            // Try all positions where players can progress to next round
            for (int i = 1; i <= left; ++i) {
                  for (int j = left - i + 1; j <= right - i; ++j) {
                        int sum = i + j;
                        // Check if players meet in this round
                        if (left + right - total / 2 <= sum && sum <= (total + 1) / 2) {
                              auto [a, b] = dfs(i, j, (total + 1) / 2); // next round
                              minRound = min(minRound, a + 1); // accumulate round count
                              maxRound = max(maxRound, b + 1);
                        }
                  }
            }

            return {minRound, maxRound};
      }

      vector<int> earliestAndLatest(int n, int firstPlayer, int secondPlayer) {
            auto [minR, maxR] = dfs(firstPlayer, n - secondPlayer + 1, n);
            return {minR, maxR};
      }
};
