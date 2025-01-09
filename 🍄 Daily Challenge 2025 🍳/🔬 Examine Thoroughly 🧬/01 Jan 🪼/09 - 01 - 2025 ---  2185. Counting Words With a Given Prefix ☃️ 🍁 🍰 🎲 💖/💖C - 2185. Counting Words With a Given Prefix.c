//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2185

//? ⌚ Time complexity ➺ O(n * m) 👉🏻   n = No. of words

//? 🧺 Space complexity ➺ O(1) 👉🏻  m = len(prefix)   

#include <stdio.h>
#include <string.h>

int prefixCount(char* words[], int size, const char* prefix) {
      // Initialize a counter to store the number of matching prefixes
      int count = 0;
      int prefixLength = strlen(prefix);

      // Iterate through each word in the word list
      for (int i = 0; i < size; i++) {
            // Check if the current word starts with the given prefix
            if (strncmp(words[i], prefix, prefixLength) == 0) {
                  // Increment the counter if a match is found
                  count++;
            }
      }

      // Return the final count of words matching the prefix
      return count;
}
