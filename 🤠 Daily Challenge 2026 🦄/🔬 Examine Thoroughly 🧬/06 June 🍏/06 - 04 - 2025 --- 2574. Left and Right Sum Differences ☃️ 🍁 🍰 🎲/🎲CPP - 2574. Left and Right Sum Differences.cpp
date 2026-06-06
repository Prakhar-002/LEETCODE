//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2574

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <vector>
#include <cmath>
using namespace std;

class Solution {
public:
      vector<int> leftRightDifference(vector<int>& nums) {
            // Start with total sum on the right, nothing on the left
            int rightSum = 0;
            for (int num : nums)
                  rightSum += num;

            int         leftSum = 0;
            vector<int> res;

            for (int num : nums) {
                  // Remove current element from right before comparing
                  rightSum -= num;

                  res.push_back(abs(leftSum - rightSum));

                  // Add current element to left for next iteration
                  leftSum += num;
            }

            return res;
      }
};