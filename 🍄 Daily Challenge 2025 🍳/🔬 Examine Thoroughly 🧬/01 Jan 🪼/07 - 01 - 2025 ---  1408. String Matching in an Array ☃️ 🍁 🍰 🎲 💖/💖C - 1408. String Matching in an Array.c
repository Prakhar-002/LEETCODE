//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1408

//? ⌚ Time complexity ➺ O(n^2 * m) 👉🏻  n = len(words)

//? 🧺 Space complexity ➺ O(n)      👉🏻  m = avg(len(word))

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char** stringMatching(char** words, int wordsSize, int* returnSize) {
      // Allocate memory for the result (maximum possible size)
      char** result = (char**)malloc(wordsSize * sizeof(char*));
      int resultCount = 0;

      // Iterate through each word in the list
      for (int i = 0; i < wordsSize; i++) {
            for (int j = 0; j < wordsSize; j++) {
                  // Check if the potential substring is part of the current word
                  // and ensure it's not the same as the current word
                  if (i != j && strstr(words[i], words[j]) != NULL) {
                        // Check if the substring is already in the result
                        int exists = 0;
                        for (int k = 0; k < resultCount; k++) {
                              if (strcmp(result[k], words[j]) == 0) {
                                    exists = 1;
                                    break;
                              }
                        }

                        // If not, add it to the result
                        if (!exists) {
                              result[resultCount] = (char*)malloc((strlen(words[j]) + 1) * sizeof(char));
                              strcpy(result[resultCount], words[j]);
                              resultCount++;
                        }
                  }
            }
      }

      *returnSize = resultCount;
      return result;
}
