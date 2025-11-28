//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 338

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <vector>
using namespace std;

class Solution {
public:
      vector<int> countBits(int n) {
            vector<int> dp(n + 1, 0); // dp[i] stores bit count for i

            int offset = 1; // Highest power of 2 we've seen

            for (int i = 1; i <= n; ++i) {
                  // Reset offset at powers of 2 (1,2,4,8,...)
                  if (offset * 2 == i) {
                        offset = i;
                  }

                  // Core DP relation: bits(i) = bits(i-offset) + 1
                  dp[i] = 1 + dp[i - offset];
            }

            return dp;
      }
};
