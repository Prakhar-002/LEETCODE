//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 162

//? ⌚ Time complexity ➺ O(log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var findPeakElement = function (nums) {
      // Initialize left and right pointers
      let left = 0;
      let right = nums.length - 1;

      // Binary search loop
      while (left < right) {

            // Calculate mid index
            let mid = Math.floor((left + right) / 2);

            // Check if mid is greater than next
            if (nums[mid] > nums[mid + 1]) {
                  right = mid; // Peak is on left
            } else {
                  left = mid + 1; // Peak is on right
            }
      }

      // Return the index of the peak
      return left;
};
