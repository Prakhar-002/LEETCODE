//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 455

//? ⌚ Time complexity ➺ O(n log n + m log m) 👉🏻  n = len(g)

//? 🧺 Space complexity ➺ O(1)  👉🏻 m = len(s)

class Solution {
public:
      int findContentChildren(vector<int> &g, vector<int> &s) {
            sort(g.begin(), g.end()); // Sort greed
            sort(s.begin(), s.end()); // Sort cookie sizes

            int gIdx = 0, sIdx = 0, content = 0;

            // Traverse both arrays
            while (gIdx < g.size() && sIdx < s.size()) {
                  // If current cookie is too small, try next one
                  while (sIdx < s.size() && g[gIdx] > s[sIdx]) {
                        sIdx++;
                  }
                  // If valid cookie is found
                  if (sIdx < s.size()) {
                        content++; // One child is content
                        sIdx++;    // Use that cookie
                  }
                  gIdx++; // Move to next child
            }
            return content;
      }
};
