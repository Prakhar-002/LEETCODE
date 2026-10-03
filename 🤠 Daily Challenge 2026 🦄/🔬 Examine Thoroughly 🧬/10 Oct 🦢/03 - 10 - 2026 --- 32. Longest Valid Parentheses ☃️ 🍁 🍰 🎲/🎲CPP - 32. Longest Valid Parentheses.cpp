//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 22

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <string>
#include <algorithm>

class Solution {
public:
      int longestValidParentheses(std::string s) {
            int n = s.length();
            int open = 0;
            int close = 0;
            int result = 0;

            // Pass 1: Left-to-right pass
            for (int i = 0; i < n; ++i) {
                  if (s[i] == '(') {
                        open++;
                  } else {
                        close++;
                  }

                  // Update maximum valid length when counts are equal
                  if (open == close) {
                        result = std::max(result, open + close);
                  } 
                  // Reset if there are more ')' than '('
                  else if (close > open) {
                        open = 0;
                        close = 0;
                  }
            }

            // Reset counters
            open = 0;
            close = 0;

            // Pass 2: Right-to-left pass
            for (int i = n - 1; i >= 0; --i) {
                  if (s[i] == '(') {
                        open++;
                  } else {
                        close++;
                  }

                  // Update maximum valid length when counts are equal
                  if (open == close) {
                        result = std::max(result, open + close);
                  } 
                  // Reset if there are more '(' than ')'
                  else if (open > close) {
                        open = 0;
                        close = 0;
                  }
            }

            return result;
      }
};