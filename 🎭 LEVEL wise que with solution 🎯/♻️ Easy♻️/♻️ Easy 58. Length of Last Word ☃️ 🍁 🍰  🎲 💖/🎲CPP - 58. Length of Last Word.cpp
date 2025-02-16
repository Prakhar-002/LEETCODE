//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 58

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(1)

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
      // Function to find the length of the last word in a given string
      int lengthOfLastWord(string s) {
            int l = s.length() - 1; // Start from the last character in the string
            int lastWordLen = 0; // Initialize last word length to 0

            // Skip trailing spaces if any
            while (l >= 0 && s[l] == ' ') {
                  l--;
            }

            // Count characters of the last word
            while (l >= 0 && s[l] != ' ') {
                  lastWordLen++;
                  l--;
            }

            return lastWordLen; // Return the length of the last word
      }
};
