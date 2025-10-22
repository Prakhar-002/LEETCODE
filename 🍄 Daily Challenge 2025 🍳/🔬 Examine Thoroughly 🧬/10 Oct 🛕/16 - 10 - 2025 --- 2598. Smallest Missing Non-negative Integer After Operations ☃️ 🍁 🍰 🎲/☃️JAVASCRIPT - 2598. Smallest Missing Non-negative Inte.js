//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2598

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(m)  ->  m = values

var findSmallestInteger = function (nums, value) {
      const mp = new Array(value).fill(0); // Remainder counts

      // Count remainder frequencies (handle negatives properly)
      for (const x of nums) {
            const v = ((x % value) + value) % value;
            mp[v]++;
      }

      let mex = 0;  // Smallest missing integer candidate

      // Sequentially build numbers while we still have remainders to support them
      while (mp[mex % value] > 0) {
            mp[mex % value]--;  // Consume one from repetition bucket
            mex++;              // Try next number
      }

      // Return first integer that can no longer be composed
      return mex;
};
