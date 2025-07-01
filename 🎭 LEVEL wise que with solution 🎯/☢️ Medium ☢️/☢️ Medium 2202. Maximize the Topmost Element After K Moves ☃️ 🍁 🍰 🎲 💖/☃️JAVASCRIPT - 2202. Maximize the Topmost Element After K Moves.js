//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2202

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var maximumTop = function (nums, k) {
      const n = nums.length;

      // Case 1: Only one element and k is odd → cannot leave the stack non-empty
      if (n === 1 && k % 2 === 1) return -1;

      // Case 2: No operation → return top element
      if (k === 0) return nums[0];

      // Case 3: Remove top, can only return next (if exists)
      if (k === 1) {
            return n > 1 ? nums[1] : -1;
      }

      // General case: get max from first (k - 1) elements
      let maxVal = -Infinity;
      let limit = Math.min(n, k - 1);  // Max we can remove safely

      for (let i = 0; i < limit; i++) {
            maxVal = Math.max(maxVal, nums[i]);
      }

      // If we can push back nums[k], include it
      if (k < n) {
            maxVal = Math.max(maxVal, nums[k]);
      }

      return maxVal;
};
