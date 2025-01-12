//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 916

//? ⌚ Time complexity ➺ O(m * p + n * q) 

//*   👉🏻  n = len(word1) p = avg(len(word in word1))
//*   👉🏻  m = len(word2) q = avg(len(word in word2))

//? 🧺 Space complexity ➺ O(1)   

import java.util.ArrayList;
import java.util.List;

class Solution {
      // Method to count the frequency of each letter in a word.
      // Returns an array of size 26, where each index corresponds
      // to the count of letters 'a' to 'z'.
      private int[] wordsLetterCount(String word) {
            int[] letters = new int[26]; // Initialize array with zeros.
            for (char letter : word.toCharArray()) {
                  // Increment the count for the corresponding letter.
                  letters[letter - 'a']++;
            }
            return letters;
      }

      // Method to find all universal words in word1 that satisfy the conditions
      // of being a superset for each word in word2.
      public List<String> wordSubsets(String[] word1, String[] word2) {
            int[] word2MaxCnt = new int[26]; // Maximum letter frequencies for word2.

            // Update maximum frequency counts for each letter in word2.
            for (String word : word2) {
                  int[] count = wordsLetterCount(word);
                  for (int i = 0; i < 26; i++) {
                        word2MaxCnt[i] = Math.max(word2MaxCnt[i], count[i]);
                  }
            }

            List<String> universal = new ArrayList<>(); // List to store universal words.

            // Check each word in word1 against the conditions.
            for (String word : word1) {
                  int[] count = wordsLetterCount(word);
                  boolean isUniversal = true;

                  // Ensure the word meets all frequency requirements.
                  for (int i = 0; i < 26; i++) {
                        if (count[i] < word2MaxCnt[i]) {
                              isUniversal = false;
                              break;
                        }
                  }

                  if (isUniversal) {
                        universal.add(word);
                  }
            }

            return universal;
      }
}
