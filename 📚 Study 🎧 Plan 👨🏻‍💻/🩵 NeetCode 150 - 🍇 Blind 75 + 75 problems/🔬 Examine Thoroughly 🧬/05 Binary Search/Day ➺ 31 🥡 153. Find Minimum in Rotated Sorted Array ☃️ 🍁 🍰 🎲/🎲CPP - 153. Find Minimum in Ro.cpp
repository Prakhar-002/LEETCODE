//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 153

//? ⌚ Time complexity ➺ O(log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
public:
      int findMin(vector<int>& nums) {
            int n = nums.size() - 1;    // Last index
            int l = 0;                  // Left boundary
            int r = n;                  // Right boundary

            // If array is already sorted
            if (nums[0] <= nums[n]) {
                  return nums[0];
            }

            // Binary search for the pivot
            while (l <= r) {
                  int m = l + (r - l) / 2;  // Midpoint

                  // Move to right half if mid is greater than last
                  if (nums[m] > nums[n]) {
                        l = m + 1;
                  } else {
                        r = m - 1;
                  }
            }

            // l will be the index of the minimum value
            return nums[l];
      }
};
