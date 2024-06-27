//! https://github.com/Prakhar-002/LEETCODE


//Todo 📌 QUESTION NUMBER 1442 

//? ⌚ Time complexity -> O(n) 

//? 🧺 Space complexity -> O(1) 

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


//-------------------------------------------------------------------------------


var singleNumber = function(nums) {
      nums.sort();

      let arr = [0, 0];
      let k = 0;

      for (let i = 0; i < nums.length; i += 2) {
            if ((i + 1) < (nums.length) && nums[i] != nums[i + 1]) {
                  arr[k++] = nums[i--];
            }
      }

      if (k == 1) {
            arr[1] = nums[nums.length - 1];
      }

      return arr;
};
