//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1657

//? ⌚ Time complexity ➺ O(n + m) 👉🏻  n = len(word1)

//? 🧺 Space complexity ➺ O(1)    👉🏻  m = len(word2)

#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
      return *(int*)a - *(int*)b;
}

bool closeStrings(const char* word1, const char* word2) {
      // Get lengths of the words
      int len1 = strlen(word1);
      int len2 = strlen(word2);

      // If lengths of the words don't match, they cannot be close
      if (len1 != len2) {
            return false;
      }

      // Frequency arrays for 26 lowercase English letters
      int freq1[26] = {0}, freq2[26] = {0};

      // Populate the frequency arrays
      for (int i = 0; i < len1; i++) {
            freq1[word1[i] - 'a']++;
            freq2[word2[i] - 'a']++;
      }

      // Check if both words use the same set of characters
      for (int i = 0; i < 26; i++) {
            if ((freq1[i] > 0) != (freq2[i] > 0)) {
                  return false;
            }
      }

      // Sort the frequency arrays
      qsort(freq1, 26, sizeof(int), compare);
      qsort(freq2, 26, sizeof(int), compare);

      // Compare the sorted frequency arrays
      for (int i = 0; i < 26; i++) {
            if (freq1[i] != freq2[i]) {
                  return false;
            }
      }

      return true;
}
