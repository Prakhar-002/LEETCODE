//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1021

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public String removeOuterParentheses(String s) {
            int open = 0;
            int close = 0;
            StringBuilder res = new StringBuilder();

            for (int i = 0; i < s.length(); i++) {
                  char ch = s.charAt(i);

                  // Skip outermost opening bracket of a new primitive group
                  if (open == close && ch == '(') {
                        open++;
                        continue;
                  }

                  // Update bracket counts
                  if (ch == '(') {
                        open++;
                  } else {
                        close++;
                  }

                  // Skip outermost closing bracket that finishes the current primitive group
                  if (open == close && ch == ')') {
                        continue;
                  }

                  // Append non-outer bracket
                  res.append(ch);
            }

            return res.toString();
      }
}