var sortColors = function(nums) {
      let st = 0
      let end = nums.length - 1

      for (let i = 0; i < nums.length;) {
            if (nums[i] == 0 && i != st) {
                  // If we found 0 we'll shift it in starting of array
                  let temp = nums[st];
                  nums[st] = nums[i];
                  nums[i] = temp;
                  st++;
            } else if (end > i && nums[i] == 2) {
                  // if we found 2 we'll shift it at end of array
                  let temp = nums[end];
                  nums[end] = nums[i];
                  nums[i] = temp;
                  end--;
            } else {
                  // if we found 1 we'll inc pointer by one
                  i++;
            }
      }
};