//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3306

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(word)

//? 🧺 Space complexity ➺ O(1)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
      long long countOfSubstrings(string word, int k) {
            return atLeastK(word, k) - atLeastK(word, k + 1);
      }

private:
      long long atLeastK(string &word, int k) {
            unordered_map<char, int> vowels; // Map to store vowel frequencies
            int nonVowels = 0; // Count of non-vowel characters
            long long subStr = 0; // Count of valid substrings
            int l = 0; // Left pointer for sliding window

            for (int r = 0; r < word.size(); r++) {
                  char c = word[r];

                  // If current character is a vowel, update its count
                  if (isVowel(c)) {
                        vowels[c]++;
                  } else {
                        nonVowels++; // Increment count of non-vowel characters
                  }

                  // Shrink window when all vowels are present & non-vowel count is at least k
                  while (vowels.size() == 5 && nonVowels >= k) {
                        subStr += (word.size() - r); // Count all valid substrings from (l to r)

                        char leftChar = word[l];
                        if (isVowel(leftChar)) {

                              vowels[leftChar]--;

                              if (vowels[leftChar] == 0) {
                                    vowels.erase(leftChar); // Remove vowel if count reaches 0
                              }

                        } else {
                              nonVowels--; // Reduce non-vowel count
                        }

                        l++; // Move left pointer
                  }
            }
            return subStr;
      }

      // Helper function to check if a character is a vowel
      bool isVowel(char c) {
            return string("aeiou").find(c) != string::npos;
      }
};
