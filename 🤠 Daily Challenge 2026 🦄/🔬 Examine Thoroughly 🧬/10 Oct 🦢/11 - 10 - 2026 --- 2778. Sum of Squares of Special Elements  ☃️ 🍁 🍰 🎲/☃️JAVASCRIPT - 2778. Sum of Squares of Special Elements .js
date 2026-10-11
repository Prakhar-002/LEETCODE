//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2778

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

/**
 * @param {number[]} nums
 * @return {number}
 */
var sumOfSquares = function(nums) {
      let res = 0;
      const n = nums.length;

      // Iterate through elements using 1-based indexing
      for (let i = 1; i <= n; i++) {
            // An element is special if i divides n
            if (n % i === 0) {
                  res += nums[i - 1] * nums[i - 1];
            }
      }

      return res;
};