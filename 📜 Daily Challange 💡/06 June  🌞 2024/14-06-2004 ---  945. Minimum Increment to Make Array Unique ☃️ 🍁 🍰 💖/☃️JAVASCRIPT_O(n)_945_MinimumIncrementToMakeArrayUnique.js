var minIncrementForUnique = function(nums) {
      let increment = 0

      let freqCount = new Array(nums.length + Math.max(...nums)).fill(0);

      for (const n of nums) {
            freqCount[n]++;
      }

      for (let i = 0; i < freqCount.length; i++) {
            if (freqCount[i] > 1) {
                  let extra = freqCount[i] - 1;
                  freqCount[i + 1] += extra;
                  increment += extra;
            }
      }

      return increment;
};