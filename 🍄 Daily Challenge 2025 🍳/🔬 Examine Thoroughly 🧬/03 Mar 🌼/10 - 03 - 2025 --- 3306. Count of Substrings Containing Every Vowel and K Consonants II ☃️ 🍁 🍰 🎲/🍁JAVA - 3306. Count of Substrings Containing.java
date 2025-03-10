// ! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3306

// ? ⌚ Time complexity ➺ O(n) 👉🏻 n = len(word)

// ? 🧺 Space complexity ➺ O(1)

import java.util.*;

class Solution {
      public long countOfSubstrings(String word, int k) {
            return atLeastK(word, k) - atLeastK(word, k + 1);
      }

      private long atLeastK(String word, int k) {
            Map<Character, Integer> vowels = new HashMap<>(); // Store frequency of vowels
            int nonVowels = 0; // Count of non-vowel characters
            long subStr = 0; // Count of valid substrings
            int l = 0; // Left pointer for sliding window

            for (int r = 0; r < word.length(); r++) {
                  char c = word.charAt(r);

                  // If current character is a vowel, update its count
                  if (isVowel(c)) {
                        vowels.put(c, vowels.getOrDefault(c, 0) + 1);
                  } else {
                        nonVowels++; // Increment count of non-vowel characters
                  }

                  // Shrink the window if all vowels are present and non-vowel count is at least k
                  while (vowels.size() == 5 && nonVowels >= k) {
                        subStr += (word.length() - r); // Count all valid substrings from (l to r)

                        char leftChar = word.charAt(l);
                        if (isVowel(leftChar)) {

                              vowels.put(leftChar, vowels.get(leftChar) - 1);

                              if (vowels.get(leftChar) == 0) {
                                    vowels.remove(leftChar); // Remove vowel if count reaches 0
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
      private boolean isVowel(char c) {
            return "aeiou".indexOf(c) != -1;
      }
}
