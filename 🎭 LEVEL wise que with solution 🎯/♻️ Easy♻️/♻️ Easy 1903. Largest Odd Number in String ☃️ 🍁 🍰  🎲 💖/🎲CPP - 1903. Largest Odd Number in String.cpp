//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1903

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(num)

//? 🧺 Space complexity ➺ O(1)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
      string largestOddNumber(string num) {
            // Iterate from the last character to the first
            for (int i = (int)num.size() - 1; i >= 0; i--) {
                  // Convert current char to int and check if odd
                  int digit = num[i] - '0';
                  if (digit % 2 != 0) {
                        // Return substring from start to i (inclusive)
                        return num.substr(0, i + 1);
                  }
            }

            // If no odd digit found, return empty string
            return "";
      }
};
