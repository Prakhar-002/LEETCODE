//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L2.3 Q1

// ? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

// ? 🧺 Space complexity ➺ O(1)

#include <string>
#include <cctype>
using namespace std;

class Solution {
public:
      bool detectCapitalUse(string word) {
            int cap = 0;          // Counter for uppercase letters
            int small = 0;        // Counter for lowercase letters

            // Traverse the word letter by letter
            for (char ch : word) {
                  if (isupper(ch)) {
                        cap++;     // Increment uppercase count if character is uppercase
                  } else {
                        small++;   // Increment lowercase count otherwise
                  }
            }

            // Check if exactly one uppercase letter which is the first letter
            if (cap == 1 && isupper(word[0])) {
                  return true;
            }

            // Check if all letters are uppercase or all letters are lowercase
            if (cap == word.length() || small == word.length()) {
                  return true;
            }

            // Otherwise, capitalization usage is invalid
            return false;
      }
};
