//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1079

//? ⌚ Time complexity ➺ O(n ^ n) 👉🏻  n = Unique char in s

//? 🧺 Space complexity ➺ O(n)

import java.util.HashMap;

class Solution {
      public int numTilePossibilities(String tiles) {
            // Count occurrences of each character in the string
            HashMap<Character, Integer> charCount = new HashMap<>();
            for (char ch : tiles.toCharArray()) {
                  charCount.put(ch, charCount.getOrDefault(ch, 0) + 1);
            }

            return backtrack(charCount);
      }

      private int backtrack(HashMap<Character, Integer> charCount) {
            int letters = 0; // Tracks the number of unique sequences

            // Iterate through all characters in the map
            for (char ch : charCount.keySet()) {
                  if (charCount.get(ch) > 0) { // If there are tiles left of this type
                        charCount.put(ch, charCount.get(ch) - 1); // Use one tile
                        letters += 1; // Count the current sequence
                        letters += backtrack(charCount); // Recursively explore further
                        charCount.put(ch, charCount.get(ch) + 1); // Backtrack (restore tile count)
                  }
            }
            return letters; // Return total sequences found
      }
}
