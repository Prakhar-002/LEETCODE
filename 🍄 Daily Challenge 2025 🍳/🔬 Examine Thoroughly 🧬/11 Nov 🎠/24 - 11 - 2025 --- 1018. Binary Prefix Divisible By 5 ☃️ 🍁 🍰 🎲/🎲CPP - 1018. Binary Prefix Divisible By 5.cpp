//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1018

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

// C++ version
#include <vector>

class Solution {
public:
      vector<bool> prefixesDivBy5(vector<int>& nums) {
            vector<bool> res;
            int prefix = 0;

            // Iterate through each bit in the vector
            for (int n : nums) {
                  // Left shift prefix by 1, add current bit, modulo 5
                  prefix = ((prefix << 1) + n) % 5;
                  // Append true if prefix divisible by 5, else false
                  res.push_back(prefix == 0);
            }

            return res;
      }
};
