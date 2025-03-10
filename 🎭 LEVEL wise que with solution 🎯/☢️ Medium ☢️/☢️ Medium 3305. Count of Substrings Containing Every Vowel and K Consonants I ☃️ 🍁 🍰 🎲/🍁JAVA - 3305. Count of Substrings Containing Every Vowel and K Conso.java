// ! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3305

// ? ⌚ Time complexity ➺ O(n) 👉🏻 n = len(nums)

// ? 🧺 Space complexity ➺ O(1)

import java.util.*;

class Solution {
      public int countOfSubstrings(String word, int k) {
            // Compute the count difference between k and k + 1
            return atLeastK(word, k) - atLeastK(word, k + 1);
      }

      /**
       * Helper function to count substrings that contain all 5 vowels
       * and at least `k` non-vowel characters.
       */
      private int atLeastK(String word, int k) {
            Map<Character, Integer> vowels = new HashMap<>(); // Map to count vowel occurrences
            int nonVowels = 0; // Counter for non-vowel characters
            int subStr = 0; // Counter for valid substrings
            int l = 0; // Left pointer for sliding window

            // Iterate over the string with right pointer `r`
            for (int r = 0; r < word.length(); r++) {
                  char c = word.charAt(r);

                  // If current character is a vowel, increase its count
                  if (isVowel(c)) {
                        vowels.put(c, vowels.getOrDefault(c, 0) + 1);
                  } else {
                        nonVowels++; // Otherwise, increase non-vowel count
                  }

                  // Adjust the window to ensure we have all 5 vowels and at least `k` non-vowel
                  // chars
                  while (vowels.size() == 5 && nonVowels >= k) {
                        subStr += (word.length() - r); // Add valid substrings

                        // Shrink window from the left
                        char leftChar = word.charAt(l);
                        if (isVowel(leftChar)) {

                              vowels.put(leftChar, vowels.get(leftChar) - 1);

                              if (vowels.get(leftChar) == 0) {
                                    vowels.remove(leftChar); // Remove vowel if count reaches zero
                              }

                        } else {
                              nonVowels--; // Reduce non-vowel count
                        }
                        l++; // Move left pointer forward
                  }
            }

            return subStr;
      }

      //? Helper function to check if a character is a vowel.
      private boolean isVowel(char c) {
            return "aeiou".indexOf(c) != -1;
      }
}
