//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 678

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public boolean checkValidString(String s) {
            int openCount = 0;
            int closeCount = 0;
            int n = s.length();

            // Left-to-right pass: treat '*' as '(' to verify if ')' can be balanced
            for (int i = 0; i < n; i++) {
                  char ch = s.charAt(i);
                  if (ch == '(' || ch == '*') {
                        openCount++;
                  } else {
                        openCount--;
                  }

                  // More ')' than available '(' and '*' makes the string invalid
                  if (openCount < 0) {
                        return false;
                  }
            }

            // Right-to-left pass: treat '*' as ')' to verify if '(' can be balanced
            for (int i = n - 1; i >= 0; i--) {
                  char ch = s.charAt(i);
                  if (ch == ')' || ch == '*') {
                        closeCount++;
                  } else {
                        closeCount--;
                  }

                  // More '(' than available ')' and '*' makes the string invalid
                  if (closeCount < 0) {
                        return false;
                  }
            }

            return true;
      }
}