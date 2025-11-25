//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L1 Q1

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var getConcatenation = function (nums) {
      // Concatenate the nums array with itself using the concat method
      return nums.concat(nums);
      // Alternatively: return [...nums, ...nums];
};
