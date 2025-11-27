//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 136

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var singleNumber = function(nums) {
      let xorNum = 0; // Initialize XOR accumulator

      // XOR all numbers - duplicates cancel
      for (let n of nums) {
            xorNum ^= n;
      }

      // Return the unique number
      return xorNum;
};
