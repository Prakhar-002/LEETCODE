//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 704

//? ⌚ Time complexity ➺ O(log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
public:
      int search(vector<int>& nums, int target) {
            int l = 0, r = nums.size() - 1;  // Initialize left and right pointers

            while (l <= r) {  // Continue while the range is valid
                  int m = l + (r - l) / 2;  // Calculate mid index safely

                  if (nums[m] == target) {
                        return m;  // Found the target at index m
                  } else if (nums[m] < target) {
                        l = m + 1;  // Search right half
                  } else {
                        r = m - 1;  // Search left half
                  }
            }

            return -1;  // Target not found
      }
};