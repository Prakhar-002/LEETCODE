//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 338

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

var countBits = function (n) {
      let dp = new Array(n + 1).fill(0); // dp[i] = bit count of i

      let offset = 1; // Tracks highest power of 2

      for (let i = 1; i <= n; i++) {
            // Update offset at powers of 2
            if (offset * 2 === i) {
                  offset = i;
            }

            // DP formula: count bits in i by reusing i-offset
            dp[i] = 1 + dp[i - offset];
      }

      return dp;
};
