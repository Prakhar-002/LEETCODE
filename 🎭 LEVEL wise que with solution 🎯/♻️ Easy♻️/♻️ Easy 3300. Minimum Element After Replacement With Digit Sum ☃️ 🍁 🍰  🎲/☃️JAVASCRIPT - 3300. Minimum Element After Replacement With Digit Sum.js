//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3300

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var minElement = function(nums) {
      // Extract and sum all digits of a number
      function digitSum(n) {
            let ans = 0;
            while (n > 0) {
                  ans += n % 10;    // Add last digit
                  n   = Math.floor(n / 10);    // Remove last digit
            }
            return ans;
      }

      let res = Infinity;

      for (const n of nums) {
            // Track the minimum digit sum seen so far
            res = Math.min(res, digitSum(n));
      }

      return res;
};