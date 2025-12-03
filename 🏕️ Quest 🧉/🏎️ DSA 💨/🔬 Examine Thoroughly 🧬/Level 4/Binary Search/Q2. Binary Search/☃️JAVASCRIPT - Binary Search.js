//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 704

//? ⌚ Time complexity ➺ O(log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var search = function (nums, target) {
      let l = 0, r = nums.length - 1;  // Initialize left and right pointers

      while (l <= r) {  // Continue while search range is valid
            let m = l + Math.floor((r - l) / 2);  // Compute mid index safely

            if (nums[m] === target) {
                  return m;  // Target found
            } else if (nums[m] < target) {
                  l = m + 1;  // Search in the right half
            } else {
                  r = m - 1;  // Search in the left half
            }
      }

      return -1;  // Target not found
};