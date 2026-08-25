//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3718

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <vector>
#include <algorithm>

class Solution {
public:
      int missingMultiple(vector<int>& nums, int k) {
            // Sort the array in ascending order
            sort(nums.begin(), nums.end());

            // Initialize search at the first multiple of k
            int multiple = k;

            for (int num : nums) {
                  // If the multiple exists in nums, advance to the next multiple
                  if (num == multiple) {
                        multiple += k;
                  }
                  // If num is greater than multiple, multiple was not present in nums
                  else if (num > multiple) {
                        return multiple;
                  }
            }

            // Return the smallest missing multiple
            return multiple;
      }
};