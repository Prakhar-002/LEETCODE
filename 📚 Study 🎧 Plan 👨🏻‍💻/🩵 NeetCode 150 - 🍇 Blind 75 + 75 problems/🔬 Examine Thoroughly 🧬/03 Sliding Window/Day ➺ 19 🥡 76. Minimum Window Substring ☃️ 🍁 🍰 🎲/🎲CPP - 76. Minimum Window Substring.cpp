//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 76

//? ⌚ Time complexity ➺ O(n)  👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(m) 👉🏻  m = Unique Char in s & t

#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

class Solution {
public:
      string minWindow(string s, string t) {
            // If t is empty, return an empty string
            if (t.empty()) {
                  return "";
            }

            // Frequency maps for t and the current window
            unordered_map<char, int> countT, window;

            // Populate countT with the frequency of characters in t
            for (char ch : t) {
                  countT[ch]++;
            }

            int have = 0, need = countT.size();
            int resStart = -1, resLen = INT_MAX;  // Store the smallest window indices
            int l = 0; // Left pointer of sliding window

            // Iterate with right pointer `r`
            for (int r = 0; r < s.length(); r++) {
                  char ch = s[r];
                  window[ch]++;

                  // If character matches the required count
                  if (countT.count(ch) && window[ch] == countT[ch]) {
                        have++;
                  }

                  // Shrink window when valid
                  while (have == need) {
                        // Update result if the current window is smaller
                        if ((r - l + 1) < resLen) {
                              resStart = l;
                              resLen = r - l + 1;
                        }

                        // Remove leftmost character
                        window[s[l]]--;

                        // If removing breaks a needed character count
                        if (countT.count(s[l]) && window[s[l]] < countT[s[l]]) {
                              have--;
                        }

                        l++; // Move left pointer
                  }
            }

            // Return the smallest window substring or empty string if not found
            return resLen == INT_MAX ? "" : s.substr(resStart, resLen);
      }
};
