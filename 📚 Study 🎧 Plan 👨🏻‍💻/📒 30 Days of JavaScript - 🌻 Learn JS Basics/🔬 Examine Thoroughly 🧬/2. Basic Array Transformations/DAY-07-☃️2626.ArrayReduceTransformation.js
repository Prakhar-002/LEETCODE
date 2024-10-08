var reduce = function (nums, fn, init) {
      // return nums.reduce(fn, init);

      // OR

      let sum = init;
      for (let i = 0; i < nums.length; i++) {
            sum = fn(sum, nums[i]);
      }

      return sum;
};