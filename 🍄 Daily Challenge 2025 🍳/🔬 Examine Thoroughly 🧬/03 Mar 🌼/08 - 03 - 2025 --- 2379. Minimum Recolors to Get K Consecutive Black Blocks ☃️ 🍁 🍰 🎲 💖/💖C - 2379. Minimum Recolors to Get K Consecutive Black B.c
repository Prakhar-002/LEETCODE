//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2379

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(blocks)

//? 🧺 Space complexity ➺ O(1)

#include <stdio.h>
#include <string.h>

int minimumRecolors(char *blocks, int k) {
      int l = 0;          // Left pointer for the sliding window
      int curBlack = 0;   // Count of black ('B') blocks in the current window
      int maxBlack = 0;   // Maximum black ('B') blocks found in any window of size k
      int n = strlen(blocks); // Get the length of the string

      // Iterate over the string using right pointer 'r'
      for (int r = 0; r < n; r++) {
            // If window size exceeds k, remove the leftmost element
            if ((r - l + 1) > k) {
                  // If the leftmost element is 'B', decrease count
                  if (blocks[l] == 'B') {
                        curBlack--;
                  }
                  l++; // Move the left pointer forward
            }

            // Add the current element to the window
            if (blocks[r] == 'B') {
                  curBlack++;
            }

            // Update the maximum number of 'B' blocks seen in any window of size k
            if (curBlack > maxBlack) {
                  maxBlack = curBlack;
            }
      }

      // Minimum recolors needed = k - maxBlack (number of 'W' blocks in the best window)
      return k - maxBlack;
}
