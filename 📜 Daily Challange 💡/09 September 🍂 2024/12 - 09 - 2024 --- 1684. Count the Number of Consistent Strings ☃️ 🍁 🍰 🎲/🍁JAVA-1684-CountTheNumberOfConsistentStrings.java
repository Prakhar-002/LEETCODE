//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1684

//? ⌚ Time complexity ➺ O(n * m) 👉🏻  n = len(words) m = len(allowed)

//? 🧺 Space complexity ➺ O(1)

import java.util.*;

class Solution {
      public int countConsistentStrings(String allowed, String[] words) {
            // Converts the string into a set to reduces the time complexity
            Set<Character> allowedSet = new HashSet<>();
            // iterate over all `ch` in allowed string
            for (char c : allowed.toCharArray()) {
                  // add unique character in our set `allowedSet`
                  allowedSet.add(c);
            }

            // This counter represents the number of consistent strings,
            // which initially is assumed to be equal to the total number of words
            int consistentString = words.length;

            // loop iterates over each word in the `words`
            for (String word : words) {
                  // `for` loop iterates over each character (`ch`) of the current word
                  for (char ch : word.toCharArray()) {
                        // If an inconsistent word is found (when a character is not in `allowedSet`)
                        if (!allowedSet.contains(ch)) {
                              // counter `consistentString` is decremented by 1
                              consistentString--;
                              // decremented only once per inconsistent word so break it here
                              break;
                        }
                  }
            }

            return consistentString;
      }
}