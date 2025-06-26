//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2200

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var findKDistantIndices = function (nums, key, k) {
      const res = [];
      let r = 0;                 // r keeps track of the last unprocessed index
      const n = nums.length;

      // Traverse array to find all positions with value === key
      for (let j = 0; j < n; j++) {
            if (nums[j] === key) {
                  // Compute left and right bounds of range to process
                  let l = Math.max(r, j - k);
                  r = Math.min(n - 1, j + k) + 1;

                  // Add all indices in [l, r) to the result array
                  for (let i = l; i < r; i++) {
                        res.push(i);
                  }
            }
      }

      return res;
};