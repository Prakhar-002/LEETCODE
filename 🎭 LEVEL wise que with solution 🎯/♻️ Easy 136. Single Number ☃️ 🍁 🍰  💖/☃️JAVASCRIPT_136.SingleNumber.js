var singleNumber = function(nums) {
      let xorNum = nums[0];

      for (let i = 1; i < nums.length; i++) {
            xorNum ^= nums[i];
      }
      return xorNum;
};