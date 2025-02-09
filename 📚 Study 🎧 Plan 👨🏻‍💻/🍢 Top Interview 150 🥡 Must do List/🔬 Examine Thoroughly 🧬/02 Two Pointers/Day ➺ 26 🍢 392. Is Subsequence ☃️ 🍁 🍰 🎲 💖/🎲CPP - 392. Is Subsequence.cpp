//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 392

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(t)

//? 🧺 Space complexity ➺ O(1)

#include<string>
using namespace std;

class Solution {
      public:
            bool isSubsequence(string s, string t) {
                  // Initialize pointers for both strings, s and t
                  int i = 0, j = 0;

                  // Iterate through the characters in s
                  while (i < s.length()) {
                        // Get the current character of s
                        char ch = s[i];

                        // Move pointer j in t to find the matching character
                        while (j < t.length() && ch != t[j]) {
                              j++;
                        }

                        // If j reaches the end of t without finding the character, break the loop
                        if (j >= t.length()) {
                              break;
                        }

                        // Move to the next character in s and increment j in t
                        i++;
                        j++;
                  }

                  // If all characters of s are found in t in order, return true
                  return i == s.length();
            }
};
