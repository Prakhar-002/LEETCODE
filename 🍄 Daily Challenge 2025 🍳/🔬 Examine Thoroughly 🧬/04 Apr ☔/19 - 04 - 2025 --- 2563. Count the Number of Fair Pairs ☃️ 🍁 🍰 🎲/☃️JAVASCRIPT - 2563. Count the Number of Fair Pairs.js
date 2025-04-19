//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2563

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var countFairPairs = function (nums, lower, upper) {
      // Sort the array in ascending order
      nums.sort((a, b) => a - b);

      // Count pairs with sum in range [lower, upper]
      return count(nums, upper) - count(nums, lower - 1);

      function count(nums, target) {
            let res = 0;                          // Initialize result counter
            let left = 0;                         // Start pointer
            let right = nums.length - 1;          // End pointer

            while (left < right) {
                  if (nums[left] + nums[right] > target) {
                        // If sum exceeds target, shrink right pointer
                        right--;
                  } else {
                        // Valid pairs from left to right
                        res += (right - left);
                        left++;                   // Move to next left element
                  }
            }

            return res;                           // Return count of valid pairs
      }
};
