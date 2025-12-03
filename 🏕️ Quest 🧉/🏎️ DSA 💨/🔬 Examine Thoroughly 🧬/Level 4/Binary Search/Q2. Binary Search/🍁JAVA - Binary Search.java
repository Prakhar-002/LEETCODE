//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 704

//? ⌚ Time complexity ➺ O(log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int search(int[] nums, int target) {
            int l = 0, r = nums.length - 1;  // Initialize left and right pointers

            while (l <= r) {  // Continue until search space is exhausted
                  int m = l + (r - l) / 2;  // Compute mid index to avoid overflow

                  if (nums[m] == target) {
                        return m;  // Target found at index m
                  } else if (nums[m] < target) {
                        l = m + 1;  // Target is in the right half
                  } else {
                        r = m - 1;  // Target is in the left half
                  }
            }

            return -1;  // Target not found
      }
}