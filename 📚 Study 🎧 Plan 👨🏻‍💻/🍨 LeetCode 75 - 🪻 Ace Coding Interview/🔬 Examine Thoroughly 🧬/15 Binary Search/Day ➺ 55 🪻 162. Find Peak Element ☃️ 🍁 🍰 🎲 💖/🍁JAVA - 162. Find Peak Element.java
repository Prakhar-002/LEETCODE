//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 162

//? ⌚ Time complexity ➺ O(log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

class Solution {
      public int findPeakElement(int[] nums) {

            // Initialize left and right pointers
            int left = 0;
            int right = nums.length - 1;

            // Binary search loop
            while (left < right) {

                  // Calculate mid index
                  int mid = left + (right - left) / 2;

                  // If the middle element is greater than the next one,
                  // then a peak must be on the left side (including mid)
                  if (nums[mid] > nums[mid + 1]) {
                        right = mid;
                  } else {
                        // Else the peak is on the right side
                        left = mid + 1;
                  }
            }

            // When left == right, we've found a peak
            return left;
      }
}