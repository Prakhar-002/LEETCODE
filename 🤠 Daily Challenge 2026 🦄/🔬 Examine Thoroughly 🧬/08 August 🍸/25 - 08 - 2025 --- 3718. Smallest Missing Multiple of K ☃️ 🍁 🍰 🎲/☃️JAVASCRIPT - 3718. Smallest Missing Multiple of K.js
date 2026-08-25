//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3718

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var missingMultiple = function(nums, k) {
      // Sort array in ascending numerical order
      nums.sort((a, b) => a - b);

      // Start at the first positive multiple of k
      let multiple = k;

      for (let i = 0; i < nums.length; i++) {
            const num = nums[i];

            // If current multiple exists, look for the next one
            if (num === multiple) {
                  multiple += k;
            }
            // If num is greater than the target multiple, the target is missing
            else if (num > multiple) {
                  return multiple;
            }
      }

      // Return the next missing multiple
      return multiple;
};