var minPatches = function(nums, n) {
      // REACH is number up to which we can add our number and got value
      let reach = 1;
      let i = 0;
      let patches = 0;

      // we have to go up to given n so we'll loop for reach until it reaches n  
      while (reach <= n) {
            // if we exceed the value present in array 
            if (i < nums.length && nums[i] <= reach) {
                  // we'll add our array value 
                  reach += nums[i++];
            } else {
                  // else we'll keep adding ourself to reach (N)
                  reach += reach;
                  // If we add ourself mean we added a number to array hence we inc our patches count
                  patches++;
            }
      }

      return patches;
};