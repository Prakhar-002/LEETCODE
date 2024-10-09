//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1071

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = min(str1.length, str2.length)

//? 🧺 Space complexity ➺ O(1)

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int gcd(int a, int b) {
      return b == 0 ? a : gcd(b, a % b);
}

char* gcdOfStrings(const char* str1, const char* str2) {
      int len1 = strlen(str1);
      int len2 = strlen(str2);

      // Allocate memory for concatenated strings
      char* concat1 = malloc(len1 + len2 + 1);
      char* concat2 = malloc(len1 + len2 + 1);

      // Create concatenated strings
      strcpy(concat1, str1);
      strcat(concat1, str2);
      strcpy(concat2, str2);
      strcat(concat2, str1);

      // Check if concatenated strings are equal or not, if not return ""
      if (strcmp(concat1, concat2) != 0) {
            free(concat1);
            free(concat2);
            return "";
      }

      free(concat1);
      free(concat2);

      // else return the substring from 0 to gcd of size(str1), size(str2)
      int gcd_len = gcd(len1, len2);

      // Allocate memory for result
      char* result = malloc(gcd_len + 1);

      // Copy substring
      strncpy(result, str1, gcd_len);
      result[gcd_len] = '\0';

      return result;
}

