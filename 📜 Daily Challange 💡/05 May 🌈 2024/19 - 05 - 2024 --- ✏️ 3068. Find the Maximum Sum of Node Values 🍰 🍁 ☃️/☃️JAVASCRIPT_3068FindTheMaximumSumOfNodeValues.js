//! https://github.com/Prakhar-002/LEETCODE


//Todo 📌 QUESTION NUMBER 3068 

var maximumValueSum = function (nums, k, edges) {
      let xorArr = nums.map(n => (n ^ k) - n)
      xorArr.sort((a, b) => b - a);
      let sum = nums.reduce((a, b) => a + b);

      for (let i = 0; i < nums.length; i += 2) {
            if (i == nums.length - 1) {
                  break; 
            }

            let path_sum = xorArr[i] + xorArr[i + 1]

            if (path_sum <= 0) {
                  break;
            }

            sum += path_sum;
      }

      return sum
};