//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 120

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
      int minimumTotal(vector<vector<int>>& triangle) {
            int n = triangle.size();
            // Create DP array of size n+1 (bottom-up)
            vector<int> dp(n + 1, 0); 

            // Process from last row up to first row
            for (int row = n - 1; row >= 0; --row) {
                  for (int i = 0; i < triangle[row].size(); ++i) {
                        // Update dp[i] as current element plus min of paths below
                        dp[i] = triangle[row][i] + min(dp[i], dp[i + 1]);
                  }
            }

            // The minimum path sum from top to bottom
            return dp[0];
      }
};
