var canJump = function(nums) {
      let jump = 0;

      for (let i = 0; i < nums.length; i++) {
            if (i > jump) {
                  return false;
            }

            jump = Math.max(jump, i + nums[i]);
      }

      return true;
};