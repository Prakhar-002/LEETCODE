//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 268

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var missingNumber = function (nums) {
      const n = nums.length;

      // Expected sum: n * (n + 1) / 2
      // JavaScript Number handles up to ~9e15 safely
      const expectedSum = n * (n + 1) / 2;

      // Actual sum of array elements
      const actualSum = nums.reduce((sum, num) => sum + num, 0);

      // Missing number is the difference
      return expectedSum - actualSum;
};
