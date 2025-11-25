//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L1 Q2

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <vector>
using namespace std;

class Solution {
public:
      vector<int> shuffle(vector<int>& nums, int n) {
            int l = 0, r = nums.size() / 2;
            vector<int> res(nums.size());
            int idx = 0;

            // Interleave elements from left and right halves
            while (r < (int)nums.size()) {
                  res[idx++] = nums[l++];
                  res[idx++] = nums[r++];
            }

            return res;
      }
};
