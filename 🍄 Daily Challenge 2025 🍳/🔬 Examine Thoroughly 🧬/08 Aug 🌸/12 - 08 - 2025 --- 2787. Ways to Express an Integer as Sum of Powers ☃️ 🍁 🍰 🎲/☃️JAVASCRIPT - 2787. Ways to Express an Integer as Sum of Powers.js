//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2787

//? ⌚ Time complexity ➺ O(n * n ^ (1 / x)) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var numberOfWays = function (n, x) {
      const MOD = 1e9 + 7;

      // dp[s] stores the number of ways to make sum s
      let dp = new Array(n + 1).fill(0);
      dp[0] = 1; // Base case: 1 way to make 0 (pick nothing)

      // Loop through base values to raise to power x
      for (let i = 1; i <= n; i++) {
            let val = Math.pow(i, x); // i^x

            // If exceeds n, we can stop
            if (val > n) break;

            // Traverse backwards to avoid reusing the same base multiple times
            for (let j = n; j >= val; j--) {
                  dp[j] = (dp[j] + dp[j - val]) % MOD;
            }
      }

      // Return number of ways to make sum n
      return dp[n];
};
