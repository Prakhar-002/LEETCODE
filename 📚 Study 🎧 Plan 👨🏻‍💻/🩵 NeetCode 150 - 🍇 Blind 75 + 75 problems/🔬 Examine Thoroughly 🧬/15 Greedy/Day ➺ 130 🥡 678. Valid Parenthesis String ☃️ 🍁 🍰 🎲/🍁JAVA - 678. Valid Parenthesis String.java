//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 678

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      /**
       * Check if the input string s, containing '(' , ')' and '*',
       * can be interpreted as a valid parentheses string.
       *
       * '*' can represent '(', ')' or empty string.
       *
       * @param s Input string
       * @return true if string can be valid parenthesis string, false otherwise
       */
      public boolean checkValidString(String s) {
            int leftMin = 0; // Minimum possible unmatched '('
            int leftMax = 0; // Maximum possible unmatched '('

            for (char ch : s.toCharArray()) {
                  if (ch == '(') {
                        leftMin++;
                        leftMax++;
                  } else if (ch == ')') {
                        leftMin--;
                        leftMax--;
                  } else { // ch == '*'
                           // '*' can be '(', ')' or empty:
                        leftMin--; // Assume as ')'
                        leftMax++; // Assume as '('
                  }

                  // If max unmatched '(' goes below zero, too many ')'
                  if (leftMax < 0) {
                        return false;
                  }

                  // min unmatched '(' can't be negative, clamp to 0
                  if (leftMin < 0) {
                        leftMin = 0;
                  }
            }

            // If minimum unmatched '(' is zero, string can be balanced
            return leftMin == 0;
      }
}
