//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 474

//? ⌚ Time complexity ➺ O(l * m * n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(l * m * n)

function findMaxForm(strs, m, n) {
      // dp[i][j] will store the max number of strings that can be formed with at most i zeros and j ones
      const dp = Array.from({ length: m + 1 }, () => new Array(n + 1).fill(0));

      for (const s of strs) {
            let zeros = 0, ones = 0;
            // Count zeros and ones in current string s
            for (const char of s) {
                  if (char === '0') zeros++;
                  else ones++;
            }

            // Traverse dp backwards to avoid using updated states in the same iteration (0/1 knapsack)
            for (let i = m; i >= zeros; i--) {
                  for (let j = n; j >= ones; j--) {
                        // Either skip the string or include it if possible
                        dp[i][j] = Math.max(dp[i][j], 1 + dp[i - zeros][j - ones]);
                  }
            }
      }

      // dp[m][n] contains the max number of strings that can be formed with given constraints
      return dp[m][n];
}
