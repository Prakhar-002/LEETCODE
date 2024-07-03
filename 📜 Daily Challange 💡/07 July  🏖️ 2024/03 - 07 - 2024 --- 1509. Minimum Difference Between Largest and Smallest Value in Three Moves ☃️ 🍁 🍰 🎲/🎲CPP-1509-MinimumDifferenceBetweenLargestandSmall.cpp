//! https://github.com/Prakhar-002/LEETCODE


// Todo 📌 QUESTION NUMBER 1509

//? ⌚ Time complexity -> O(NLogN) 👉 For sorting

//? 🧺 Space complexity -> O(1) 

#include <algorithm>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
      int minDifference(vector<int>& nums) {
            // if length is <= 4 return 0
            // cause after removing 3 elem from our array then will be max 1 value left
            // and diff of that value to itself is 0
            if (nums.size() <= 4) {
                  return 0;
            }

            int res = INT_MAX;

            // sort first
            sort(nums.begin(), nums.end());

            // There will be only 4 cases by which we can remove 3 elem from our array
            // we will check every case for min res
            // cases are -> remove from left and right
            // left 0   right 3
            // left 1   right 2
            // left 2   right 1
            // left 3   right 0
            for (int left = 0; left < 4; left++) {
                  int right = nums.size() - 4 + left;

                  res = min(res, nums[right] - nums[left]);
            }

            return res;
      }
};
