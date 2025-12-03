//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L2.4 Q1

//? ⌚ Time complexity ➺ O(n * sqrt(n)) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(1)

#include <string>
using namespace std;

class Solution {
public:
      bool repeatedSubstringPattern(string s) {
            int n = s.size();  // Total length of the string

            // Try all possible substring lengths from n/2 down to 1
            for (int len = n / 2; len >= 1; --len) {
                  // Candidate length must divide n
                  if (n % len == 0) {
                        int times = n / len;          // Number of repeats needed
                        string pattern = s.substr(0, len);  // Candidate substring

                        // Build repeated string
                        string built;
                        built.reserve(n);
                        for (int i = 0; i < times; ++i) {
                              built += pattern;
                        }

                        // Check if built string matches original
                        if (built == s) {
                              return true;
                        }
                  }
            }

            // No valid repeating pattern found
            return false;
      }
};
