//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 153

//? ⌚ Time complexity ➺ O(log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int findMin(int[] nums) {
            int n = nums.length - 1; // Last index
            int l = 0; // Left pointer
            int r = n; // Right pointer

            // If the array is already sorted, return first element
            if (nums[0] <= nums[n]) {
                  return nums[0];
            }

            // Binary search to locate the minimum element
            while (l <= r) {
                  int m = l + (r - l) / 2; // Mid index

                  // If mid element is greater than last element, go right
                  if (nums[m] > nums[n]) {
                        l = m + 1;
                  } else {
                        r = m - 1; // Otherwise, go left
                  }
            }

            // l points to the minimum element
            return nums[l];
      }
}
