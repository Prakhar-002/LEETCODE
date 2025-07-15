#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3136

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(word)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def isValid(self, word: str) -> bool: 
            # A valid word must be at least 3 characters long
            if len(word) < 3:
                  return False

            has_vowel = False     # Tracks if at least one vowel exists
            has_consonant = False # Tracks if at least one consonant exists

            # Set of invalid characters
            invalid_chars = {"@", "#", "$"}

            # Set of vowels (both lowercase and uppercase)
            vowels = {"a", "e", "i", "o", "u", "A", "E", "I", "O", "U"}

            for ch in word:
                  # If character is invalid, return False
                  if ch in invalid_chars:
                        return False

                  # Check if character is a vowel
                  if ch in vowels:
                        has_vowel = True

                  # Check if character is a digit (0–9)
                  elif ch.isdigit():
                        continue  # digits are allowed but ignored in vowel/const check

                  # If character is alphabetic but not a vowel, it's a consonant
                  elif ch.isalpha():
                        has_consonant = True

            # The word is valid if it contains both vowels and consonants
            return has_vowel and has_consonant
