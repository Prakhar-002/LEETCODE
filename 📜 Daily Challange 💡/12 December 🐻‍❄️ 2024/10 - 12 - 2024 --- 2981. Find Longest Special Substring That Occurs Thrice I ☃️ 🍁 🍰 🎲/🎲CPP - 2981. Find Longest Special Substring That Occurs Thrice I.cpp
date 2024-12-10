//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2981

//? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(n ^ 2)

#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
      int maximumLength(string s) {
            // Create a HashMap to store the count of substrings.
            unordered_map<string, int> subStringCount;

            // Initialize a variable to store the maximum length of a substring
            // that appears at least 3 times.
            int maxLen = 0;

            // Iterate over each character in the input string.
            for (int i = 0; i < s.length(); i++) {
                  int index = i;

                  // Generate all substrings starting at index `i` with consecutive identical characters.
                  while (index < s.length() && s[index] == s[i]) {
                        // Extract the substring from `i` to `index + 1`.
                        string sub = s.substr(i, index - i + 1);
                        index++;

                        // Increment the count of the substring in the HashMap.
                        subStringCount[sub]++;

                        // If the substring appears at least 3 times and has a length greater than
                        // the current maximum, update the maximum length.
                        if (subStringCount[sub] >= 3 && sub.length() > maxLen) {
                              maxLen = sub.length();
                        }
                  }
            }

            // if max_len never update means no subString exist so return -1
            if ( maxLen == 0) return -1;

            // Return the maximum length found, or -1 if no such substring exists.
            return maxLen;
      }
};
