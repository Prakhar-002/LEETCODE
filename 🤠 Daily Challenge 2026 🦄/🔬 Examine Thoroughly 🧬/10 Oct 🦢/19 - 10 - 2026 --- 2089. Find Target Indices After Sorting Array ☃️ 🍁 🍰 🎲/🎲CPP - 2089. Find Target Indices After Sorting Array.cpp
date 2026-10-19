//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2089

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
      vector<int> targetIndices(vector<int>& nums, int target) {
            // Sort the numbers in non-decreasing order
            sort(nums.begin(), nums.end());

            vector<int> res;

            // Collect all indices where the element matches the target
            for (size_t i = 0; i < nums.size(); ++i) {
                  if (nums[i] == target) {
                        res.push_back(i);
                  }
            }

            return res;
      }
};