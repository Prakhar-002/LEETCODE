//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 796

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(n)

#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

bool rotateString(char* s, char* goal) {
      int len_s = strlen(s);
      int len_goal = strlen(goal);

      // Check if lengths are the same
      if (len_s != len_goal) return false;

      // Concatenate s with itself
      char* double_s = (char*)malloc(2 * len_s + 1);
      strcpy(double_s, s);
      strcat(double_s, s);

      // Check if goal is a substring of double_s
      bool result = strstr(double_s, goal) != NULL;
      free(double_s);  // Free the allocated memory
      return result;
}
