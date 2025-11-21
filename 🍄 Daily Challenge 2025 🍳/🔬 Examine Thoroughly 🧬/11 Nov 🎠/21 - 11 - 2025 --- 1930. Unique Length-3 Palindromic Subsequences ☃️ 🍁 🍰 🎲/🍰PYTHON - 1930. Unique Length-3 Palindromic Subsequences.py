#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1930

# ? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

# ? 🧺 Space complexity ➺ O(1) 

class Solution:
      def countPalindromicSubsequence(self, s: str) -> int:
            # Create a set of all unique letters in the string `s`
            letters = set(s)

            # Initialize the answer variable to count unique palindromic subsequences
            palindromes = 0

            # Iterate over each unique letter in the string
            for letter in letters:
                  # Find the first and last occurrence of the current letter in the string
                  i, j = s.index(letter), s.rindex(letter)

                  # Create a set to store unique characters between the first and last occurrence
                  between = set()

                  # Iterate over characters between the first and last occurrence of the letter
                  for k in range(i + 1, j):
                        # Add each character to the set to ensure uniqueness
                        between.add(s[k])

                  # Add the size of the `between` set to the answer, 
                  # as it represents the number of unique palindromic subsequences
                  palindromes += len(between)

            # Return the total count of unique palindromic subsequences
            return palindromes