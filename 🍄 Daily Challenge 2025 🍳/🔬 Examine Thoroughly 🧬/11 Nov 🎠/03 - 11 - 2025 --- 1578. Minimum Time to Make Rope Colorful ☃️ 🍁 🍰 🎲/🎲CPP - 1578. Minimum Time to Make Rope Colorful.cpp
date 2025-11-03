//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1578

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(colors)

//? 🧺 Space complexity ➺ O(1)

#include <string>
#include <vector>
using namespace std;

class Solution {
public:
      int minCost(string colors, vector<int> &neededTime) {
            int res = 0; // Total minimum removal cost
            int l = 0;   // Left pointer for current color segment

            for (int r = 1; r < (int)colors.size(); r++) {
                  if (colors[r] == colors[l]) {
                        // Remove smaller cost color to keep one
                        if (neededTime[l] < neededTime[r]) {
                              res += neededTime[l];
                              l = r;
                        }
                        else {
                              res += neededTime[r];
                              // l remains to compare with further duplicates
                        }
                  }
                  else {
                        // Move left pointer when color changes
                        l = r;
                  }
            }
            return res;
      }
};
