//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 33

//? ⌚ Time complexity ➺ O(log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1) 

class Solution {
      public int search(int[] nums, int target) {
            int l = 0; // Initialize left pointer
            int r = nums.length - 1; // Initialize right pointer

            while (l <= r) { // Perform binary search
                  int m = l + (r - l) / 2; // Calculate mid index

                  if (nums[m] == target) { // If target is found at mid
                        return m;
                  }

                  if (nums[m] >= nums[l]) { // Left half is sorted
                        if (nums[l] <= target && target <= nums[m]) {
                              r = m - 1; // Target is in left half
                        } else {
                              l = m + 1; // Target is in right half
                        }
                  } else { // Right half is sorted
                        if (nums[m] <= target && target <= nums[r]) {
                              l = m + 1; // Target is in right half
                        } else {
                              r = m - 1; // Target is in left half
                        }
                  }
            }

            return -1; // Target not found
      }
}