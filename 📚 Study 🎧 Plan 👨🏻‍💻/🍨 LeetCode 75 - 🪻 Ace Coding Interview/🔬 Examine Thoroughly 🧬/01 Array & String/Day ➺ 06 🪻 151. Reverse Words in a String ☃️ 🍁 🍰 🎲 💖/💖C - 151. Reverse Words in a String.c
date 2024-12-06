//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 151

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *reverseWords(char *s) {
      int len = strlen(s);

      // Allocate memory for the result string
      char *result = (char *)malloc(len + 1);
      if (!result) {
            return NULL; // Memory allocation failed
      }

      result[0] = '\0'; // Initialize result as an empty string

      int i = len - 1;

      // Traverse the string from the end
      while (i >= 0) {
            // Skip trailing spaces
            while (i >= 0 && isspace(s[i])) {
                  i--;
            }

            // Mark the end of the word
            int j = i;

            // Move i to the beginning of the word
            while (i >= 0 && !isspace(s[i])) {
                  i--;
            }

            // Append the current word to the result
            if (j > i) { // Check if a word exists
                  if (result[0] != '\0') {
                        strcat(result,
                               " "); // Add a space before appending the next word
                  }
                  strncat(result, s + i + 1, j - i); // Add the word to the result
            }
      }

      return result; // Return the reversed string
}
