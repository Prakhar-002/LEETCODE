//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L5.3 Q2

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <string>
using namespace std;

class Solution {
public:
      // Helper function to compute LPS (Longest Prefix Suffix) array
      vector<int> findLps(const string& s) {
            int n = s.size();
            vector<int> lps(n, 0);   // lps[i] = longest proper prefix which is also suffix of s[0..i]

            int length = 0;          // current length of longest prefix-suffix
            int i = 1;               // start from second character

            while (i < n) {
                  if (s[i] == s[length]) {
                        // Characters match: extend current prefix-suffix
                        length++;
                        lps[i] = length;
                        i++;
                  } else {
                        if (length != 0) {
                              // Fall back to previous border (like KMP failure function)
                              length = lps[length - 1];
                        } else {
                              // No prefix-suffix to fall back to, lps[i] remains 0
                              i++;
                        }
                  }
            }
            return lps;
      }

      string longestPrefix(string s) {
            // Get LPS array for entire string
            vector<int> prefixLps = findLps(s);

            // Length of longest happy prefix for full string
            int happyPrefixLen = prefixLps.back();

            // Return that prefix
            return s.substr(0, happyPrefixLen);
      }
};
