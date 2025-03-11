#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2063

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(word)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def countVowels(self, word: str) -> int:
            # Initialize the total sum of contributions
            total_vowel_contribution = 0

            # Set of vowels for quick lookup
            vowels = {'a', 'e', 'i', 'o', 'u'}

            # Iterate over each character in the word
            for i in range(len(word)):
                  if word[i] in vowels:  # Check if the current character is a vowel
                        # Each vowel contributes to multiple substrings
                        # Formula: (i + 1) * (len(word) - i)
                        # i + 1 → Number of ways to start a substring that includes word[i]
                        # len(word) - i → Number of ways to end a substring that includes word[i]
                        total_vowel_contribution += (i + 1) * (len(word) - i)

            return total_vowel_contribution
