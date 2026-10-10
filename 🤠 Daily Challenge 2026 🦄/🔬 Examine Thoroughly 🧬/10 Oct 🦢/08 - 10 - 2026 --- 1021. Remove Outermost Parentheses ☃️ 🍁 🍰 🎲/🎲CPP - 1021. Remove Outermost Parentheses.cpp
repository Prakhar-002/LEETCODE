//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1021

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(1)

#include <string>

class Solution {
public:
      string removeOuterParentheses(string s) {
            int open = 0;
            int close = 0;
            string res = "";

            for (char ch : s) {
                  // Skip outermost '(' that begins a primitive decomposition part
                  if (open == close && ch == '(') {
                        open++;
                        continue;
                  }

                  // Count parenthesis occurrences
                  if (ch == '(') {
                        open++;
                  } else {
                        close++;
                  }

                  // Skip outermost ')' that ends the primitive decomposition part
                  if (open == close && ch == ')') {
                        continue;
                  }

                  // Append intermediate parenthesis
                  res += ch;
            }

            return res;
      }
};