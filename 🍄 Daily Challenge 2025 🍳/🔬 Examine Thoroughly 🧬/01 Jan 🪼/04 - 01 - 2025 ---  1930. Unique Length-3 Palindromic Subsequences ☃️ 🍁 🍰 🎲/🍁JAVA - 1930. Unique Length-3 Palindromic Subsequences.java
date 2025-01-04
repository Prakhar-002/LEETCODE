//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1930

// ? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

// ? 🧺 Space complexity ➺ O(1)

import java.util.HashSet;

class Solution {
      public int countPalindromicSubsequence(String s) {
            // Create a set of all unique letters in the string `s`
            HashSet<Character> letters = new HashSet<>();
            for (char c : s.toCharArray()) {
                  letters.add(c);
            }

            // Initialize the answer variable to count unique palindromic subsequences
            int palindromes = 0;

            // Iterate over each unique letter in the string
            for (char letter : letters) {
                  // Find the first and last occurrence of the current letter in the string
                  int i = s.indexOf(letter);
                  int j = s.lastIndexOf(letter);

                  // Create a set to store unique characters between the first and last occurrence
                  HashSet<Character> between = new HashSet<>();

                  // Iterate over characters between the first and last occurrence of the letter
                  for (int k = i + 1; k < j; k++) {
                        // Add each character to the set to ensure uniqueness
                        between.add(s.charAt(k));
                  }

                  // Add the size of the `between` set to the answer, 
                  // as it represents the number of unique palindromic subsequences
                  palindromes += between.size();
            }

            // Return the total count of unique palindromic subsequences
            return palindromes;
      }
}
