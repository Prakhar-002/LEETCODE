//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2787

//? ⌚ Time complexity ➺ O(n * n ^ (1 / x)) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
      int numberOfWays(int n, int x) {
            const int MOD = 1e9 + 7;

            // dp[s] stores number of ways to sum to s
            vector<int> dp(n + 1, 0);
            dp[0] = 1; // Base case

            // Loop over base values to be raised to x
            for (int i = 1; i <= n; i++) {
                  long long val = pow(i, x); // i^x

                  // Stop if power exceeds n
                  if (val > n) break;

                  // Go backwards so each number is used at most once
                  for (int j = n; j >= val; j--) {
                        dp[j] = (dp[j] + dp[j - val]) % MOD;
                  }
            }

            return dp[n];
      }
};
