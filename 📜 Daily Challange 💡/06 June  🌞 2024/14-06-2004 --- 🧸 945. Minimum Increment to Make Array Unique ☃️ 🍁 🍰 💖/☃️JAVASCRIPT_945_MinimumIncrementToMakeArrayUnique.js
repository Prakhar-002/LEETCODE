var minIncrementForUnique = function(nums) {
      nums.sort((a, b) => a - b);

      let increment = 0;
      for (let i = 1; i < nums.length; i++) {
            if (nums[i - 1] >= nums[i]) {
                  increment += 1 + nums[i - 1] - nums[i];
                  nums[i] = nums[i - 1] + 1;
            }
      }

      return increment;
};
