//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3202

//? ⌚ Time complexity ➺ O(k^2 + n * k) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(k ^ 2)

var maximumLength = function (nums, k) {
      // Create a 2D array dp of size k x k, filled with 0
      const dp = Array.from({ length: k }, () => Array(k).fill(0));

      // Variable to keep track of the maximum length
      let res = 0;

      // Iterate through all numbers in the array
      for (let num of nums) {
            num %= k; // Take modulo k

            // Loop over all possible previous modulo values
            for (let prev = 0; prev < k; prev++) {
                  // Update dp for the current alternating pattern
                  dp[prev][num] = dp[num][prev] + 1;

                  // Update the result with the max value found
                  res = Math.max(res, dp[prev][num]);
            }
      }

      // Return the final result
      return res;
};
