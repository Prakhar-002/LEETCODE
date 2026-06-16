//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3612

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
      string processStr(string s) {
            string result = "";

            for (char ch : s) {
                  if (islower(ch)) {
                        // Append normal lowercase letters
                        result += ch;
                  } else if (ch == '*' && !result.empty()) {
                        // Remove the last character
                        result.pop_back();
                  } else if (ch == '#') {
                        // Duplicate the entire current string
                        result += result;
                  } else if (ch == '%') {
                        // Reverse the entire current string
                        reverse(result.begin(), result.end());
                  }
            }

            return result;
      }
};