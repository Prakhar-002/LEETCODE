//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 1598

//? ⌚ Time complexity -> O(n) 👉 Traversing logs

//? 🧺 Space complexity -> O(1)

#include <stdio.h>
#include <string.h>
#include <math.h>

int minOperations(char **logs, int logsSize) {
      int crawler = 0;

      // Traverse whole logs
      for (int i = 0; i < logsSize; i++) {

            // if "./" be in same directory
            if (strcmp(logs[i], "./") == 0) {
                  continue;
            }

            // if "../" move to our parent directory we dec our level
            else if (strcmp(logs[i], "../") == 0) {
                  crawler = fmax(crawler - 1, 0);
            }

            // else go to child directory we inc our level
            else {
                  crawler++;
            }
      }

      return crawler;
}