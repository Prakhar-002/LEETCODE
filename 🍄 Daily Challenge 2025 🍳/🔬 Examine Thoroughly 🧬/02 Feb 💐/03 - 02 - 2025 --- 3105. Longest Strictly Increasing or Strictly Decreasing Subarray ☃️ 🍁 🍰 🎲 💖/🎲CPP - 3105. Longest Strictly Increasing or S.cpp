//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3105

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
      int longestMonotonicSubarray(vector<int>& nums) {
            // Variables to track increasing and decreasing subsequences
            int inc = 1, dec = 1, maxLength = 1;

            // Iterate to find the longest decreasing subarray
            for (size_t i = 1; i < nums.size(); i++) {
                  if (nums[i] < nums[i - 1]) {
                        dec++; // Increase dec count
                  } else {
                        dec = 1; // Reset dec count
                  }
                  maxLength = max(maxLength, dec);
            }

            // Iterate to find the longest increasing subarray
            for (size_t i = 1; i < nums.size(); i++) {
                  if (nums[i] > nums[i - 1]) {
                        inc++; // Increase inc count
                  } else {
                        inc = 1; // Reset inc count
                  }
                  maxLength = max(maxLength, inc);
            }

            // Return the maximum length found
            return maxLength;
      }
};
