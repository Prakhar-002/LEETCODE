//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2264

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(num)

//? 🧺 Space complexity ➺ O(1) 

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
      string largestGoodInteger(string num) {
            // Variable to store the largest "good integer" substring found so far
            string res = "";

            // Iterate through string, checking triples of digits
            for (int i = 0; i < (int)num.size() - 2; i++) {
                  // Check if three consecutive characters are the same
                  if (num[i] == num[i + 1] && num[i] == num[i + 2]) {
                        // If res is empty OR current triple digit > recorded result
                        if (res.empty() || num[i] > res[0]) {
                              // Store substring of 3 identical digits
                              res = num.substr(i, 3);
                        }
                  }
            }

            // Return the largest good integer found (empty if none found)
            return res;
      }
};
