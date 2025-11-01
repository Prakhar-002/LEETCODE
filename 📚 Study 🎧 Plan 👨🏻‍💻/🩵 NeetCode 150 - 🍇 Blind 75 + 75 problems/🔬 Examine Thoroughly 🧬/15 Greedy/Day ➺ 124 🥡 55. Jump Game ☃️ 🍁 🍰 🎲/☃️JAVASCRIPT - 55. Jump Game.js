//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 55

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var canJump = function (nums) {
      let jump = 0;  // Maximum reachable index

      // Iterate through each index
      for (let i = 0; i < nums.length; i++) {
            // If the current index is beyond the maximum reachable index, return false
            if (i > jump) {
                  return false;
            }

            // Update the maximum reachable index
            jump = Math.max(jump, i + nums[i]);
      }

      // If we can iterate through all elements, reaching the last index is possible
      return true;
}