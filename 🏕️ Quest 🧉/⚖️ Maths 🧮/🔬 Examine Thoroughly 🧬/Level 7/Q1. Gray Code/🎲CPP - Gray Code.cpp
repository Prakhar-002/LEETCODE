//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest Maths L7 Q1

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <vector>

class Solution {
public:
      vector<int> grayCode(int n) {
            vector<int> result;
            int totalNumbers = 1 << n;  // Compute the size: 2^n numbers

            // Generate Gray code for each number from 0 to 2^n - 1
            for (int i = 0; i < totalNumbers; ++i) {
                  // Formula: Gray(i) = i ^ (i >> 1)
                  result.push_back(i ^ (i >> 1));
            }

            return result;  // Return the sequence of Gray codes
      }
};
