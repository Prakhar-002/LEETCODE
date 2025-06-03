//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 162

//? ⌚ Time complexity ➺ O(log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

int findPeakElement(int* nums, int numsSize) {
      // Initialize left and right pointers
      int left = 0;
      int right = numsSize - 1;

      // Binary search loop
      while (left < right) {

            // Calculate mid index
            int mid = left + (right - left) / 2;

            // If mid element is greater than next
            if (nums[mid] > nums[mid + 1]) {
                  right = mid; // Move to left half
            } else {
                  left = mid + 1; // Move to right half
            }
      }

      // Return the peak index
      return left;
}
