//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3223

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(1)

#include <stdio.h>
#include <string.h>

int minimumLength(const char* s) {
      // Create an array to count occurrences of each letter in the string
      int charFreq[26] = {0};

      // Iterate over each character in the string
      for (int i = 0; s[i] != '\0'; i++) {
            // Increment the count for the corresponding character
            charFreq[s[i] - 'a']++;
      }

      // Initialize the result variable to store the minimum length
      int minLength = 0;

      // Iterate through the frequency counts
      for (int i = 0; i < 26; i++) {
            if (charFreq[i] > 0) { // If the character appears in the string
                  // Add 1 if frequency is odd, otherwise add 2
                  minLength += (charFreq[i] % 2 == 1) ? 1 : 2;
            }
      }

      // Return the calculated minimum length
      return minLength;
}
