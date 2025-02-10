//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3174

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char* clearDigits(char* s) {
      int length = strlen(s);
      char* result = (char*)malloc(length + 1); // Allocate memory for output string
      int top = 0; // Stack pointer (index for the result array)

      if (result == NULL) {
            return NULL; // Handle memory allocation failure
      }

      // Iterate through each character in the string
      for (int i = 0; s[i] != '\0'; i++) {
            if (isdigit(s[i])) {
                  // If stack is not empty, remove the last character (backspace effect)
                  if (top > 0) {
                        top--;
                  }
            } else {
                  // Store non-digit characters
                  result[top++] = s[i];
            }
      }

      // Null-terminate the result string
      result[top] = '\0';

      return result; // Return dynamically allocated string
}
