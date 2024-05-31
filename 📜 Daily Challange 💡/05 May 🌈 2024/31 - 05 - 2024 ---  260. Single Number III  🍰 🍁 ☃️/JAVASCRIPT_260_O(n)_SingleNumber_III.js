var singleNumber = function(nums) {
      let xor = 0;
      for (const n of nums) {
            xor ^= n;
      }

      diffBit = 1
      while (!diffBit & xor){
            diffBit = diffBit << 1
      }

      let a = 0
      let b = 0
      for (const n of nums) {
            if (diffBit & n) {
                  a ^= n
            } else {
                  b ^= n
            }
      }

      return [a, b]
};