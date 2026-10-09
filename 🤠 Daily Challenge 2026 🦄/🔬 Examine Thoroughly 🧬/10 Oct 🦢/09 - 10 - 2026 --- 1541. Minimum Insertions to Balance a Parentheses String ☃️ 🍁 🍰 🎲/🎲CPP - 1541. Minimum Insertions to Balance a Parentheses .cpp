//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1541

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(1)

#include <string>

class Solution {
public:
      int minInsertions(std::string s) {
            int count = 0; // Tracks open '(' brackets
            int res = 0;   // Tracks required insertions
            int i = 0;
            int n = s.length();

            while (i < n) {
                  if (s[i] == '(') {
                        count++;
                        i++;
                  } else {
                        // Current character is ')'
                        if (count > 0) {
                              count--;
                        } else {
                              // Missing an opening '('
                              res++;
                        }

                        // Check if followed immediately by another ')'
                        if (i + 1 < n && s[i + 1] == ')') {
                              i += 2;
                        } else {
                              // Missing the second ')' of the pair
                              res++;
                              i++;
                        }
                  }
            }

            // Remaining open brackets each need two closing brackets
            return res + (count * 2);
      }
};