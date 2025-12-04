
//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 424

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
      int characterReplacement(string s, int k) {
            // HashMap to store character frequencies in the current window
            unordered_map<char, int> charCount;
            int left = 0; // Left pointer of the sliding window
            int maxFreq = 0; // Maximum frequency of a single character in the window
            int longestString = 0; // Stores the longest valid substring length

            // Iterate through the string with a right pointer
            for (int right = 0; right < s.length(); right++) {
                  // Update the frequency count of the current character
                  charCount[s[right]]++;

                  // Update maxFreq with the highest occurring character in the window
                  maxFreq = max(maxFreq, charCount[s[right]]);

                  // If the window size minus the highest frequency character is greater than k, shrink the window
                  while ((right - left + 1) - maxFreq > k) {
                        charCount[s[left]]--;
                        left++; // Move the left pointer forward
                  }

                  // Update longestString with the current valid window size
                  longestString = max(longestString, right - left + 1);
            }

            return longestString;
      }
};
