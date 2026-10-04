//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 678

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <string>

class Solution {
public:
      bool checkValidString(string s) {
            int openCount = 0;
            int closeCount = 0;
            int n = s.length();

            // Left-to-right pass: treat '*' as '('
            for (int i = 0; i < n; ++i) {
                  if (s[i] == '(' || s[i] == '*') {
                        openCount++;
                  } else {
                        openCount--;
                  }

                  // Excess ')' found that cannot be paired
                  if (openCount < 0) {
                        return false;
                  }
            }

            // Right-to-left pass: treat '*' as ')'
            for (int i = n - 1; i >= 0; --i) {
                  if (s[i] == ')' || s[i] == '*') {
                        closeCount++;
                  } else {
                        closeCount--;
                  }

                  // Excess '(' found that cannot be paired
                  if (closeCount < 0) {
                        return false;
                  }
            }

            return true;
      }
};