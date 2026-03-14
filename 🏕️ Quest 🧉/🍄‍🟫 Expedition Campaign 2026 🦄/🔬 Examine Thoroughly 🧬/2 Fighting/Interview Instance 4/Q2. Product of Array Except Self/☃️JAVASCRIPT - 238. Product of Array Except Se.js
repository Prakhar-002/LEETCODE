//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 238

//? ⌚ Time complexity -> O(n) 👉 length of nums 

//? 🧺 Space complexity -> O(1)

var productExceptSelf = function(nums) {
      // making a output array for storing result
      let res = new Array(nums.length).fill(1);

      // for prefix multiply
      let prefix = 1;

      for (let i = 0; i < nums.length; i++) {
            res[i] = prefix;
            prefix *= nums[i];
      }

      // for postfix multiply
      let postfix = 1;

      for (let i = nums.length - 1; i >= 0; i--) {
            res[i] *= postfix;
            postfix *= nums[i];
      }

      return res;
};