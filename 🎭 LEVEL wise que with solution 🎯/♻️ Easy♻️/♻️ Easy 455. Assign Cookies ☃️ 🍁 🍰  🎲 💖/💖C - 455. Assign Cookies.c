//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 455

//? ⌚ Time complexity ➺ O(n log n + m log m) 👉🏻  n = len(g)

//? 🧺 Space complexity ➺ O(1)  👉🏻 m = len(s)

#include <stdio.h>
#include <stdlib.h>

// Comparison function for qsort
int compare(const void *a, const void *b) {
      return (*(int *)a - *(int *)b);
}

int findContentChildren(int *g, int gSize, int *s, int sSize) {
      qsort(g, gSize, sizeof(int), compare); // Sort greed factors
      qsort(s, sSize, sizeof(int), compare); // Sort cookie sizes

      int gIdx = 0, sIdx = 0, content = 0;

      while (gIdx < gSize && sIdx < sSize) {
            while (sIdx < sSize && g[gIdx] > s[sIdx]) {
                  sIdx++; // Try next cookie
            }
            if (sIdx < sSize) {
                  content++; // Assign cookie
                  sIdx++;
            }
            gIdx++;
      }

      return content;
}
