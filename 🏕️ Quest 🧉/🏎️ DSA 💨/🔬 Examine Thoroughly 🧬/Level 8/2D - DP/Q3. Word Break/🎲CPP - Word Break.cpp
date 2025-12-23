//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L8.4 Q3

//? ⌚ Time complexity ➺ O(n ^ 2 * m) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n + k)

class Solution {
public:
      bool wordBreak(string s, vector<string>& wordDict) {
            int n = s.length();
            // Convert wordDict to an unordered_set for O(1) lookup
            unordered_set<string> words(wordDict.begin(), wordDict.end());
            // dp[i] = true if s.substr(0, i) can be segmented into words from wordDict
            vector<bool> dp(n + 1, false);
            dp[0] = true; // empty string can always be segmented

            // For each position i in the string
            for (int i = 1; i <= n; i++) {
                  // Try all possible j where we split s[0:i] into s[0:j] and s[j:i]
                  for (int j = 0; j < i; j++) {
                        // If s[0:j] can be segmented (dp[j] is true)
                        // and s.substr(j, i - j) is a word in the dictionary
                        if (dp[j] && words.find(s.substr(j, i - j)) != words.end()) {
                              // Then s[0:i] can be segmented
                              dp[i] = true;
                              break; // no need to check other j for this i
                        }
                  }
            }

            // Return whether the entire string s can be segmented
            return dp[n];
      }
};
