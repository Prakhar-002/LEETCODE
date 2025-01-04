//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1930

// ? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

// ? 🧺 Space complexity ➺ O(1)

#include <unordered_set>
#include <string>
using namespace std;

class Solution {
public:
      int countPalindromicSubsequence(string s) {
            // Create a set of all unique letters in the string `s`
            unordered_set<char> letters(s.begin(), s.end());

            // Initialize the answer variable to count unique palindromic subsequences
            int palindromes = 0;

            // Iterate over each unique letter in the string
            for (char letter : letters) {
                  // Find the first and last occurrence of the current letter in the string
                  int i = s.find_first_of(letter);
                  int j = s.find_last_of(letter);

                  // Create a set to store unique characters between the first and last occurrence
                  unordered_set<char> between;

                  // Iterate over characters between the first and last occurrence of the letter
                  for (int k = i + 1; k < j; k++) {
                        // Add each character to the set to ensure uniqueness
                        between.insert(s[k]);
                  }

                  // Add the size of the `between` set to the answer, 
                  // as it represents the number of unique palindromic subsequences
                  palindromes += between.size();
            }

            // Return the total count of unique palindromic subsequences
            return palindromes;
      }
};
