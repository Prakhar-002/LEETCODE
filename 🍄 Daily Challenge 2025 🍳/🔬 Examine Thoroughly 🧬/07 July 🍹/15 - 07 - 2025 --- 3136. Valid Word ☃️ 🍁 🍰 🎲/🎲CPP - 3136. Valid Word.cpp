//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3136

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(word)

//? 🧺 Space complexity ➺ O(1)

class Solution {
public:
      bool isValid(string word) {
            // A valid word must be at least 3 characters long
            if (word.length() < 3) return false;

            bool hasVowel = false;
            bool hasConsonant = false;

            // Iterate through each character in the string
            for (char ch : word) {

                  // Check for invalid characters
                  if (ch == '@' || ch == '#' || ch == '$') {
                        return false;  // Contains invalid characters
                  }

                  // Check if character is a vowel (both uppercase and lowercase)
                  if (string("aeiouAEIOU").find(ch) != string::npos) {
                        hasVowel = true;
                  }

                  // If it's a digit, skip it
                  else if (isdigit(ch)) {
                        continue;
                  }

                  // If it's an alphabet letter (not a vowel), it's a consonant
                  else if (isalpha(ch)) {
                        hasConsonant = true;
                  }
            }

            // The word must have at least one vowel and one consonant
            return hasVowel && hasConsonant;
      }
};
