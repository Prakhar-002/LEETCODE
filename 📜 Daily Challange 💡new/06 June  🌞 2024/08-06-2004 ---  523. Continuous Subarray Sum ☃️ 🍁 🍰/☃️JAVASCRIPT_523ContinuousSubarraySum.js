var checkSubarraySum = function(nums, k) {
      const reminderMap = new Map();

      let total = 0;

      // Initialize Map with 0 to -1
      reminderMap.set(0, -1);

      // Iterate whole array
      for (let i = 0; i < nums.length; i++) {
            // Take total sum of el
            total += nums[i];

            // FInd rem if k > 0 
            let rem = k == 0 ? total : total % k;

            // If our rem not exist in map assign it with index
            if (!reminderMap.has(rem)) {
                  reminderMap.set(rem, i);
            } 

            // if our index - value of rem is greater than 1 means >= 2 return true
            else if ((i - reminderMap.get(rem)) > 1) {
                  return true;
            }
      }

      // return false for all other case
      return false;
};