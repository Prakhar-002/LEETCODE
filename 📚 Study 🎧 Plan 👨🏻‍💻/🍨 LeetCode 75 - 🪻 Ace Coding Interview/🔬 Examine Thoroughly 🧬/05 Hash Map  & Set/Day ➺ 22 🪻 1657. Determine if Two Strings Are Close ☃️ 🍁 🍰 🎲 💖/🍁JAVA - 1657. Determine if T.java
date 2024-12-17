//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1657

//? ⌚ Time complexity ➺ O(n + m) 👉🏻  n = len(word1)

//? 🧺 Space complexity ➺ O(1)    👉🏻  m = len(word2)

import java.util.Arrays;

class Solution {
      public boolean closeStrings(String word1, String word2) {
            // If lengths of the words don't match, they cannot be close
            if (word1.length() != word2.length()) {
                  return false;
            }

            // Frequency arrays for 26 lowercase English letters
            int[] freq1 = new int[26];
            int[] freq2 = new int[26];

            // Populate the frequency arrays
            for (char c : word1.toCharArray()) {
                  freq1[c - 'a']++;
            }
            for (char c : word2.toCharArray()) {
                  freq2[c - 'a']++;
            }

            // Check if both words use the same set of characters
            for (int i = 0; i < 26; i++) {
                  if ((freq1[i] > 0) != (freq2[i] > 0)) {
                        return false;
                  }
            }

            // Compare sorted frequency distributions
            Arrays.sort(freq1);
            Arrays.sort(freq2);
            return Arrays.equals(freq1, freq2);
      }
}
