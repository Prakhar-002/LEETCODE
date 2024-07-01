//! https://github.com/Prakhar-002/LEETCODE

var subarraySum = function(nums, k) {
      let curSum = 0
      let res = 0

      const prefixMap = new Map(); 

      prefixMap.set(0, 1);

      for (const n of nums) {
            curSum += n; 
            let diff = curSum - k;

            res += prefixMap.has(diff) ? prefixMap.get(diff) : 0;

            prefixMap.set(curSum, (prefixMap.get(curSum) || 0) + 1);
      }

      return res;
};