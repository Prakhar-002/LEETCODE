//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 2191

//? ⌚ Time complexity -> O(NLogN) 👉🏻 Build in sort

//? 🧺 Space complexity -> O(n) 👉🏻 making pairs array

var sortJumbled = function (mapping, nums) {
      let pairs = [];

      // Go through the whole array
      for (let i = 0; i < nums.length; i++) {
            let num = nums[i];
            let mapNum = 0;
            let base = 1;

            // handle the case where num is 0
            if (num === 0) {
                  mapNum = mapping[num];
            }

            // extract the num according to map array
            while (num > 0) {
                  // get the last digit
                  let digit = num % 10;
                  // divide by 10
                  num = Math.floor(num / 10);
                  // multiply with base and add the num given in mapping
                  mapNum += base * mapping[digit];
                  // increment base by * 10
                  base *= 10;
            }

            // we got the mapNum and index of it
            // we have to sort it based on the map Number
            // if they are same then we will sort according to the index
            pairs.push([mapNum, i]);
      }

      // this will sort by mapNum first and then according to idx
      pairs.sort((a, b) => a[0] - b[0]);

      // extract the real value by idx from nums
      return pairs.map(pair => nums[pair[1]]);
};