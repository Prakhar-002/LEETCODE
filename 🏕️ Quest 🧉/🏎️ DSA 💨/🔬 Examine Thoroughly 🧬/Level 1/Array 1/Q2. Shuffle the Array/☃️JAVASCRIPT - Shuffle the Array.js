//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L1 Q2

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var shuffle = function (nums, n) {
      let l = 0, r = Math.floor(nums.length / 2);
      const res = [];

      // Interleave elements from left and right halves
      while (r < nums.length) {
            res.push(nums[l++]);
            res.push(nums[r++]);
      }
      return res;
};
