//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 205

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(1)

import java.util.*;

class Solution {
      public boolean isIsomorphic(String s, String t) {
            Map<Character, Character> mapST = new HashMap<>(); // s -> t mapping
            Map<Character, Character> mapTS = new HashMap<>(); // t -> s mapping

            for (int i = 0; i < s.length(); i++) {
                  char c1 = s.charAt(i); // Current char from s
                  char c2 = t.charAt(i); // Current char from t

                  // Check mapping from s -> t
                  if (mapST.containsKey(c1)) {
                        if (mapST.get(c1) != c2) {
                              return false; // Inconsistent mapping
                        }
                  } else {
                        mapST.put(c1, c2); // Add mapping
                  }

                  // Check reverse mapping from t -> s
                  if (mapTS.containsKey(c2)) {
                        if (mapTS.get(c2) != c1) {
                              return false; // Inconsistent reverse mapping
                        }
                  } else {
                        mapTS.put(c2, c1); // Add reverse mapping
                  }
            }

            return true; // All characters mapped correctly
      }
}
