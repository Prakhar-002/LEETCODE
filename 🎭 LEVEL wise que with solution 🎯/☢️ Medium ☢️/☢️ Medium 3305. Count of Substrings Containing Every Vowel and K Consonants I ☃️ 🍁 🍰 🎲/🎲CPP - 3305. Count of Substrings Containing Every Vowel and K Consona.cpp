//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3305

// ? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

// ? 🧺 Space complexity ➺ O(1)

#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
      int countOfSubstrings(string word, int k) {
            // Compute the count difference between k and k + 1
            return atLeastK(word, k) - atLeastK(word, k + 1);
      }

private:
      /**
       * Helper function to count substrings that contain all 5 vowels
       * and at least `k` non-vowel characters.
       */
      int atLeastK(const string &word, int k) {
            unordered_map<char, int> vowels; // Map to count vowel occurrences
            int nonVowels = 0; // Counter for non-vowel characters
            int subStr = 0; // Counter for valid substrings
            int l = 0; // Left pointer for sliding window

            // Iterate over the string with right pointer `r`
            for (int r = 0; r < word.length(); r++) {
                  char c = word[r];

                  // If current character is a vowel, increase its count
                  if (isVowel(c)) {
                        vowels[c]++;
                  } else {
                        nonVowels++; // Otherwise, increase non-vowel count
                  }

                  // Adjust the window to ensure we have all 5 vowels and at least `k` non-vowel chars
                  while (vowels.size() == 5 && nonVowels >= k) {
                        subStr += (word.length() - r); // Add valid substrings

                        // Shrink window from the left
                        char leftChar = word[l];
                        if (isVowel(leftChar)) {
                              vowels[leftChar]--;
                              if (vowels[leftChar] == 0) {
                                    vowels.erase(leftChar); // Remove vowel if count reaches zero
                              }
                        } else {
                              nonVowels--; // Reduce non-vowel count
                        }
                        l++; // Move left pointer forward
                  }
            }

            return subStr;
      }

      //? Helper function to check if a character is a vowel.
      bool isVowel(char c) {
            return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
      }
};
