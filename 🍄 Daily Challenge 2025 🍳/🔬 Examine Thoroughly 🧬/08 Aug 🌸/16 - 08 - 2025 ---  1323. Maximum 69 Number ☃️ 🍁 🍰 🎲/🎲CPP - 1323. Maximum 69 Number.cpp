//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1323

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
      int maximum69Number (int num) {
            // Convert the integer to a string for easy modification
            string s = to_string(num);

            // ----------------------------------------------------------
            // Iterate through the digits to find the first '6'
            // ----------------------------------------------------------
            for (int i = 0; i < s.length(); i++) {
                  // If the current digit is '6'
                  if (s[i] == '6') {
                        // Change it to '9'
                        s[i] = '9';
                        // Since we want the maximum possible number,
                        // changing the leftmost '6' to '9' will yield the largest result.
                        // So, we can stop after the first replacement.
                        break;
                  }
            }

            // Convert the string back to an integer
            return stoi(s);
      }
};
