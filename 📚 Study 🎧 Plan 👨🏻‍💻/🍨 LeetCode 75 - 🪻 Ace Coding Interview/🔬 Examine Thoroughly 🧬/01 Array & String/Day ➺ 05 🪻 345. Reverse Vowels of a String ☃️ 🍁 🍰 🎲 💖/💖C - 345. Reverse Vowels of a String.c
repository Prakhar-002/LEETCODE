//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 345

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = strlen(s))

//? 🧺 Space complexity ➺ O(n)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

bool isVowel(char c) {
      c = tolower(c);
      return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

char* reverseVowels(char* s) {
      if (s == NULL) return NULL;

      int left = 0;
      int right = strlen(s) - 1;

      // Use two pointers to find and swap vowels
      while (left < right) {
            // Move left pointer to the right until a vowel is found
            while (left < right && !isVowel(s[left])) {
                  left++;
            }

            // Move right pointer to the left until a vowel is found
            while (left < right && !isVowel(s[right])) {
                  right--;
            }

            // If both pointers are at vowels, swap them
            if (left < right) {
                  char ch = s[left];
                  s[left] = s[right];
                  s[right] = ch;

                  // Move the pointers inward to continue checking
                  left++;
                  right--;
            }
      }

      return s;
}