//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3105

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var longestMonotonicSubarray = function (nums) {
      // Variables to track increasing and decreasing subsequences
      let inc = 1, dec = 1, maxLength = 1;

      // Iterate to find the longest decreasing subarray
      for (let i = 1; i < nums.length; i++) {
            if (nums[i] < nums[i - 1]) {
                  dec++; // Increase dec count
            } else {
                  dec = 1; // Reset dec count
            }
            maxLength = Math.max(maxLength, dec);
      }

      // Iterate to find the longest increasing subarray
      for (let i = 1; i < nums.length; i++) {
            if (nums[i] > nums[i - 1]) {
                  inc++; // Increase inc count
            } else {
                  inc = 1; // Reset inc count
            }
            maxLength = Math.max(maxLength, inc);
      }

      // Return the maximum length found
      return maxLength;
}