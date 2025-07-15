//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3136

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(word)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public boolean isValid(String word) {
            // A valid word must be at least 3 characters
            if (word.length() < 3)
                  return false;

            boolean hasVowel = false;
            boolean hasConsonant = false;

            // Loop through each character of the word
            for (char ch : word.toCharArray()) {

                  // Check for invalid characters
                  if (ch == '@' || ch == '#' || ch == '$') {
                        return false; // Invalid character found
                  }

                  // Check if the character is a vowel (lowercase or uppercase)
                  if ("aeiouAEIOU".indexOf(ch) != -1) {
                        hasVowel = true;
                  }

                  // Check if character is a digit
                  else if (Character.isDigit(ch)) {
                        continue; // Digits are allowed, but ignored for consonant check
                  }

                  // Check if the character is a consonant (must be a letter and not a vowel)
                  else if (Character.isLetter(ch)) {
                        hasConsonant = true;
                  }
            }

            // Word is valid if it contains both a vowel and a consonant
            return hasVowel && hasConsonant;
      }
}
