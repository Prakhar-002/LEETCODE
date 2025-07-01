//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3330

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(word)

//? 🧺 Space complexity ➺ O(1)

#include <stdio.h>
#include <string.h>

// Function to count the number of possible strings
int possibleStringCount(const char* word) {
      int ans = 1;                    // Start with one possible string
      int n = strlen(word);          // Get the length of the string

      for (int i = 1; i < n; i++) {
            // If two consecutive characters are the same
            if (word[i - 1] == word[i]) {
                  ans++;             // Increase the count of possible strings
            }
      }

      return ans;                    // Return the final result
}
