//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1249

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
      string minRemoveToMakeValid(string s) {

            // ---------- First Pass (Left to Right): remove unmatched ')' ----------
            int open = 0;
            string res = "";

            for (char ch : s) {
                  if (ch == '(') {
                        // Track unmatched opening brackets
                        open++;
                  } else if (ch == ')') {
                        // Skip this ')' if no unmatched '(' exists
                        if (open == 0)
                              continue;
                        // Otherwise consume one unmatched '('
                        open--;
                  }
                  res += ch;
            }

            // ---------- Second Pass (Right to Left): remove unmatched '(' ----------
            int close = 0;
            string final_ = "";

            for (int i = res.size() - 1; i >= 0; i--) {
                  char ch = res[i];
                  if (ch == ')') {
                        // Track unmatched closing brackets
                        close++;
                  } else if (ch == '(') {
                        // Skip this '(' if no unmatched ')' exists
                        if (close == 0)
                              continue;
                        // Otherwise consume one unmatched ')'
                        close--;
                  }
                  final_ += ch;
            }

            // Reverse since we built the string right to left
            reverse(final_.begin(), final_.end());
            return final_;
      }
};