//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2089

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var targetIndices = function (nums, target) {
      // Sort in ascending order
      nums.sort((a, b) => a - b);

      const res = [];

      // Collect all indices matching the target
      for (let i = 0; i < nums.length; i++) {
            if (nums[i] === target) {
                  res.push(i);
            }
      }

      return res;
};