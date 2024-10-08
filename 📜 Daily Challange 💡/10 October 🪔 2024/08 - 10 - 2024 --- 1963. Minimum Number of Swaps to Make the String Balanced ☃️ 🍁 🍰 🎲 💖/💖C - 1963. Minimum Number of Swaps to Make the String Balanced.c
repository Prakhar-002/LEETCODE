//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1963

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(1)

#include <string.h>
#include <stdlib.h>

int minSwaps(char* s) {
      // `extraClose` tracks the net number of extra closing brackets
      int extraClose = 0;
      // `maxClose` keep track of the maximum imbalance of extra closing brackets
      int maxClose = 0;
      int len = strlen(s);

      // iterates through each character in the string `s`
      for (int i = 0; i < len; i++) {
            // If the character is an opening bracket `[`
            if (s[i] == '[') {
                  // means that there is one less extra closing bracket needed
                  // so `extraClose` is decremented
                  extraClose--;
            }
            // If the character is a closing bracket `]`
            else {
                  // increases the count of extra closing brackets, 
                  // so `extraClose` is incremented
                  extraClose++;
            }

            // updates `maxClose` if the current `extraClose` value exceeds `maxClose`
            maxClose = (extraClose > maxClose) ? extraClose : maxClose;
      }

      // Swapping two brackets fixes two imbalances at once. 
      // Therefore, the total number of swaps is half the maximum imbalance
      return (maxClose + 1) / 2;
}