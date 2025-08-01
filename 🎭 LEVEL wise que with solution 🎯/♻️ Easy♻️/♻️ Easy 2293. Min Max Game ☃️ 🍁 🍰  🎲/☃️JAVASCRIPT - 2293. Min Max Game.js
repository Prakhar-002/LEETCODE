//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2293

//? ⌚ Time complexity ➺ O(n * 2) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var minMaxGame = function (nums) {
      // Continue reducing the array until one element remains
      while (nums.length > 1) {
            const newNums = [];

            // Process each pair based on even/odd index
            for (let i = 0; i < nums.length / 2; i++) {
                  if (i % 2 === 0) {
                        // Even index: take min of the pair
                        newNums[i] = Math.min(nums[2 * i], nums[2 * i + 1]);
                  } else {
                        // Odd index: take max of the pair
                        newNums[i] = Math.max(nums[2 * i], nums[2 * i + 1]);
                  }
            }

            // Update nums with the new reduced array
            nums = newNums;
      }

      // Return the final result
      return nums[0];
};
