//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3120

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(word)

//? 🧺 Space complexity ➺ O(n)

import java.util.HashSet;
import java.util.Set;

class Solution {
      public int numberOfSpecialChars(String word) {
            // Build a set of all unique characters in the word
            Set<Character> wordSet = new HashSet<>();
            for (char ch : word.toCharArray())
                  wordSet.add(ch);

            int ans = 0;

            for (char ch : word.toCharArray()) {
                  if (Character.isLowerCase(ch)) {
                        // Check if its uppercase pair also exists
                        if (wordSet.contains(Character.toUpperCase(ch))) {
                              ans++;
                              // Remove both to avoid counting same pair twice
                              wordSet.remove(ch);
                              wordSet.remove(Character.toUpperCase(ch));
                        }
                  } else if (Character.isUpperCase(ch)) {
                        // Check if its lowercase pair also exists
                        if (wordSet.contains(Character.toLowerCase(ch))) {
                              ans++;
                              // Remove both to avoid counting same pair twice
                              wordSet.remove(ch);
                              wordSet.remove(Character.toLowerCase(ch));
                        }
                  }
            }

            return ans;
      }
}