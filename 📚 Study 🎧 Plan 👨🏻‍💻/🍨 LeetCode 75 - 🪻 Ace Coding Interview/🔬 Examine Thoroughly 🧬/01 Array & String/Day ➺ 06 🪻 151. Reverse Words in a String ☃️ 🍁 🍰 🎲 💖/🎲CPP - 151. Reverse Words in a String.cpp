//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 151

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <string>
using namespace std;

class Solution {
public:
      string reverseWords(string s) {
            // Add a leading space to handle edge cases
            s = " " + s;

            // Initialize pointers and result string
            int i = s.size() - 1, j = s.size() - 1;
            string res;

            // Traverse the string
            while (i > 0 && j > 0) {
                  // Skip trailing spaces
                  while (i > 0 && s[i] == ' ') {
                        i--;
                  }

                  // Set j to the last non-space character
                  j = i;

                  // Move i to the beginning of the current word
                  while (i > 0 && s[i] != ' ') {
                        i--;
                  }

                  // Append the current word to the result
                  res += s.substr(i + 1, j - i) + " ";
            }

            // Remove trailing spaces and return
            if (!res.empty() && res.back() == ' ') {
                  res.pop_back();
            }

            if (res.back() == ' ') {
                  res.pop_back();
                  return res;
            } else {
                  return res;
            }
      }
};
