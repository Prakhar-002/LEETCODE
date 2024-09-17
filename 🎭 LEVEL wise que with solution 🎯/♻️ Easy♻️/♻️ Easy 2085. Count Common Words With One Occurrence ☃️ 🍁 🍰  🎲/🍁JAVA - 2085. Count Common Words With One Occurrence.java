//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2085

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = Total no of words 

//? 🧺 Space complexity ➺ O(n)

import java.util.*;

class Solution {
      public int countWords(String[] words1, String[] words2) {
            // Use HashMap to count occurrences of each word
            Map<String, Integer> wordsOne = new HashMap<>();
            Map<String, Integer> wordsTwo = new HashMap<>();

            // Count occurrences of each word in words1
            for (String word : words1) {
                  wordsOne.put(word, wordsOne.getOrDefault(word, 0) + 1);
            }

            // Count occurrences of each word in words2
            for (String word : words2) {
                  wordsTwo.put(word, wordsTwo.getOrDefault(word, 0) + 1);
            }

            // Hold the count of words that appear exactly once in both lists
            int res = 0;

            // Iterate through each word in words1
            for (String word : words1) {
                  // Check if word appears exactly once in words1 and in words2
                  if (wordsOne.getOrDefault(word, 0) == 1 && wordsTwo.getOrDefault(word, 0) == 1) {
                        // Increment res by 1
                        res++;
                  }
            }

            // Return the result
            return res;
      }
}
