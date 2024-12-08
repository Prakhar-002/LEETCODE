//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 392

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(t)

//? 🧺 Space complexity ➺ O(1)

#include <stdbool.h>
#include <string.h>

bool isSubsequence(const char *s, const char *t) {
      // Initialize pointers for both strings, s and t
      int i = 0, j = 0;

      // Iterate through the characters in s
      while (i < strlen(s)) {
            // Get the current character of s
            char ch = s[i];

            // Move pointer j in t to find the matching character
            while (j < strlen(t) && ch != t[j]) {
                  j++;
            }

            // If j reaches the end of t without finding the character, break the loop
            if (j >= strlen(t)) {
                  break;
            }

            // Move to the next character in s and increment j in t
            i++;
            j++;
      }

      // If all characters of s are found in t in order, return true
      return i == strlen(s);
}
