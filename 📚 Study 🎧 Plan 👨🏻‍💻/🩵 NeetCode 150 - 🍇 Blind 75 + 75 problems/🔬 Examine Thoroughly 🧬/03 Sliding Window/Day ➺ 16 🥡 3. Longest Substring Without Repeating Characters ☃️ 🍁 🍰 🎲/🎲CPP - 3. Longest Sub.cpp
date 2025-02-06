//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(m) 👉🏻 m = maxLength

#include <unordered_set>
#include <string>
using namespace std;

class Solution {
public:
      int lengthOfLongestSubstring(string s) {
            // Unordered set to store unique characters
            unordered_set<char> charSet;
            int left = 0;  // Left pointer of the sliding window
            int maxLength = 0;  // Maximum length of substring

            // Iterate through the string with a right pointer
            for (int right = 0; right < s.length(); right++) {
                  // If character is already in set, shrink the window from the left
                  while (charSet.find(s[right]) != charSet.end()) {
                        charSet.erase(s[left]);
                        left++; // Move left pointer to remove duplicates
                  }

                  // Add current character to the set
                  charSet.insert(s[right]);

                  // Update maxLength with the current window size
                  maxLength = max(maxLength, right - left + 1);
            }

            return maxLength;
      }
};
