//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2574

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var leftRightDifference = function(nums) {
      // Start with total sum on the right, nothing on the left
      let rightSum = nums.reduce((a, b) => a + b, 0);
      let leftSum  = 0;
      const res    = [];

      for (const num of nums) {
            // Remove current element from right before comparing
            rightSum -= num;

            res.push(Math.abs(leftSum - rightSum));

            // Add current element to left for next iteration
            leftSum += num;
      }

      return res;
};