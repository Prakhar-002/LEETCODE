//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2176

//? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var countPairs = function (nums, k) {
      let pairs = 0;  // Initialize the count of valid pairs

      // Iterate over every index i from 0 to n - 1
      for (let i = 0; i < nums.length; i++) {

            // For every i, check all indices j > i
            for (let j = i + 1; j < nums.length; j++) {

                  // Check both conditions:
                  // 1. nums[i] === nums[j] (values are the same)
                  // 2. (i * j) % k === 0 (product of indices divisible by k)
                  if (nums[i] === nums[j] && (i * j) % k === 0) {
                        pairs++;  // Valid pair found, increase count
                  }
            }
      }

      return pairs;  // Return the total number of valid pairs
};
