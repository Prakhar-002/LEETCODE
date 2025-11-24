//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1018

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var prefixesDivBy5 = function (nums) {
      const res = [];
      let prefix = 0;

      // Iterate through each bit in the array
      for (const n of nums) {
            // Left shift prefix by 1, add current bit, modulo 5
            prefix = ((prefix << 1) + n) % 5;
            // Append true if prefix divisible by 5, else false
            res.push(prefix === 0);
      }

      return res;
};
