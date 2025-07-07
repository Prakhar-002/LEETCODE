//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 205

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(1)

#include <stdbool.h>
#include <string.h>

bool isIsomorphic(char* s, char* t) {
      // Arrays to store mapping from s -> t and t -> s
      char mapST[256] = {0};
      char mapTS[256] = {0};

      int len = strlen(s);

      for (int i = 0; i < len; i++) {
            char c1 = s[i];  // Character from string s
            char c2 = t[i];  // Corresponding character from string t

            // If c1 is already mapped, check if it maps to same c2
            if (mapST[c1]) {
                  if (mapST[c1] != c2) {
                        return false;  // Mismatch found
                  }
            } else {
                  mapST[c1] = c2;  // Create new mapping from c1 -> c2
            }

            // If c2 is already mapped, check if it maps to same c1
            if (mapTS[c2]) {
                  if (mapTS[c2] != c1) {
                        return false;  // Mismatch found
                  }
            } else {
                  mapTS[c2] = c1;  // Create new mapping from c2 -> c1
            }
      }

      return true;  // All character mappings are consistent
}
