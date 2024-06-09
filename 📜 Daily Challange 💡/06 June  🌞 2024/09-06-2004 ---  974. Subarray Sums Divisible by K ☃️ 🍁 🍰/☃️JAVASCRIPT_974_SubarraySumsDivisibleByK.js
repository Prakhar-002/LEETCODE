var subarraysDivByK = function(nums, k) {
      let prefixSum = 0
      let res = 0

      const prefixCntMap = new Map();

      prefixCntMap.set(0, 1);

      for (const n of nums) {
            prefixSum += n;
            let reminder = prefixSum % k;

            if (reminder < 0) {
                  reminder += k;
            }

            res += prefixCntMap.has(reminder) ? prefixCntMap.get(reminder) : 0;

            prefixCntMap.set(reminder, (prefixCntMap.get(reminder) || 0) + 1);
      }

      return res;

};