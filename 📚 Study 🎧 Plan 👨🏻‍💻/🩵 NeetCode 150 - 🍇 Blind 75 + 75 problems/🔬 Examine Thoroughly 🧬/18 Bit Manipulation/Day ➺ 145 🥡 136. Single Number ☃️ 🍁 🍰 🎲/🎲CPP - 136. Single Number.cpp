//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 136

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <vector>
using namespace std;

class Solution {
public:
      int singleNumber(vector<int>& nums) {
            int xorNum = 0; // Initialize XOR accumulator

            // XOR all elements, duplicates cancel out
            for (int n : nums) {
                  xorNum ^= n;
            }

            // Return the unique element
            return xorNum;
      }
};
