//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 120

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var minimumTotal = function (triangle) {
      // Initialize DP array with zeros, one element longer than base row
      const n = triangle.length;
      const dp = new Array(n + 1).fill(0);

      // Work from the last row upwards
      for (let row = n - 1; row >= 0; row--) {
            for (let i = 0; i < triangle[row].length; i++) {
                  // For each position, sum with the smaller of the two below
                  dp[i] = triangle[row][i] + Math.min(dp[i], dp[i + 1]);
            }
      }
      // Return the minimum path sum at the top
      return dp[0];
};
