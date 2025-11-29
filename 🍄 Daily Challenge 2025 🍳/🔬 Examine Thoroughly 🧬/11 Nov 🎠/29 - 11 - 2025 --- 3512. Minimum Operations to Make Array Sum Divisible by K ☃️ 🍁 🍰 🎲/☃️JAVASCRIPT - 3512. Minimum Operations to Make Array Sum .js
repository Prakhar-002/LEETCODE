//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3512

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var minOperations = function (nums, k) {
      // Sum all elements in the array
      const totalSum = nums.reduce((sum, num) => sum + num, 0);

      // The minimal number of operations is totalSum % k
      // Each operation can increment/decrement sum by 1 (modulo k perspective)
      return totalSum % k;
};
