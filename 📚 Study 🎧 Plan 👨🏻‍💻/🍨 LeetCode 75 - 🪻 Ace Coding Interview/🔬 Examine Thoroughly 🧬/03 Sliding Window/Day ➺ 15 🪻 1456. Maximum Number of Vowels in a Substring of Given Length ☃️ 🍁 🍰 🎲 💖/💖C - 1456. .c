//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1456

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(1)

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Function to check if a character is a vowel
bool isVowel(char c) {
      return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

// Function to find the maximum number of vowels in a substring of length k
int maxVowels(char *s, int k) {
      int l = 0; // Initialize the left pointer for the sliding window
      int curVowels = 0; // Current count of vowels in the window
      int maxVowels = 0; // Maximum count of vowels found

      // Iterate through the string with the right pointer
      for (int r = 0; r < strlen(s); r++) {
            // Increment the count if the current character is a vowel
            if (isVowel(s[r])) {
                  curVowels++;
            }

            // If the window size exceeds k, adjust by removing the leftmost character
            if (r - l + 1 > k) {
                  if (isVowel(s[l])) {
                        curVowels--;
                  }
                  l++; // Move the left pointer to the right
            }

            // Update the maximum vowels count if the current count is greater
            if (curVowels > maxVowels) {
                  maxVowels = curVowels;
            }
      }

      // Return the maximum number of vowels found
      return maxVowels;
}

