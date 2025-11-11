//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 474

//? ⌚ Time complexity ➺ O(l * m * n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(l * m * n)

#include <vector>
#include <string>
using namespace std;

class Solution {
public:
      int findMaxForm(vector<string>& strs, int m, int n) {
            int len = strs.size();

            // dp[i][j] represents the maximum number of strings that can be formed
            // with at most i zeros and j ones
            vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

            for (const string& s : strs) {
                  int zeros = 0, ones = 0;
                  // Count the number of zeros and ones in the current string
                  for (char c : s) {
                        if (c == '0')
                              zeros++;
                        else
                              ones++;
                  }

                  // Traverse dp array backward to avoid using updated states in the same iteration
                  for (int i = m; i >= zeros; --i) {
                        for (int j = n; j >= ones; --j) {
                              // Either skip the current string or include it (if feasible),
                              // update dp with the maximum count
                              dp[i][j] = max(dp[i][j], 1 + dp[i - zeros][j - ones]);
                        }
                  }
            }

            // The dp[m][n] contains the maximum number of strings that can be formed
            return dp[m][n];
      }
};
