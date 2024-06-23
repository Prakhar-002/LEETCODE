//! https://github.com/Prakhar-002/LEETCODE

var minIncrementForUnique = function(nums) {
      // Sort the array
      nums.sort((a, b) => a - b);

      // Make variable 
      let increment = 0;
      for (let i = 1; i < nums.length; i++) {
            // check adjacent values  
            if (nums[i - 1] >= nums[i]) {
                  // inc by diff of two value and + 1 
                  increment += 1 + nums[i - 1] - nums[i];
                  // make Ith value to I - 1 th value +1 
                  nums[i] = nums[i - 1] + 1;
            }
      } 

      return increment;
};
