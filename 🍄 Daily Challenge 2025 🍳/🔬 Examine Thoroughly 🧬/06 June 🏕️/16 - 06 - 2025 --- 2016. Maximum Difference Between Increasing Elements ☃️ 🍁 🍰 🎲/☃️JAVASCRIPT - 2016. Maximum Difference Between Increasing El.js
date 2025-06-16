//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2016

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var maximumDifference = function (nums) {
      let ans = -1;              // Initialize result as -1 (default if no positive difference found)
      let pre_min = nums[0];     // Store the minimum element seen so far

      // Loop from second element to the end
      for (let i = 1; i < nums.length; i++) {
            if (nums[i] > pre_min) {
                  // If current number is greater than previous minimum, calculate difference
                  ans = Math.max(ans, nums[i] - pre_min);
            } else {
                  // Otherwise, update the minimum to the current number
                  pre_min = nums[i];
            }
      }

      return ans;  // Return the maximum positive difference or -1
};
