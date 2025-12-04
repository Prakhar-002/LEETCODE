//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1358

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(1)

#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
      int numberOfSubstrings(string s) {
            // Hash map to store the frequency of 'a', 'b', and 'c'
            unordered_map<char, int> abcCount;
            int substring = 0;  // Counter to store the number of valid substrings
            int l = 0;  // Left pointer for the sliding window

            // Iterate over the string with the right pointer `r`
            for (int r = 0; r < s.length(); r++) {
                  abcCount[s[r]]++;  // Add the current character to the frequency map

                  // When all three characters ('a', 'b', 'c') are in the window
                  while (abcCount.size() == 3) {
                        // Every substring starting from index `l` to `r`
                        // contributes to (s.length() - r) valid substrings
                        substring += (s.length() - r);

                        // Shrink the window from the left
                        abcCount[s[l]]--;  // Reduce the frequency of the leftmost character

                        // If the character count becomes zero, remove it from the map
                        if (abcCount[s[l]] == 0) {
                              abcCount.erase(s[l]);
                        }

                        l++;  // Move the left pointer forward
                  }
            }

            return substring;  // Return the total count of valid substrings
      }
};

//!---------------------------------------------------------------------------------

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(1)

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
      int numberOfSubstrings(string s) {
            // Store the latest indices of 'a', 'b', and 'c'
            int a = -1, b = -1, c = -1;
            int count = 0; // Total count of valid substrings

            // Iterate over the string
            for (int i = 0; i < s.size(); i++) {
                  // Update the most recent index for the current character
                  if (s[i] == 'a') {
                        a = i;
                  } else if (s[i] == 'b') {
                        b = i;
                  } else if (s[i] == 'c') {
                        c = i;
                  }

                  // If all three characters have been seen at least once
                  if (a != -1 && b != -1 && c != -1) {
                        // Find the leftmost occurrence among 'a', 'b', and 'c'
                        int minIndex = min({a, b, c});

                        // Every substring starting from index 0 to `minIndex` is valid
                        count += (minIndex + 1);
                  }
            }

            return count; // Return the total count of valid substrings
      }
};