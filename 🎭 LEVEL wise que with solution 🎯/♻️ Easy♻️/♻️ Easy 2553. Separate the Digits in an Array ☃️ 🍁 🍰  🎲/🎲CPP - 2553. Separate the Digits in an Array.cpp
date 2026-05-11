//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2553

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <string>
using namespace std;

class Solution {
public:
      vector<int> separateDigits(vector<int>& nums) {
            vector<int> res;

            for (int num : nums) {
                  // to_string converts the integer to its character representation
                  for (char ch : to_string(num)) {
                        // Subtract '0' to convert char digit to actual int
                        res.push_back(ch - '0');
                  }
            }

            return res;
      }
};