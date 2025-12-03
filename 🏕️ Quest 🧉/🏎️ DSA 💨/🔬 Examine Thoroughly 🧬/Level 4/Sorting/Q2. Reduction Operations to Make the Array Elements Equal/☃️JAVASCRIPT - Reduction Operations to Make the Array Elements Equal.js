//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L4.1 Q2

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var reductionOperations = function (nums) {
      const n = nums.length;
      let count = 0;

      // Sort the array so that equal values are adjacent and the array is non-decreasing.
      // After sorting, reductions conceptually move higher values down through each
      // distinct value level until all become equal to the minimum.
      nums.sort((a, b) => a - b);

      // Iterate from left to right, starting from index 1
      for (let i = 1; i < n; i++) {
            // Whenever nums[i] is different from nums[i - 1], it means nums[i]
            // is a new, larger distinct value. All elements from index i to n-1
            // will need one extra "level" of operations to eventually reach the minimum.
            if (nums[i] !== nums[i - 1]) {
                  count += n - i;
            }
      }

      // Total number of reduction operations needed
      return count;
};
