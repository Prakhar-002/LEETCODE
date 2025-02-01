//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 125

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(1)

#include <iostream>
#include <cctype>
using namespace std;

class Solution {
public:
      // Function to check if a given string is a palindrome
      bool isPalindrome(string s) {
            // Initialize two pointers: left (l) at the start, right (r) at the end of the string
            int l = 0, r = s.size() - 1;

            // Iterate until the two pointers meet
            while (l < r) {
                  // Move the left pointer forward if it's not an alphanumeric character
                  while (l < r && !isalnum(s[l])) {
                        l++;
                  }
                  // Move the right pointer backward if it's not an alphanumeric character
                  while (r > l && !isalnum(s[r])) {
                        r--;
                  }
                  // Compare the characters (ignoring case); return false if they don't match
                  if (tolower(s[l]) != tolower(s[r])) {
                        return false;
                  }
                  // Move both pointers towards the center
                  l++;
                  r--;
            }

            // If all checks pass, return true
            return true;
      }
};
