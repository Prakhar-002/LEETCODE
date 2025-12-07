//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3578

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

const { AvlTree } = require("datastructures-js");

var countPartitions = function (nums, k) {
      const n = nums.length;
      const MOD = 1000000007;  // Modulo 10^9+7 for large results

      // dp[i] = number of ways to partition prefix nums[0..i-1]
      const dp = new Array(n + 1).fill(0);

      // prefix[i] = sum(dp[0] + dp[1] + ... + dp[i]) for O(1) range sum queries
      const prefix = new Array(n + 1).fill(0);

      // AVL Tree maintains sorted unique values in current window (O(log n) insert/remove/min/max)
      const cnt = new AvlTree();

      // freq[num] = count of num in current window [j..i]
      const freq = new Map();

      // Base case: empty prefix has 1 way (do nothing)
      dp[0] = 1;
      prefix[0] = 1;

      let j = 0;  // Left pointer of sliding window
      for (let i = 0; i < nums.length; i++) {
            // Add nums[i] to window
            const currentFreq = freq.get(nums[i]) || 0;
            freq.set(nums[i], currentFreq + 1);

            // Only insert into AVL tree if first occurrence (unique values only)
            if (currentFreq === 0) {
                  cnt.insert(nums[i]);
            }

            // Shrink window while max - min > k
            while (j <= i && cnt.max().getValue() - cnt.min().getValue() > k) {
                  // Remove nums[j] from window
                  const leftFreq = freq.get(nums[j]) || 0;
                  freq.set(nums[j], leftFreq - 1);

                  // Remove from AVL tree only when frequency reaches 0
                  if (leftFreq === 1) {
                        cnt.remove(nums[j]);
                  }
                  j++;
            }

            // dp[i+1] = sum(dp[j] to dp[i]) = all valid partition starts in current window
            const prevPrefix = (j > 0) ? prefix[j - 1] : 0;
            dp[i + 1] = (prefix[i] - prevPrefix + MOD) % MOD;

            // Update prefix sums for O(1) range queries
            prefix[i + 1] = (prefix[i] + dp[i + 1]) % MOD;
      }

      // dp[n] = total ways to partition entire array
      return dp[n];
};
