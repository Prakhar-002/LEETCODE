//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 53

//? ⌚ Time complexity -> O(n) 👉 For length 

//? 🧺 Space complexity -> O(1) 

var maxSubArray = function (nums) {
      let curSum = 0;
      let maxSum = -Infinity;

      for (let num of nums) {
            // if less than 0 make it's own train
            // else it will a part of existing train
            curSum = curSum < 0 ? num : curSum + num;

            // take the max
            maxSum = Math.max(maxSum, curSum);
      }

      return maxSum;
};