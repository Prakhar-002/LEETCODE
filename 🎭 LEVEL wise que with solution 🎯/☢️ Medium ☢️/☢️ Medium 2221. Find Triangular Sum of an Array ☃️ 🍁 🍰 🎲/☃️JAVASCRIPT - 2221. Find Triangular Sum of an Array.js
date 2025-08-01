//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2221

//? ⌚ Time complexity ➺ O(n * 2) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var triangularSum = function (nums) {
      // Repeat until only one number remains
      while (nums.length > 1) {
            const temp = [];

            // Fill the temp array with (a + b) % 10 values
            for (let i = 0; i < nums.length - 1; i++) {
                  temp.push((nums[i] + nums[i + 1]) % 10);
            }

            // Update nums to the reduced temp array
            nums = temp;
      }

      // Return the final single element
      return nums[0];
};
