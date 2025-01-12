//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 916

//? ⌚ Time complexity ➺ O(m * p + n * q) 

//*   👉🏻  n = len(word1) p = avg(len(word in word1))
//*   👉🏻  m = len(word2) q = avg(len(word in word2))

//? 🧺 Space complexity ➺ O(1)   

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void wordsLetterCount(const char* word, int* letters) {
      memset(letters, 0, 26 * sizeof(int)); // Initialize array with zeros.
      for (int i = 0; word[i] != '\0'; i++) {
            // Increment the count for the corresponding letter.
            letters[word[i] - 'a']++;
      }
}

bool isUniversal(const char* word, int* word2MaxCnt) {
      int count[26];
      wordsLetterCount(word, count);

      // Check if the word satisfies all frequency requirements.
      for (int i = 0; i < 26; i++) {
            if (count[i] < word2MaxCnt[i]) {
                  return false;
            }
      }

      return true;
}

char** wordSubsets(char** word1, int word1Size, char** word2, int word2Size, int* returnSize) {
      int word2MaxCnt[26] = {0}; // Maximum letter frequencies for word2.
      int count[26];

      // Update maximum frequency counts for each letter in word2.
      for (int i = 0; i < word2Size; i++) {
            wordsLetterCount(word2[i], count);
            for (int j = 0; j < 26; j++) {
                  if (count[j] > word2MaxCnt[j]) {
                        word2MaxCnt[j] = count[j];
                  }
            }
      }

      char** universal = (char**)malloc(word1Size * sizeof(char*));
      *returnSize = 0;

      // Check each word in word1 against the conditions.
      for (int i = 0; i < word1Size; i++) {
            if (isUniversal(word1[i], word2MaxCnt)) {
                  universal[*returnSize] = word1[i];
                  (*returnSize)++;
            }
      }

      return universal;
}
