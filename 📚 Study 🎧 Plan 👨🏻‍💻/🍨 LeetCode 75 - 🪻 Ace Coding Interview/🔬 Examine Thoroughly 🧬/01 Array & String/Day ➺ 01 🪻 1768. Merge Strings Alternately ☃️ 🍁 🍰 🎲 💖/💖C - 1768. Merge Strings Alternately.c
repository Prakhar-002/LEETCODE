//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1768

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* mergeAlternately(char* word1, char* word2) {
      int len1 = strlen(word1);
      int len2 = strlen(word2);
      int mergeLen = len1 + len2;

      // Allocate memory for the merged string
      char* merge = (char*)malloc((mergeLen + 1) * sizeof(char));
      if (merge == NULL) {
            return NULL;  // Memory allocation failed
      }

      // first pointer for traversing `word1`
      int ptrOne = 0;
      // second pointer for traversing `word2`
      int ptrTwo = 0;
      // pointer for the merged string
      int mergePtr = 0;

      // loop continues as long as both `ptrOne` is < the length of `word1` 
      // and `ptrTwo` is < the length of `word2`
      while (ptrOne < len1 && ptrTwo < len2) {
            // appends the char from `word1` first
            merge[mergePtr++] = word1[ptrOne++];
            // then appends the char from `word2`
            merge[mergePtr++] = word2[ptrTwo++];
      }

      // if `word1` has some char remain
      while (ptrOne < len1) {
            // append remaining char
            merge[mergePtr++] = word1[ptrOne++];
      }

      // if `word2` has some char remain
      while (ptrTwo < len2) {
            // append remaining char from `word2`
            merge[mergePtr++] = word2[ptrTwo++];
      }

      // Null-terminate the merged string
      merge[mergePtr] = '\0';

      // returns the merged string
      return merge;
}