//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3333

//? ⌚ Time complexity ➺ O(k * g) 👉🏻  n = len(groups)

//? 🧺 Space complexity ➺ O(k)

class Solution {
public:
      static constexpr int MOD = 1e9 + 7;

      int possibleStringCount(string word, int k) {
            if (word.empty()) return 0;

            vector<int> groups;
            int count = 1;

            // Step 1: Count group lengths
            for (int i = 1; i < word.length(); ++i) {
                  if (word[i] == word[i - 1]) {
                        count++;
                  } else {
                        groups.push_back(count);
                        count = 1;
                  }
            }
            groups.push_back(count);

            // Step 2: Multiply group sizes
            long long total = 1;
            for (int g : groups) {
                  total = (total * g) % MOD;
            }

            if (k <= groups.size()) return total;

            // Step 3: DP for invalid combinations
            vector<int> dp(k, 0);
            dp[0] = 1;

            for (int num : groups) {
                  vector<int> newDp(k, 0);
                  long long sum = 0;

                  for (int s = 0; s < k; ++s) {
                        if (s > 0) sum = (sum + dp[s - 1]) % MOD;
                        if (s > num) sum = (sum - dp[s - num - 1] + MOD) % MOD;
                        newDp[s] = sum;
                  }
                  dp = newDp;
            }

            long long invalid = 0;
            for (int i = groups.size(); i < k; ++i) {
                  invalid = (invalid + dp[i]) % MOD;
            }

            return (total - invalid + MOD) % MOD;
      }
};
