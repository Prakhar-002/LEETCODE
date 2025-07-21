//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1957

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(n)

#include <string>
using namespace std;

class Solution {
public:
      string makeFancyString(const string &s) {
            // if length is less than 2
            if (s.length() < 2) {
                  // return the same string cause it can not contain 3 consecutive latter
                  return s;
            }

            // Initialize 'fancy' with the first two characters of 's'.
            string fancy = s.substr(0, 2);

            // Start iterating from the third character in the string.
            for (int i = 2; i < s.size(); ++i) {
                  char ch = s[i];

                  // store the length of fancy string
                  int n = fancy.size();

                  // Check if the last two characters in 'fancy' are the same as the current character.
                  if (fancy.back() == ch && fancy[n - 2] == ch) {
                        continue;
                  } else {
                        // Otherwise, append 'ch' to 'fancy'.
                        fancy += ch;
                  }
            }

            // Return the modified string that avoids three consecutive identical characters.
            return fancy;
      }
};