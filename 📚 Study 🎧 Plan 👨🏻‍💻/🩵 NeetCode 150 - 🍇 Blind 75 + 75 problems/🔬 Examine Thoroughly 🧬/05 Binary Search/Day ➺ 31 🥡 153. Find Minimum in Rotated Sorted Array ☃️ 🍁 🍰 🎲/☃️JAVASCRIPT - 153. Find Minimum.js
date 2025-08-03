//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 153

//? ⌚ Time complexity ➺ O(log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var findMin = function (nums) {
      let n = nums.length - 1;  // Last index
      let l = 0;                // Left pointer
      let r = n;                // Right pointer

      // If array is already sorted
      if (nums[0] <= nums[n]) {
            return nums[0];
      }

      // Binary search to find the minimum element
      while (l <= r) {
            let m = Math.floor(l + (r - l) / 2);  // Mid index

            // If mid is greater than last, min must be in right half
            if (nums[m] > nums[n]) {
                  l = m + 1;
            } else {
                  r = m - 1;
            }
      }

      // Return the smallest element
      return nums[l];
};
