var minIncrementForUnique = function(nums) {
      let increment = 0

      // Make a array of length = length of nums and the max value present in nums array
      let freqCount = new Array(nums.length + Math.max(...nums)).fill(0);

      for (const n of nums) {
            // Count freq of each element
            freqCount[n]++;
      }

      for (let i = 0; i < freqCount.length; i++) {
            // Check if freq of elem is > 1 
            if (freqCount[i] > 1) {
                  // Assign freq = 1 and take out the extra one
                  let extra = freqCount[i] - 1;
                  // add extra freq to next index (for making array unique)
                  freqCount[i + 1] += extra;
                  // add extra to our increment
                  increment += extra;
            }
      }

      return increment;
};