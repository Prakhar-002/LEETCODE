//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 856

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <string>

class Solution {
public:
      int scoreOfParentheses(string s) {
            int depth = 0;
            int score = 0;

            for (size_t i = 0; i < s.length(); ++i) {
                  // Increase current nesting level
                  if (s[i] == '(') {
                        depth++;
                  } else {
                        // Decrease current nesting level
                        depth--;

                        // Check if this ')' directly pairs with the previous '('
                        if (s[i - 1] == '(') {
                              score += (1 << depth);
                        }
                  }
            }

            return score;
      }
};