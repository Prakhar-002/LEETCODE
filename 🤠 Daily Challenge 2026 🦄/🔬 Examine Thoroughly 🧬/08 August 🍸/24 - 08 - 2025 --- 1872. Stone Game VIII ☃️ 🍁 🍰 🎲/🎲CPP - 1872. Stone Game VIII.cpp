//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1872

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <algorithm>

class Solution {
private:
      vector<int> prefixSum;
      vector<int> memo;
      vector<bool> visited;

      int solve(int i, int n) {
            // Base case: at the final prefix index
            if (i == n - 1) {
                  return prefixSum[i];
            }

            // Return memoized state if evaluated
            if (visited[i]) {
                  return memo[i];
            }

            // Option 1: Pick prefix ending at index i
            int take = prefixSum[i] - solve(i + 1, n);

            // Option 2: Skip picking prefix at index i
            int skip = solve(i + 1, n);

            visited[i] = true;
            return memo[i] = max(take, skip);
      }

public:
      int stoneGameVIII(vector<int>& stones) {
            int n = stones.size();
            prefixSum = stones;

            // Calculate running prefix sums
            for (int i = 1; i < n; ++i) {
                  prefixSum[i] += prefixSum[i - 1];
            }

            memo.assign(n, 0);
            visited.assign(n, false);

            // Start game from index 1
            return solve(1, n);
      }
};