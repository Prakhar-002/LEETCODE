//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 165

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <vector>
#include <string>
using namespace std;

class Solution {
public:
      // Helper to split by dot and return integer vector
      vector<int> split(const string& version) {
            vector<int> res;
            size_t start = 0, end;
            while ((end = version.find('.', start)) != string::npos) {
                  res.push_back(stoi(version.substr(start, end - start)));
                  start = end + 1;
            }
            res.push_back(stoi(version.substr(start))); // last segment
            return res;
      }

      int compareVersion(string version1, string version2) {
            vector<int> s1 = split(version1);
            vector<int> s2 = split(version2);
            int maxLength = max(s1.size(), s2.size());

            for (int i = 0; i < maxLength; ++i) {
                  // Get value or 0 if out of bounds
                  int v1 = i < s1.size() ? s1[i] : 0;
                  int v2 = i < s2.size() ? s2[i] : 0;
                  // Compare segments
                  if (v1 != v2)
                        return v1 > v2 ? 1 : -1;
            }
            // All segments are equal
            return 0;
      }
};
