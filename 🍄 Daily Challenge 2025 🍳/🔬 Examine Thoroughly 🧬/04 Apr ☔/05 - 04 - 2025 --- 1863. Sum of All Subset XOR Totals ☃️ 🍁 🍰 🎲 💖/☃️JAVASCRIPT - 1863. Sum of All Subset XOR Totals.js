//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1863

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var subsetXORSum = function (nums) {
      // Store the bitwise OR of all elements
      let xorSum = 0;

      for (let num of nums) {
            xorSum |= num;
      }

      // Total subset XOR sum = xorSum * 2^(nums.length - 1)
      return xorSum * (1 << (nums.length - 1));
};
