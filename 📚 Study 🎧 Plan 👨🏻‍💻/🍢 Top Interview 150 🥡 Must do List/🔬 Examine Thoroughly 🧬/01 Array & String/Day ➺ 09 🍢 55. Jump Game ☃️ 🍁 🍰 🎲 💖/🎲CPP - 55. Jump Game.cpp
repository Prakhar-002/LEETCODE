//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 55

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
      bool canJump(vector<int>& nums) {
            int jump = 0;  // Maximum reachable index

            // Iterate through each index
            for (int i = 0; i < nums.size(); i++) {
                  // If the current index is beyond the maximum reachable index, return false
                  if (i > jump) {
                        return false;
                  }

                  // Update the maximum reachable index
                  jump = max(jump, i + nums[i]);
            }

            // If we can iterate through all elements, reaching the last index is possible
            return true;
      }
};

