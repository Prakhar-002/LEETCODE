//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2779

//? ⌚ Time complexity ➺ O(n Log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var maximumBeauty = function (nums, k) {
      // Sort the array to process elements in non-decreasing order
      nums.sort((a, b) => a - b);

      // Variable to track the maximum valid subarray length
      let beautyArrLen = 0;

      // Left pointer for the sliding window
      let l = 0;

      // Iterate with the right pointer through the array
      for (let r = 0; r < nums.length; r++) {
            // Shrink the window if the difference exceeds 2 * k
            while (nums[r] - nums[l] > 2 * k) {
                  l++;
            }

            // Update the maximum valid subarray length
            beautyArrLen = Math.max(beautyArrLen, r - l + 1);
      }

      return beautyArrLen;
}
