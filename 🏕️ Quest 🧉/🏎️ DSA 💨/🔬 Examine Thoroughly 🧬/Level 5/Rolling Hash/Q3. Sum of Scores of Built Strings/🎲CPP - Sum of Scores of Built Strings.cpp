//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2223

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <string>
using namespace std;

class Solution {
public:
      long long sumScores(string s) {
            int n = s.size();
            vector<int> z(n, 0);  // z[i] = LCP(s, s.substr(i))

            int l = 0, r = 0;     // Current Z-box [l, r]

            for (int i = 1; i < n; ++i) {
                  if (i <= r) {
                        // i inside Z-box: reuse prefix info
                        z[i] = min(r - i + 1, z[i - l]);
                  }

                  // Extend match
                  while (i + z[i] < n && s[z[i]] == s[i + z[i]]) {
                        ++z[i];
                  }

                  // Update Z-box if extended further
                  if (i + z[i] - 1 > r) {
                        l = i;
                        r = i + z[i] - 1;
                  }
            }

            // Sum scores: n for full string + sum of z[i]
            long long total = n;
            for (int i = 1; i < n; ++i) {
                  total += z[i];
            }
            return total;
      }
};
