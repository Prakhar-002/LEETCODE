//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 395

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <string>
#include <vector>
#include <algorithm>

class Solution {
public:
      int longestSubstring(string s, int k) {
            int ans = 0;

            // Iterate through target number of unique characters (1 to 26)
            for (int uniqueTarget = 1; uniqueTarget <= 26; ++uniqueTarget) {
                  vector<int> freq(26, 0);
                  int l = 0;
                  int uniqueCount = 0;
                  int validCount = 0;

                  for (int r = 0; r < s.length(); ++r) {
                        int idx = s[r] - 'a';

                        // Track new unique character in window
                        if (freq[idx] == 0) {
                              uniqueCount++;
                        }

                        freq[idx]++;

                        // Track character meeting minimum frequency k
                        if (freq[idx] == k) {
                              validCount++;
                        }

                        // Shrink window if unique count exceeds target
                        while (uniqueCount > uniqueTarget) {
                              int leftIdx = s[l] - 'a';

                              if (freq[leftIdx] == k) {
                                    validCount--;
                              }

                              freq[leftIdx]--;

                              if (freq[leftIdx] == 0) {
                                    uniqueCount--;
                              }

                              l++;
                        }

                        // Update maximum valid length found
                        if (uniqueCount == uniqueTarget && validCount == uniqueTarget) {
                              ans = max(ans, r - l + 1);
                        }
                  }
            }

            return ans;
      }
};