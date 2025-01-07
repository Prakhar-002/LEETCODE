//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1408

//? ⌚ Time complexity ➺ O(n^2 * m) 👉🏻  n = len(words)

//? 🧺 Space complexity ➺ O(n)      👉🏻  m = avg(len(word))

import java.util.*;

class Solution {
      public List<String> stringMatching(String[] words) {
            // Initialize a set to store substrings that match the criteria
            Set<String> matchingWords = new HashSet<>();

            // Iterate through each word in the list
            for (String word : words) {
                  // Compare the current word with every other word in the list
                  for (String potentialString : words) {
                        // Check if the potential substring is part of the current word
                        // and ensure it's not the same as the current word
                        if (word.contains(potentialString) && !word.equals(potentialString)) {
                              matchingWords.add(potentialString);
                        }
                  }
            }

            // Convert the set to a list before returning
            return new ArrayList<>(matchingWords);
      }
}
