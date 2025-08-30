//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 5

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(1)

class Solution {
public:
      string longestPalindrome(string s) {
            // Start index of longest palindrome found
            int resIdx = 0;
            // Length of longest palindrome found
            int resLen = 0;

            // Iterate over each character as center
            for (int i = 0; i < s.size(); i++) {
                  // Odd length palindrome: center at i
                  int l = i, r = i;
                  while (l >= 0 && r < s.size() && s[l] == s[r]) {
                        if ((r - l + 1) > resLen) {
                              resIdx = l;
                              resLen = r - l + 1;
                        }
                        l--;
                        r++;
                  }

                  // Even length palindrome: center between i and i + 1
                  l = i;
                  r = i + 1;
                  while (l >= 0 && r < s.size() && s[l] == s[r]) {
                        if ((r - l + 1) > resLen) {
                              resIdx = l;
                              resLen = r - l + 1;
                        }
                        l--;
                        r++;
                  }
            }

            // Return longest palindrome substring
            return s.substr(resIdx, resLen);
      }
};
