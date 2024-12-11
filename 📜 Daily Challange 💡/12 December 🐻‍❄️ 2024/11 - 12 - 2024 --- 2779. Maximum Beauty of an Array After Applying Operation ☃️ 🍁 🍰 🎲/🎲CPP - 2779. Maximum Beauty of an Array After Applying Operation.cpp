//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2779

//? ⌚ Time complexity ➺ O(n Log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
      int maximumBeauty(vector<int>& nums, int k) {
            // Sort the array to process elements in non-decreasing order
            sort(nums.begin(), nums.end());
            
            // Variable to track the maximum valid subarray length
            int beautyArrLen = 0;

            // Left pointer for the sliding window
            int l = 0;

            // Iterate with the right pointer through the array
            for (int r = 0; r < nums.size(); r++) {
                  // Shrink the window if the difference exceeds 2 * k
                  while (nums[r] - nums[l] > 2 * k) {
                        l++;
                  }

                  // Update the maximum valid subarray length
                  beautyArrLen = max(beautyArrLen, r - l + 1);
            }

            return beautyArrLen;
      }
};
