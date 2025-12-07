//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3578

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

class Solution {
public:
      int countPartitions(vector<int> &nums, int k) {
            int n = nums.size();
            long long MOD = 1000000007LL; // Modulo 10^9+7 for large results

            // dp[i] = number of ways to partition prefix nums[0..i-1]
            vector<long long> dp(n + 1, 0);

            // prefix[i] = sum(dp[0] + dp[1] + ... + dp[i]) for O(1) range queries
            vector<long long> prefix(n + 1, 0);

            // multiset maintains sorted order for O(log n) min/max access
            multiset<int> cnt;

            // Base case: empty array has 1 partition (do nothing)
            dp[0] = 1;
            prefix[0] = 1;

            int j = 0; // Left pointer of sliding window
            for (int i = 0; i < nums.size(); i++) {
                  // Add nums[i] to current window
                  cnt.emplace(nums[i]);

                  // Shrink window while max - min > k
                  while (j <= i && *cnt.rbegin() - *cnt.begin() > k) {
                        // Remove one occurrence of nums[j]
                        cnt.erase(cnt.find(nums[j]));
                        j++;
                  }

                  // dp[i+1] = sum of dp[j..i] = all valid partition starts in current window
                  long long prevPrefix = (j > 0) ? prefix[j - 1] : 0;
                  dp[i + 1] = (prefix[i] - prevPrefix + MOD) % MOD;

                  // Update prefix sum for next iteration
                  prefix[i + 1] = (prefix[i] + dp[i + 1]) % MOD;
            }

            // dp[n] = total ways to partition entire array
            return (int)dp[n];
      }
};
