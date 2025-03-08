//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2379

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(blocks)

//? 🧺 Space complexity ➺ O(1)

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
      int minimumRecolors(string blocks, int k) {
            int l = 0;          // Left pointer for the sliding window
            int curBlack = 0;   // Count of black ('B') blocks in the current window
            int maxBlack = 0;   // Maximum black ('B') blocks found in any window of size k

            // Iterate over the string using right pointer 'r'
            for (int r = 0; r < blocks.length(); r++) {
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
                  maxBlack = max(maxBlack, curBlack);
            }

            // Minimum recolors needed = k - maxBlack (number of 'W' blocks in the best window)
            return k - maxBlack;
      }
};
