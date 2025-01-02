//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2559

//? ⌚ Time complexity ➺ O(n + q) 👉🏻  n = len(words)

//? 🧺 Space complexity ➺ O(n)    👉🏻  q = len(queries) 

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

// Helper function to check if a character is a vowel
bool is_vowel(char c) {
      return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int* vowelStrings(char** words, int wordsSize, int** queries, int queriesSize, int* queriesColSize, int* returnSize) {
      // Initialize a prefix sum array to store cumulative counts of vowel strings
      int* vowels_words = (int*)calloc(wordsSize + 1, sizeof(int));

      // Build the prefix sum array
      for (int i = 0; i < wordsSize; i++) {
            // Check if the current word starts and ends with a vowel
            if (is_vowel(words[i][0]) && is_vowel(words[i][strlen(words[i]) - 1])) {
                  // Increment the count at the current index
                  vowels_words[i + 1] = vowels_words[i] + 1;
            } else {
                  // Carry forward the previous count
                  vowels_words[i + 1] = vowels_words[i];
            }
      }

      // Allocate memory for the result array to store query results
      *returnSize = queriesSize;
      int* ans = (int*)malloc(queriesSize * sizeof(int));

      // Process each query
      for (int i = 0; i < queriesSize; i++) {
            int st = queries[i][0];
            int end = queries[i][1];

            // Calculate the count of vowel strings in the range [st, end]
            ans[i] = vowels_words[end + 1] - vowels_words[st];
      }

      // Free the prefix sum array
      free(vowels_words);

      // Return the results for all queries
      return ans;
}
