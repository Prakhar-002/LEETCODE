//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1957

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(n)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* makeFancyString(const char* s) {
      int len = strlen(s);
      
      // if length is less than 2
      if (len < 2) {
            // return a copy of the same string cause it can not contain 3 consecutive letters
            return strdup(s);
      }

      // Initialize 'fancy' as a char array with the same length as 's'
      char* fancy = (char*)malloc((len + 1) * sizeof(char));
      if (fancy == NULL) {
            return NULL;  // Memory allocation failed
      }

      // Copy the first two characters of 's' to 'fancy'
      fancy[0] = s[0];
      fancy[1] = s[1];
      int fancy_len = 2;

      // Start iterating from the third character in the string
      for (int i = 2; i < len; i++) {
            char ch = s[i];

            // Check if the last two characters in 'fancy' are the same as the current character
            if (fancy_len >= 2 && fancy[fancy_len - 1] == ch && fancy[fancy_len - 2] == ch) {
                  continue;
            } else {
                  // Otherwise, append 'ch' to 'fancy'
                  fancy[fancy_len] = ch;
                  fancy_len++;
            }
      }

      // Null-terminate the string
      fancy[fancy_len] = '\0';

      // Return the modified string
      return fancy;
}