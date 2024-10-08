//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1963

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(1)

#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
      int minSwaps(string s) {
            // `extraClose` tracks the net number of extra closing brackets
            int extraClose = 0;
            // `maxClose` keep track of the maximum imbalance of extra closing brackets
            int maxClose = 0;

            // iterates through each character `ch` in the string `s`
            for (char ch : s) {
                  // If the character is an opening bracket `[`
                  if (ch == '[') {
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
                  maxClose = max(maxClose, extraClose);
            }

            // Swapping two brackets fixes two imbalances at once. 
            // Therefore, the total number of swaps is half the maximum imbalance
            return (maxClose + 1) / 2;
      }
};

