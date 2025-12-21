// ! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L7.4 Q2

// ? ⌚ Time complexity ➺ O(n log n) 👉🏻 n = len(words)

// ? 🧺 Space complexity ➺ O(n)

import java.util.*;

class Solution {
      public String longestWord(String[] words) {
            // Sort words lexicographically so that when lengths tie,
            // the lexicographically smaller word is preferred.
            Arrays.sort(words);

            // HashSet to store words that can be built so far.
            HashSet<String> builtWords = new HashSet<>();

            String result = "";

            for (String w : words) {
                  // If the word length is 1, it is always valid.
                  // Otherwise, check if its prefix (without last char) exists in builtWords.
                  if (w.length() == 1 || builtWords.contains(w.substring(0, w.length() - 1))) {
                        // Update result if this word is longer than the current result.
                        if (w.length() > result.length()) {
                              result = w;
                        }
                        // Add current word so it can be used to build longer words.
                        builtWords.add(w);
                  }
            }

            return result;
      }
}
