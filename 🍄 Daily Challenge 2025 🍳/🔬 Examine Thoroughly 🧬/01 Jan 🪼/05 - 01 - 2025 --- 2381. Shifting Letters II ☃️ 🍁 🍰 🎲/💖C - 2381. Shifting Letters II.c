//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2381

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(n)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* shiftingLetters(char* s, int** shifts, int shiftsSize, int* shiftsColSize) {
      int n = strlen(s);

      // Allocate and initialize the difference array
      int* diff = (int*)calloc(n + 1, sizeof(int));

      // Populate the difference array based on the shifts
      for (int i = 0; i < shiftsSize; i++) {
            int l = shifts[i][0];
            int r = shifts[i][1];
            int d = shifts[i][2];

            // If direction is 1 (right shift), increase diff[r + 1] and decrease diff[l]
            // If direction is 0 (left shift), decrease diff[r + 1] and increase diff[l]
            diff[l] += d == 1 ? -1 : 1;
            diff[r + 1] += d == 1 ? 1 : -1;
      }

      int shift = 0;

      // Allocate space for result string
      char* result = (char*)malloc((n + 1) * sizeof(char));
      result[n] = '\0';

      // Apply the cumulative shifts in reverse order
      for (int i = n; i > 0; i--) {
            shift += diff[i];
            int newChar = (s[i - 1] - 'a' + shift % 26 + 26) % 26; // Apply shift and wrap around
            result[i - 1] = 'a' + newChar;
      }

      // Free the difference array
      free(diff);

      return result;
}
