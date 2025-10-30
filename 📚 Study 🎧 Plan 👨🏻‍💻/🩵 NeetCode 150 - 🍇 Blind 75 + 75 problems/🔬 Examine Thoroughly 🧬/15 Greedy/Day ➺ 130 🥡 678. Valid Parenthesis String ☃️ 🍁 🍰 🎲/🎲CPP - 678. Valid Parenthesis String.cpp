//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 678

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(1)

#include <string>
using namespace std;

class Solution {
public:
      /**
       * Checks if the string s containing '(', ')' and '*' can be a valid parentheses string.
       * '*' can represent '(', ')' or an empty string.
       * 
       * @param s The input string.
       * @return True if the string can be valid, false otherwise.
       */
      bool checkValidString(string s) {
            int leftMin = 0; // Minimum possible unmatched '('
            int leftMax = 0; // Maximum possible unmatched '('

            for (char ch : s) {
                  if (ch == '(') {
                        leftMin++;  // '(' increases unmatched '('
                        leftMax++;
                  } else if (ch == ')') {
                        leftMin--;  // ')' decreases unmatched '('
                        leftMax--;
                  } else { // ch == '*'
                        // '*' can be '(' or ')' or empty
                        leftMin--;  // Assume '*' as ')'
                        leftMax++;  // Assume '*' as '('
                  }

                  // If max unmatched '(' drops below zero, too many ')'
                  if (leftMax < 0) {
                        return false;
                  }

                  // leftMin can't be negative, clamp to zero
                  if (leftMin < 0) {
                        leftMin = 0;
                  }
            }

            // If minimum unmatched '(' is zero, string can be balanced
            return leftMin == 0;
      }
};
