//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2063

// ? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(word)

// ? 🧺 Space complexity ➺ O(1)

class Solution {
public:
      long long countVowels(string word) {
            long long totalVowelCount = 0; // Stores the total contribution of vowels
            int length = word.length();
            unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u'}; // Set of vowel characters

            // Iterate through each character in the word
            for (int i = 0; i < length; i++) {
                  if (vowels.count(word[i])) { // Check if the character is a vowel
                        // Calculate its contribution based on the formula
                        totalVowelCount += (long long)(i + 1) * (length - i);
                  }
            }

            return totalVowelCount; // Return the total count of vowels in substrings
      }
};
